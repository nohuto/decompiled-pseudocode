/*
 * XREFs of ExpSvmReferenceAsid @ 0x1402BC730
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // r9
  ULONG_PTR *v3; // rdx
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  KeAcquireInStackQueuedSpinLock(&qword_14039EBD8, &LockHandle);
  v2 = 0LL;
  v3 = (ULONG_PTR *)((char *)qword_14039EBD0 + 16 * (unsigned int)v1);
  if ( (unsigned int)v1 >= (unsigned int)dword_14039EBC4 )
  {
    BugCheckParameter4 = 0LL;
LABEL_7:
    if ( (unsigned int)v1 < (unsigned int)dword_14039EBC4 )
      v2 = *v3;
    KeBugCheckEx(0x158u, v1, (unsigned int)dword_14039EBC4, v2, BugCheckParameter4);
  }
  v4 = *v3;
  if ( !*v3 || (v5 = v3[1], v5 < 0) )
  {
    BugCheckParameter4 = v3[1];
    goto LABEL_7;
  }
  v3[1] = v5 + 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return *(_QWORD *)(v4 + 1752);
}
