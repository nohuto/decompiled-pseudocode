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

__int64 __fastcall PdcPoNotifyState(char a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  PopIsPdcEngaged = a1;
  result = PopReleasePolicyLock();
  if ( !PopIsPdcEngaged )
  {
    v3 = -1;
    PopBlockSessionSwitch(1, (int *)&v3);
    PopNotifyCsStateExited(v3);
    return PopBlockSessionSwitch(0, (int *)&v3);
  }
  return result;
}
