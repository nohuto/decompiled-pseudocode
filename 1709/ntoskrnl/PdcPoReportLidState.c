/*
 * XREFs of PdcPoReportLidState @ 0x1406FF320
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  unsigned int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  v2 = 0;
  if ( !PopErrataReportingIncorrectLidState )
    PopLidOpened = a1;
  LOBYTE(v2) = a1 != 0;
  v4 = v2;
  ExNotifyCallback(ExCbPowerState, (PVOID)4, (PVOID)v2);
  PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_CHANGE, 4u, &v4);
  return PopReleasePolicyLock();
}
