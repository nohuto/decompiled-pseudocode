/*
 * XREFs of PopDirectedDripsTriggerTransition @ 0x140761EEC
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x140767108 (PopDiagTraceDirectedDripsEngagedStatus.c)
 *     PdcTaskClientRequest @ 0x14078B714 (PdcTaskClientRequest.c)
 */

__int64 __fastcall PopDirectedDripsTriggerTransition(__int64 a1, __int64 a2)
{
  char v3; // cl
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0);
  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( !(_DWORD)result && (v3 & 4) == 0 )
  {
    LOBYTE(a2) = 1;
    result = PdcTaskClientRequest(*(_QWORD *)(a1 + 208), a2);
    if ( (int)result >= 0 )
    {
      _InterlockedExchange(&PopDirectedDripsEngaged, 1);
      PdcTaskClientRequest(*(_QWORD *)(a1 + 208), 0LL);
      LOBYTE(v5) = 1;
      return PopDiagTraceDirectedDripsEngagedStatus(v5);
    }
  }
  return result;
}
