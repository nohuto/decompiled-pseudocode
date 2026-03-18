/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x1400B0C34
 * Callers:
 *     FsRtlFastUnlockSingleShared @ 0x140068480 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140068B20 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400B0904 (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     FsRtlCompleteLockIrpReal @ 0x140001FE8 (FsRtlCompleteLockIrpReal.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlPrivateInsertLock @ 0x140069804 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400699C4 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     IoGetRequestorProcess @ 0x1400AA380 (IoGetRequestorProcess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400BA854 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlPrivateRemoveLock @ 0x1402251F0 (FsRtlPrivateRemoveLock.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(__int64 a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  char v8; // al
  char v9; // r15
  char v10; // bl
  char v11; // cl
  char inserted; // r15
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  char v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  PVOID Object; // [rsp+48h] [rbp-18h]
  PEPROCESS RequestorProcess; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  NTSTATUS v20; // [rsp+A8h] [rbp+48h] BYREF
  KIRQL v21; // [rsp+B0h] [rbp+50h]

  v21 = a3;
  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v6 = v3[3];
    v7 = *(_QWORD *)(v6 + 184);
    *(_QWORD *)&v13 = *(_QWORD *)(v7 + 24);
    *((_QWORD *)&v13 + 1) = **(_QWORD **)(v7 + 8);
    v18 = *((_QWORD *)&v13 + 1) + v13 - 1;
    Object = *(PVOID *)(v7 + 48);
    RequestorProcess = IoGetRequestorProcess((PIRP)v6);
    v15 = *(_DWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
    {
      v14 = 1;
      v8 = FsRtlPrivateCheckForExclusiveLockAccess(a2, &v13);
    }
    else
    {
      v14 = 0;
      v8 = FsRtlPrivateCheckForSharedLockAccess((__int64)a2, (__int64)&v13);
    }
    v9 = v8;
    if ( !v8 )
      goto LABEL_16;
    *(_BYTE *)(v6 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL);
    v10 = *(_BYTE *)(v6 + 68);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v6 + 69));
    v11 = 0;
    if ( !v10 )
      v11 = v9;
    if ( v11 )
    {
      inserted = FsRtlPrivateInsertLock((_QWORD *)a1, *(_QWORD *)(v7 + 48), &v13);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KxReleaseSpinLock(a2);
      __writecr8(v21);
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      FsRtlCompleteLockIrpReal(
        *(__int64 (__fastcall **)(__int64, IRP *))(a1 + 8),
        v3[2],
        (IRP *)v6,
        inserted == 0 ? 0xC000009A : 0,
        &v20,
        (__int64)Object);
      if ( inserted )
      {
        if ( v20 < 0 )
          FsRtlPrivateRemoveLock(a1, &v13, 0LL);
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v21 = KeAcquireSpinLockRaiseToDpc(a2);
      v4 = a2 + 3;
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v3);
    }
    else
    {
LABEL_16:
      v4 = v3;
    }
    v3 = (_QWORD *)*v4;
  }
}
