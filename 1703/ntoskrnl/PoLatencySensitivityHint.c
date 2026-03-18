/*
 * XREFs of PoLatencySensitivityHint @ 0x140130BD0
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x1405818E0 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140069EE0 (PpmInterlockedUpdateTimeNoFence.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     PpmTryAcquireLock @ 0x140130D9C (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x140135D90 (PpmCheckCustomRun.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v2; // r9d
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  unsigned __int64 v5; // rdx
  bool v6; // r11
  bool v7; // cl
  __int64 j; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-88h] BYREF
  int v10; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-30h] BYREF

  v2 = 0;
  for ( i = (char *)&PpmCurrentProfile[175 * dword_14034BB2C + 14] + 1; !*i; ++i )
  {
    if ( (unsigned int)++v2 >= 2 )
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
  v6 = PpmInterlockedUpdateTimeNoFence(
         &PpmPerfLatencyBoostExpiration,
         PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
         &v12) != 0;
  if ( a1 == 4 && PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v5, &v11) )
    v6 = 1;
  if ( v6 )
  {
    _InterlockedOr(v9, 0);
    v7 = v12 <= PpmCheckLastExecutionTime;
    if ( a1 == 4 && v11 <= PpmCheckLastExecutionTime )
      v7 = 1;
    if ( v7 )
    {
      if ( (unsigned __int8)PpmTryAcquireLock() )
      {
        for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
          *(_BYTE *)(j + 486) = 1;
        PpmCheckCustomRun(3LL);
      }
      else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
      {
        ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
      }
    }
  }
}
