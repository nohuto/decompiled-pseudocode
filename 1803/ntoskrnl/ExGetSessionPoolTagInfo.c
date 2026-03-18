/*
 * XREFs of ExGetSessionPoolTagInfo @ 0x1400B8EB0
 * Callers:
 *     ExGetAttachedSessionPoolTagInfo @ 0x14055F92C (ExGetAttachedSessionPoolTagInfo.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmAcquireSessionPoolRundown @ 0x14055F9D8 (MmAcquireSessionPoolRundown.c)
 */

__int64 __fastcall ExGetSessionPoolTagInfo(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 PoolWithTag; // rdi
  size_t v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+24h] [rbp-74h]
  int v15; // [rsp+28h] [rbp-70h]
  unsigned __int64 v16; // [rsp+30h] [rbp-68h]
  unsigned int v17; // [rsp+38h] [rbp-60h]
  unsigned __int64 v18; // [rsp+40h] [rbp-58h]
  unsigned __int64 v19; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-40h] BYREF

  v17 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  if ( !(unsigned int)MmAcquireSessionPoolRundown(1LL) )
    return 3221225738LL;
  v16 = ExpSessionPoolTrackTable;
  v18 = ExpSessionPoolTrackTable + 56 * ExpSessionPoolTrackTableSize;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  PoolWithTag = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8240);
  v19 = PoolWithTag;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( PoolWithTag )
  {
    v8 = 56 * PoolWithTag;
    PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, 56 * PoolWithTag, 0x6F666E49u);
    if ( PoolWithTag )
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      memmove(
        (void *)PoolWithTag,
        *(const void **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8232),
        v8);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      goto LABEL_5;
    }
    MmAcquireSessionPoolRundown(0LL);
    return 3221225626LL;
  }
  else
  {
LABEL_5:
    while ( v16 < v18 )
    {
      if ( *(_DWORD *)v16 )
      {
        ++v15;
        v9 = v17 + 40;
        v17 = v9;
        if ( v9 < 0x28 )
        {
          v13 = -1073741675;
          break;
        }
        if ( v9 > a2 )
        {
          v13 = -1073741820;
        }
        else
        {
          ++v14;
          *(_DWORD *)a1 = *(_DWORD *)v16;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(v16 + 40);
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(v16 + 48);
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(v16 + 32);
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(v16 + 16);
          *(_DWORD *)(a1 + 28) = *(_DWORD *)(v16 + 24);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(v16 + 8);
          v10 = *(_DWORD *)(a1 + 8);
          if ( *(_DWORD *)(a1 + 4) < v10 )
            *(_DWORD *)(a1 + 4) = v10;
          v11 = *(_DWORD *)(a1 + 28);
          if ( *(_DWORD *)(a1 + 24) < v11 )
            *(_DWORD *)(a1 + 24) = v11;
          a1 += 40LL;
        }
      }
      v16 += 56LL;
      if ( v16 == v18 )
      {
        if ( v19 )
        {
          v16 = PoolWithTag;
          v18 = PoolWithTag + 56 * v19;
          v19 = 0LL;
        }
      }
    }
    MmAcquireSessionPoolRundown(0LL);
    if ( PoolWithTag )
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    *a3 = v14;
    *a4 = v15;
    return v13;
  }
}
