/*
 * XREFs of PoLatencySensitivityHint @ 0x14000DB40
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x1405B3B70 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmTryAcquireLock @ 0x14000DCA0 (PpmTryAcquireLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400FE3F4 (PpmInterlockedUpdateTimeNoFence.c)
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  __int64 v2; // r9
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r9
  bool v7; // r11
  bool v8; // cl
  signed __int32 v9[8]; // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-20h] BYREF

  v2 = 0LL;
  for ( i = (_BYTE *)(2688LL * dword_1403661AC + PpmCurrentProfile + 113); !*i; ++i )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 2 )
      return;
  }
  v10 = a1;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v10;
      EtwWriteEx(v4, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
  v11 = 0LL;
  v7 = (unsigned __int8)PpmInterlockedUpdateTimeNoFence(
                          &PpmPerfLatencyBoostExpiration,
                          PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
                          &v12,
                          v2) != 0;
  if ( a1 == 4 && (unsigned __int8)PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v5, &v11, v6) )
    v7 = 1;
  if ( v7 )
  {
    _InterlockedOr(v9, 0);
    v8 = v12 <= PpmCheckLastExecutionTime;
    if ( a1 == 4 && v11 <= PpmCheckLastExecutionTime )
      v8 = 1;
    if ( v8 )
    {
      if ( (unsigned __int8)PpmTryAcquireLock() )
      {
        PpmCheckCustomRun(3LL);
      }
      else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
      {
        ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
      }
    }
  }
}
