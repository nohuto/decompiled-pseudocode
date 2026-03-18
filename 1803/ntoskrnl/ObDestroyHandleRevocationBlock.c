/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x14056FD8C
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14056FB40 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140758C60 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  struct _EX_RUNDOWN_REF *Count; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[2], 0LL);
  Count = (struct _EX_RUNDOWN_REF *)a1->Count;
  while ( Count != a1 )
  {
    v6 = Count;
    LOBYTE(v4) = 1;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    ObpHandleRevocationBlockRemoveInsertedObject(v6, a1, 0LL, v4);
  }
  ExReleasePushLockEx((ULONG_PTR)&a1[2], 0LL, v3, v4);
  KeLeaveCriticalRegion();
  ExWaitForRundownProtectionRelease(a1 + 3);
}
