/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1406D4A60
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14006F310 (PopDeepSleepClearDisengageReason.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1406CEDE4 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

__int64 PopIdleAoAcDozeToS4()
{
  __int64 v1; // [rsp+30h] [rbp-30h] BYREF
  int v2; // [rsp+38h] [rbp-28h]
  _QWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  PopAcquirePolicyLock();
  PopTraceSystemIdleS0LowPowerDoze();
  dword_14034B0D0 = 0;
  memset(v3, 0, 24);
  if ( dword_14034B0E8 == 1 )
    goto LABEL_10;
  if ( dword_14034B0E8 != 2 )
  {
    if ( dword_14034B0E8 == 3 )
    {
      LODWORD(v3[0]) = 13;
      goto LABEL_11;
    }
    if ( dword_14034B0E8 == 4 )
    {
      LODWORD(v3[0]) = 14;
      goto LABEL_11;
    }
LABEL_10:
    LODWORD(v3[0]) = 6;
    goto LABEL_11;
  }
  LODWORD(v3[0]) = 11;
  if ( qword_14034B1D8
    && MEMORY[0xFFFFF78000000008] - qword_14034B1D8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    LODWORD(v3[0]) = 12;
  }
LABEL_11:
  HIDWORD(v3[0]) = 128;
  v2 = 0;
  v1 = 0x8000002400000003uLL;
  PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
  PopReleasePolicyLock();
  _InterlockedAnd(&dword_14034B0EC, 0);
  return PopDeepSleepClearDisengageReason(4);
}
