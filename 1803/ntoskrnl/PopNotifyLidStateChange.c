/*
 * XREFs of PopNotifyLidStateChange @ 0x140762E00
 * Callers:
 *     PdcPoReportLidState @ 0x140764CB0 (PdcPoReportLidState.c)
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     PopTriggerMonitorPowerEvent @ 0x14076AEC4 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopNotifyLidStateChange(char a1)
{
  unsigned int v1; // ebx
  bool v3; // zf
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( PopErrataReportingIncorrectLidState || PopLidOpened == a1 )
  {
LABEL_7:
    v3 = a1 == 0;
    goto LABEL_8;
  }
  PopLidOpened = a1;
  v3 = a1 == 0;
  if ( !a1 )
  {
    if ( PopPlatformAoAc && !PopConsoleDisplayState )
      PopTriggerMonitorPowerEvent(0LL, 15LL);
    goto LABEL_7;
  }
LABEL_8:
  LOBYTE(v1) = !v3;
  v5 = v1;
  ExNotifyCallback(ExCbPowerState, (PVOID)4, (PVOID)v1);
  return PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_CHANGE, 4u, &v5);
}
