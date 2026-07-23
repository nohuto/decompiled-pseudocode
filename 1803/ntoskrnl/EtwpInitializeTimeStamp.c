/*
 * XREFs of EtwpInitializeTimeStamp @ 0x140589770
 * Callers:
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  void *v2; // rax
  _QWORD *v3; // rdi
  LARGE_INTEGER result; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  switch ( *(_DWORD *)(a1 + 216) )
  {
    case 2:
      v2 = EtwpGetSystemTime;
      break;
    case 3:
      v2 = EtwpGetCycleCount;
      break;
    case 4:
      v7 = 0LL;
      if ( (int)((__int64 (__fastcall *)(__int64 *))off_140398AC0)(&v7) < 0 )
      {
        *(_DWORD *)(a1 + 216) = 1;
        goto LABEL_5;
      }
      v2 = EtwpGetHostPerfCounter;
      break;
    default:
      *(_DWORD *)(a1 + 216) = 1;
LABEL_5:
      v2 = PpmQueryTime;
      break;
  }
  *(_QWORD *)(a1 + 40) = v2;
  v3 = (_QWORD *)(a1 + 320);
  if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
  {
    result.QuadPart = EtwpRefTimeSystem;
    v5 = *(_DWORD *)(a1 + 216);
    *v3 = EtwpRefTimeSystem;
    if ( v5 == 3 )
    {
      result.QuadPart = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 328) = EtwpRefTimeCycle;
    }
    else
    {
      v6 = EtwpRefTimePerfCounter;
      if ( v5 == 2 )
        v6 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 328) = v6;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 328) = (*(__int64 (**)(void))(a1 + 40))();
    result = KeQuerySystemTimePrecise((LARGE_INTEGER *)(a1 + 320));
  }
  *(_OWORD *)(a1 + 448) = *(_OWORD *)v3;
  return result;
}
