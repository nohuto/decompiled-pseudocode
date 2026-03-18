/*
 * XREFs of ExInitializeSessionHeapManager @ 0x140165BDC
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     ExCleanupSessionHeapManager @ 0x1401541E4 (ExCleanupSessionHeapManager.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlHpHeapManagerInitialize @ 0x140293048 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x140293128 (RtlHpHeapManagerStart.c)
 *     ExCreateHeap @ 0x1402BD44C (ExCreateHeap.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 ExInitializeSessionHeapManager()
{
  int v0; // ebx
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rdi
  _QWORD v4[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v5; // [rsp+40h] [rbp-20h]
  __int128 v6; // [rsp+50h] [rbp-10h] BYREF

  if ( ExpHeapBackedPoolEnabled )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30E8uLL, 0x65537048u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30E8uLL);
      v4[1] = 0x100000000LL;
      v4[0] = 0x100000000100LL;
      RtlHpHeapManagerInitialize(v3, v4);
      *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424) = v3;
      v5 = 4uLL;
      v3[781] = 4uLL;
      v0 = RtlHpHeapManagerStart(v3);
      if ( v0 >= 0 )
      {
        v6 = v3[781];
        v0 = ExCreateHeap(&v6, 0LL, v3 + 782);
        if ( v0 >= 0 )
        {
          v3 = 0LL;
          v0 = 0;
        }
      }
      if ( v3 )
        ExCleanupSessionHeapManager();
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v0;
}
