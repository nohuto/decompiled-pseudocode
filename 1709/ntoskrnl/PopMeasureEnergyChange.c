/*
 * XREFs of PopMeasureEnergyChange @ 0x1405AD3BC
 * Callers:
 *     PopCalculateCsSummary @ 0x14024457C (PopCalculateCsSummary.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopGetEnergyCounter @ 0x1405AD408 (PopGetEnergyCounter.c)
 */

__int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  result = PopGetEnergyCounter(&v6);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    *(_DWORD *)a1 = v6 | *(_DWORD *)a2;
    result = *((_QWORD *)&v6 + 1) - v5;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v6 + 1) - v5;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)a1 = 1;
  }
  *(_OWORD *)a2 = v6;
  return result;
}
