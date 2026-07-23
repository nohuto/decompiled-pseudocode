/*
 * XREFs of MiFindNonPagedPoolPages @ 0x14010E930
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x14010EB3C (MiSetPfnTbFlushStamp.c)
 *     MiRetryNonPagedAllocation @ 0x14010EB88 (MiRetryNonPagedAllocation.c)
 *     MiObtainNonPagedPoolCharges @ 0x14010ECE0 (MiObtainNonPagedPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x140125E80 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x140126068 (MiReturnNonPagedPoolCharges.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_QWORD *__fastcall MiFindNonPagedPoolPages(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  _SLIST_HEADER *v6; // rbx
  _WORD *v7; // rsi
  __int16 v8; // ax
  __int64 Page; // rax
  __int64 v10; // rbx
  unsigned __int64 Region; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rcx
  _WORD *v19; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+28h] [rbp-60h]
  unsigned __int16 v21; // [rsp+2Ah] [rbp-5Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v23[5]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1;
  memset(v23, 0, 0x20uLL);
  v4 = 0LL;
  v5 = 0LL;
  v6 = &qword_14036C1C8[25 * v3];
  if ( v6[18].Region )
  {
    KeAcquireInStackQueuedSpinLock(&v6[19].Alignment, &LockHandle);
    Region = v6[18].Region;
    v13 = Region;
    if ( Region > a2 )
      v13 = a2;
    if ( v13 )
    {
      v14 = (_QWORD *)v6[19].Region;
      a2 -= v13;
      v4 = v14;
      v6[18].Region = Region - v13;
      do
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        --v13;
      }
      while ( v13 );
      *v15 = 0LL;
      v6[19].Region = (unsigned __int64)v14;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !a2 )
      return v4;
    v5 = v4;
  }
  v23[3] = a2;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(a2, 0LL) )
  {
    if ( v4 )
      MiReturnPhysicalPoolPages(v4);
    return 0LL;
  }
  MiInitializePageColorBase(0LL, v3 + 1, (__int64)&v19);
  if ( !a2 )
    return v4;
  v7 = v19;
  while ( 1 )
  {
    if ( a2 > 1 )
    {
      if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 && a2 + 160 >= qword_140381880 )
        goto LABEL_29;
      v7 = v19;
    }
    MiRetryNonPagedAllocation();
    v8 = v20;
    Page = MiGetPage((__int64)&MiSystemPartition, v21 | (unsigned int)(unsigned __int16)(v8 & ++*v7), 0xCu);
    if ( Page != -1 )
    {
      v10 = 48 * Page - 0x58000000000LL;
      if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v10, 1u, 0);
      MiSetPfnTbFlushStamp(v10, 0LL, 0LL);
      --v23[3];
      *(_QWORD *)v10 = v4;
      --a2;
      v4 = (_QWORD *)v10;
      goto LABEL_12;
    }
    if ( !(unsigned int)MiRetryNonPagedAllocation() )
      break;
LABEL_12:
    if ( !a2 )
      return v4;
  }
  ++dword_14036BD5C;
LABEL_29:
  if ( v4 )
  {
    v16 = (__int64)v4;
    do
    {
      if ( (_QWORD *)v16 == v5 )
        break;
      v17 = MiLockPageInline(v16);
      v18 = *(_QWORD *)(v16 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v16 + 32) = 1;
      *(_QWORD *)(v16 + 24) = v18 | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v17);
      v16 = *(_QWORD *)v16;
    }
    while ( v16 );
    MiReturnPhysicalPoolPages(v4);
  }
  v23[0] = v23[3];
  MiReturnNonPagedPoolCharges(v23, 0LL);
  return 0LL;
}
