/*
 * XREFs of PdcPoNotifyState @ 0x140764AE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopBlockSessionSwitch @ 0x1405EEE60 (PopBlockSessionSwitch.c)
 *     PopNotifyCsStateExited @ 0x140764EE0 (PopNotifyCsStateExited.c)
 */

ULONG __fastcall PdcPoNotifyState(char a1)
{
  ULONG result; // eax
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  PopIsPdcEngaged = a1;
  result = PopReleasePolicyLock();
  if ( !PopIsPdcEngaged )
  {
    v3 = -1;
    PopBlockSessionSwitch(1, &v3);
    PopNotifyCsStateExited(v3);
    return PopBlockSessionSwitch(0, &v3);
  }
  return result;
}
