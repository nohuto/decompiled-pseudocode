/*
 * XREFs of PopUpdateWakeSourceWorker @ 0x140278980
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopWakeInfoDereference @ 0x140154F98 (PopWakeInfoDereference.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopFreeWakeSource @ 0x140762198 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140762264 (PopProcessWakeSourceWork.c)
 */

PVOID *PopUpdateWakeSourceWorker()
{
  PVOID v0; // rbx
  __int64 v1; // rdi
  int v2; // esi
  PVOID ***v3; // rdx
  PVOID **v4; // rax
  PVOID **v5; // rax
  PVOID *v6; // rcx
  PVOID **v7; // rdx
  PVOID *v8; // rcx
  struct _KEVENT *v9; // rcx
  _QWORD *v10; // rax
  PVOID *v11; // rcx
  PVOID v12; // rcx
  PVOID *result; // rax
  __int64 v14; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID **v18; // [rsp+78h] [rbp+28h] BYREF
  PVOID **v19; // [rsp+80h] [rbp+30h] BYREF

  p_P = &P;
  P = &P;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  while ( 1 )
  {
    v0 = PopWakeSourceWorkList;
    if ( PopWakeSourceWorkList == &PopWakeSourceWorkList )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v1 = *((_QWORD *)v0 + 3);
    PnpLockDeviceActionQueue();
    v2 = PopProcessWakeSourceWork(v0, &v18, &v19);
    PnpUnlockDeviceActionQueue();
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x67446F50u);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( v1 != PopCurrentWakeInfo && v1 != PopPendingWakeInfo || v2 < 0 )
    {
      v5 = v18;
LABEL_12:
      if ( v5 )
      {
        v8 = p_P;
        if ( *p_P != &P )
          __fastfail(3u);
        v5[1] = p_P;
        *v5 = &P;
        *v8 = v5;
        p_P = (PVOID *)v5;
      }
      goto LABEL_15;
    }
    v3 = *(PVOID ****)(v1 + 32);
    if ( *v3 != (PVOID **)(v1 + 24) )
      __fastfail(3u);
    v4 = v18;
    v18 = 0LL;
    *v4 = (PVOID *)(v1 + 24);
    v4[1] = (PVOID *)v3;
    *v3 = v4;
    *(_QWORD *)(v1 + 32) = v4;
    ++*(_DWORD *)(v1 + 40);
    v5 = v19;
    if ( v19 )
    {
      v6 = *v19;
      if ( (*v19)[1] != v19 || (v7 = (PVOID **)v19[1], *v7 != (PVOID *)v19) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      --*(_DWORD *)(v1 + 40);
      v18 = v5;
      goto LABEL_12;
    }
LABEL_15:
    PopWakeInfoDereference(v1);
    v9 = (struct _KEVENT *)*((_QWORD *)v0 + 4);
    if ( v9 )
      KeSetEvent(v9, 0, 0);
    v10 = *(_QWORD **)v0;
    if ( *(PVOID *)(*(_QWORD *)v0 + 8LL) != v0 || (v11 = (PVOID *)*((_QWORD *)v0 + 1), *v11 != v0) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v0, 0x206D654Du);
  }
  PopWakeSourceWorkInProgress = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  while ( 1 )
  {
    v12 = P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v14 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v14 + 8) = &P;
    PopFreeWakeSource(v12);
  }
  return result;
}
