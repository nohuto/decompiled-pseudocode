/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00585FC
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00566B0 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C00581C0 (NtUserSetWinEventHook.c)
 *     FreeThreadsWinEvents @ 0x1C0058540 (FreeThreadsWinEvents.c)
 * Callees:
 *     <none>
 */

tagObjLock **__fastcall CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  tagObjLock::LockExclusive(DomainLockRef);
  return a1;
}
