/*
 * XREFs of KeRevertToUserAffinityThread @ 0x1401FCBF0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
