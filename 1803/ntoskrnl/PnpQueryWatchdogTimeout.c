/*
 * XREFs of PnpQueryWatchdogTimeout @ 0x1400758EC
 * Callers:
 *     PnpEnableWatchdog @ 0x1400757B4 (PnpEnableWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14015EF80 (PnpQueryWatchdogBugcheckEnabled.c)
 */

__int64 __fastcall PnpQueryWatchdogTimeout(char a1)
{
  if ( a1 )
    return 30LL;
  else
    return (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() != 0 ? 0x168 : 0;
}
