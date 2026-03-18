/*
 * XREFs of PdcPoReportLidState @ 0x140764CB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopNotifyLidStateChange @ 0x140762E00 (PopNotifyLidStateChange.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  PopAcquirePolicyLock();
  PopNotifyLidStateChange(a1);
  return PopReleasePolicyLock();
}
