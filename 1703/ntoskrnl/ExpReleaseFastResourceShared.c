/*
 * XREFs of ExpReleaseFastResourceShared @ 0x14014DF20
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     ExReleaseFastResource @ 0x14014DE90 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x14025BC70 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14014E098 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x14014E254 (ExpPrepareToWakeResourceShared.c)
 */

unsigned __int8 __fastcall ExpReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  __int64 *v7; // rcx
  __int64 **v8; // rax
  unsigned __int8 result; // al
  _QWORD *v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char v13; // r8
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 **v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  char v19; // [rsp+88h] [rbp+48h] BYREF
  char v20; // [rsp+90h] [rbp+50h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !*((_BYTE *)a2 + 18) )
  {
    v16 = (__int64 *)*a2;
    v17 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v17 != a2 )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (__int64)v17;
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_6;
  }
  v5 = a2 + 5;
  LockHandle.LockQueue.Next = 0LL;
  v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  if ( (_QWORD *)*v5 != v5 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = (__int64 *)*a2;
    v8 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    *a2 = 0LL;
    a2[1] = 0LL;
LABEL_6:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_7;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
  ExpPrepareToWakeResourceShared(
    BugCheckParameter2,
    &v21,
    &v19,
    &v20,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock);
  v10 = a2 + 7;
  v11 = a2[7];
  v12 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v11 + 8) != a2 + 7 || (_QWORD *)*v12 != v10 )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = 1;
  if ( v19 )
    v13 = 3;
  KeWakeWaitChain(&v21, 0, v13);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  v15 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v15 != a2 )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v5 = 0LL;
  v5[1] = 0LL;
  __writecr8(CurrentIrql);
  result = *((_BYTE *)a2 + 16);
  if ( result )
    result = KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)result);
LABEL_7:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
