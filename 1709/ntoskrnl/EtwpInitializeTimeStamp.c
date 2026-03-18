/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1404ECC38
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  int v2; // ecx
  void *v3; // rax
  __int64 result; // rax
  _OWORD *v5; // rdi
  int v6; // edx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 216) - 2;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = EtwpGetCycleCount;
    }
    else
    {
      *(_DWORD *)(a1 + 216) = 1;
      v3 = PpmQueryTime;
    }
  }
  else
  {
    v3 = EtwpGetSystemTime;
  }
  *(_QWORD *)(a1 + 40) = v3;
  if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
  {
    result = EtwpRefTimeSystem;
    v5 = (_OWORD *)(a1 + 320);
    v6 = *(_DWORD *)(a1 + 216);
    *(_QWORD *)(a1 + 320) = EtwpRefTimeSystem;
    if ( v6 == 3 )
    {
      result = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 328) = EtwpRefTimeCycle;
    }
    else
    {
      v7 = EtwpRefTimePerfCounter;
      if ( v6 == 2 )
        v7 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 328) = v7;
    }
  }
  else
  {
    v5 = (_OWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 328) = (*(__int64 (**)(void))(a1 + 40))();
    result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 320));
  }
  *(_OWORD *)(a1 + 448) = *v5;
  return result;
}
