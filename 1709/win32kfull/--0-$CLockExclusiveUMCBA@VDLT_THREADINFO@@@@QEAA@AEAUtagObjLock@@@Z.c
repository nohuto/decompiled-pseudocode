/*
 * XREFs of ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00582CC
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00566B0 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C00581C0 (NtUserSetWinEventHook.c)
 * Callees:
 *     <none>
 */

tagObjLock **__fastcall CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(
        tagObjLock **a1,
        tagObjLock *a2)
{
  unsigned int DLT; // eax
  unsigned int v5; // eax

  DLT = DLT_THREADINFO::getDLT();
  *a1 = (tagObjLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  v5 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v5);
  tagObjLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}
