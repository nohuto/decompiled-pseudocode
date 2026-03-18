/*
 * XREFs of FsRtlPrivateInsertLock @ 0x140051274
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateLock @ 0x14004F440 (FsRtlPrivateLock.c)
 * Callees:
 *     FsRtlPrivateInsertExclusiveLock @ 0x140028D30 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140051A14 (FsRtlPrivateInsertSharedLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 */

char __fastcall FsRtlPrivateInsertLock(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  char *v6; // rax
  void *v7; // rbx
  char *v8; // r14
  char *v10; // rax
  char *v11; // rbx

  if ( *((_BYTE *)a3 + 16) )
  {
    v10 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlExclusiveLockLookasideList);
    if ( v10 )
    {
      v11 = v10 + 24;
      *(_OWORD *)(v10 + 24) = *a3;
      *(_OWORD *)(v10 + 40) = a3[1];
      *(_OWORD *)(v10 + 56) = a3[2];
      FsRtlPrivateInsertExclusiveLock((__int64)(a1 + 3), (_RTL_SPLAY_LINKS *)v10);
      *(_QWORD *)(a2 + 120) = v11;
      goto LABEL_5;
    }
    return 0;
  }
  v6 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlSharedLockLookasideList);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = v6 + 8;
  *(_OWORD *)(v6 + 8) = *a3;
  *(_OWORD *)(v6 + 24) = a3[1];
  *(_OWORD *)(v6 + 40) = a3[2];
  if ( !(unsigned __int8)FsRtlPrivateInsertSharedLock(a1 + 3, v6) )
  {
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v7);
    return 0;
  }
  *(_QWORD *)(a2 + 120) = v8;
LABEL_5:
  if ( *(_QWORD *)a3 < *a1 )
    *a1 = *(_QWORD *)a3;
  return 1;
}
