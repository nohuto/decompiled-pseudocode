/*
 * XREFs of ObRevokeHandles @ 0x1406EF760
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1405A79E0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406EF7E0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

_QWORD *__fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  v4 = *a1;
  while ( v4 != a1 )
  {
    v5 = v4;
    LOBYTE(v3) = 1;
    v4 = (_QWORD *)*v4;
    ObpHandleRevocationBlockRemoveInsertedObject(v5, a1, 1LL, v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(a1 + 2), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
