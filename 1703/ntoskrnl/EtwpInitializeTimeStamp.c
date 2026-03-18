/*
 * XREFs of EtwpInitializeTimeStamp @ 0x14054F700
 * Callers:
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  int v2; // ecx
  void *v3; // rax
  __int64 result; // rax
  _OWORD *v5; // rdi
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = *(_DWORD *)(a1 + 200) - 2;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = EtwpGetCycleCount;
    }
    else
    {
      *(_DWORD *)(a1 + 200) = 1;
      v3 = PpmQueryTime;
    }
  }
  else
  {
    v3 = EtwpGetSystemTime;
  }
  *(_QWORD *)(a1 + 40) = v3;
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    result = EtwpRefTimeSystem;
    v5 = (_OWORD *)(a1 + 304);
    v6 = *(_DWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 304) = EtwpRefTimeSystem;
    if ( v6 == 3 )
    {
      result = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
    }
    else
    {
      v7 = EtwpRefTimePerfCounter;
      if ( v6 == 2 )
        v7 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 312) = v7;
    }
  }
  else
  {
    v5 = (_OWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 312) = (*(__int64 (**)(void))(a1 + 40))();
    result = KeQuerySystemTimePrecise((__int64 *)(a1 + 304), v8, v9, v10);
  }
  *(_OWORD *)(a1 + 432) = *v5;
  return result;
}
