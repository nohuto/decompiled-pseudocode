/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x1400C6F10
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetNodeStandbyPageCount @ 0x14014E55C (MiGetNodeStandbyPageCount.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, unsigned int a2)
{
  int v2; // r12d
  unsigned int v3; // r13d
  unsigned int v4; // r14d
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v3 = a2 >> byte_140388501;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16) + 8256LL * (a2 >> byte_140388501);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v4 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140388502));
  v6 = 0LL;
  for ( i = 0LL; i <= 1; ++i )
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v8 = *(_QWORD *)(v5 + 8 * (i + 2LL * v4) + 8096);
    else
      v8 = *(_QWORD *)(v5 + 8 * i + 8032);
    v9 = v8 + v6;
    v10 = 0LL;
    v11 = MiLargePageSizes;
    v12 = v5;
    v13 = 4 * i;
    v14 = 3LL;
    v15 = (__int64 *)(v5 + 8 * i);
    do
    {
      if ( v4 == 4 )
        v16 = *v15;
      else
        v16 = *(_QWORD *)(v5 + 8 * (v13 + v4) + 48) + *(_QWORD *)(v5 + 8 * (v13 + v4) + 112);
      result = *v11++ * v16;
      v12 += 16LL;
      v10 += result;
      v15 += 2;
      v13 += 16LL;
      --v14;
    }
    while ( v14 );
    v6 = v9 + v10;
  }
  if ( v6 < 0x200 )
  {
    result = MiGetNodeStandbyPageCount(a1, v3, v4);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 5232) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140388AA8, &LockHandle);
        if ( !*(_QWORD *)(a1 + 5232) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
        {
          v18 = *(_QWORD *)(a1 + 168);
          _m_prefetchw((const void *)(v18 + 24));
          v19 = *(_QWORD *)(v18 + 24);
          while ( (unsigned __int64)(v19 + 1) > 1 )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v19 + 1, v19);
            if ( v20 == v19 )
            {
              *(_QWORD *)(a1 + 5216) = 0LL;
              *(_QWORD *)(a1 + 5232) = MiRebalanceZeroFreeLists;
              v2 = 1;
              *(_QWORD *)(a1 + 5240) = a1;
              goto LABEL_22;
            }
          }
          if ( v19 )
            __fastfail(0xEu);
        }
LABEL_22:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        result = LockHandle.OldIrql;
        __writecr8(LockHandle.OldIrql);
        if ( v2 == 1 )
          return ExQueueWorkItemToPartition(a1 + 5216, 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
      }
    }
  }
  return result;
}
