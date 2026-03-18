/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleShared @ 0x14004E064 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14004F150 (FsRtlFastUnlockSingleExclusive.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140028C50 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     IoGetRequestorProcess @ 0x14004D4E0 (IoGetRequestorProcess.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlPrivateInsertLock @ 0x140051274 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140051998 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     FsRtlCompleteLockIrpReal @ 0x14014A1E8 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E3610 (FsRtlPrivateRemoveLock.c)
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
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+44h] [rbp-1Ch]
  PVOID Object; // [rsp+48h] [rbp-18h]
  PEPROCESS RequestorProcess; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]
  int v21; // [rsp+A8h] [rbp+48h] BYREF
  KIRQL v22; // [rsp+B0h] [rbp+50h]

  v22 = a3;
  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v6 = v3[3];
    v7 = *(_QWORD *)(v6 + 184);
    v13 = *(_QWORD *)(v7 + 24);
    v14 = **(_QWORD **)(v7 + 8);
    v19 = v14 + v13 - 1;
    Object = *(PVOID *)(v7 + 48);
    RequestorProcess = IoGetRequestorProcess((PIRP)v6);
    v16 = *(_DWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
    {
      v15 = 1;
      v8 = FsRtlPrivateCheckForExclusiveLockAccess(a2, &v13);
    }
    else
    {
      v15 = 0;
      v8 = FsRtlPrivateCheckForSharedLockAccess(a2, &v13);
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
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v7 + 48), &v13);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KxReleaseSpinLock(a2);
      __writecr8(v22);
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      FsRtlCompleteLockIrpReal(*(_QWORD *)(a1 + 8), v3[2], v6, inserted == 0 ? 0xC000009A : 0, &v21, Object);
      if ( inserted )
      {
        if ( v21 < 0 )
          FsRtlPrivateRemoveLock(a1, &v13, 0LL);
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v22 = KeAcquireSpinLockRaiseToDpc(a2);
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
