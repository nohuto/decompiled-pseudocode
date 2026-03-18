/*
 * XREFs of ObRevokeHandles @ 0x1405EE8C4
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140758C60 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

_QWORD *__fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rdi
  _QWORD *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  v5 = *a1;
  while ( v5 != a1 )
  {
    v7 = v5;
    LOBYTE(v4) = 1;
    v5 = (_QWORD *)*v5;
    ObpHandleRevocationBlockRemoveInsertedObject(v7, a1, 1LL, v4);
  }
  ExReleasePushLockEx((ULONG_PTR)(a1 + 2), 0LL, v3, v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
