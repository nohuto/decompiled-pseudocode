/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x14070A2F0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x140706458 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

__int64 PopIdleAoAcDozeToS4()
{
  __int64 v1; // [rsp+30h] [rbp-30h] BYREF
  int v2; // [rsp+38h] [rbp-28h]
  _QWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  PopAcquirePolicyLock();
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140365730 = 0;
  memset(v3, 0, 24);
  if ( dword_140365748 == 1 )
    goto LABEL_10;
  if ( dword_140365748 != 2 )
  {
    if ( dword_140365748 == 3 )
    {
      LODWORD(v3[0]) = 13;
      goto LABEL_11;
    }
    if ( dword_140365748 == 4 )
    {
      LODWORD(v3[0]) = 14;
      goto LABEL_11;
    }
LABEL_10:
    LODWORD(v3[0]) = 6;
    goto LABEL_11;
  }
  LODWORD(v3[0]) = 11;
  if ( qword_140365838
    && MEMORY[0xFFFFF78000000008] - qword_140365838 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    LODWORD(v3[0]) = 12;
  }
LABEL_11:
  HIDWORD(v3[0]) = 128;
  v2 = 0;
  v1 = 0x8000002400000003uLL;
  PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1);
  PopReleasePolicyLock();
  _InterlockedAnd(&dword_14036574C, 0);
  return PopDeepSleepClearDisengageReason(4);
}
