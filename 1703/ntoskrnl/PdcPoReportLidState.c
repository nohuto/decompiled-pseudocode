/*
 * XREFs of PdcPoReportLidState @ 0x1406CB360
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14006EEC0 (ExNotifyCallback.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
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
