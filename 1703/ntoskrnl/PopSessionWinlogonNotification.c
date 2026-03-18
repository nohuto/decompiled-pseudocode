/*
 * XREFs of PopSessionWinlogonNotification @ 0x14041DDF0
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x14041DEE4 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopReleaseAdaptiveLock @ 0x14041FF90 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140420088 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x14042015C (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x140420304 (PopUpdateTimeouts.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 *     PopLazySensorActiveInput @ 0x1406D4648 (PopLazySensorActiveInput.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v3; // bl
  const EVENT_DESCRIPTOR *v5; // rcx
  int v6; // edi
  const char *v7; // rax
  const char *v8; // r8
  __int64 result; // rax
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v11 = 0LL;
  v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_ADPM_SESSION_LOCKED;
  v6 = 0;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v7 = "Locked";
  if ( !v2 )
    v7 = "Unlocked";
  v8 = "Console";
  if ( !v3 )
    v8 = "Remote";
  result = PopPrintEx(3u, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v8, a1, v7);
  if ( v3 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      byte_140349E94 = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe )
      {
        if ( !byte_140349E95 )
        {
          byte_140349E96 = 1;
          HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
          BYTE1(qword_140349E50) = 1;
          PopUpdateTimeouts(a1, &v11, 0LL);
        }
      }
    }
    else
    {
      byte_140349E94 = 0;
      if ( byte_140349E96 )
      {
        byte_140349E96 = 0;
        PopLazySensorActiveInput(a1);
      }
    }
    PopReleaseAdaptiveLock();
    LOBYTE(v6) = v2 != 0;
    LODWORD(v11) = v6;
    return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED);
  }
  return result;
}
