/*
 * XREFs of MiFindNonPagedPoolPages @ 0x140089100
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiRetryNonPagedAllocation @ 0x140089300 (MiRetryNonPagedAllocation.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400C01C4 (MiReturnNonPagedPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x1400C0230 (MiReturnPhysicalPoolPages.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400F74DC (MiObtainNonPagedPoolCharges.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiFindNonPagedPoolPages(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  _SLIST_HEADER *v6; // rdi
  _WORD *v7; // rdi
  __int16 v8; // ax
  __int64 Page; // rax
  __int64 v10; // r9
  signed __int64 v11; // rdx
  signed __int64 v12; // r8
  unsigned __int64 Region; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rcx
  signed __int64 v21; // rcx
  _WORD *v22; // [rsp+20h] [rbp-68h] BYREF
  __int16 v23; // [rsp+28h] [rbp-60h]
  unsigned __int16 v24; // [rsp+2Ah] [rbp-5Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v26[5]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1;
  memset(v26, 0, 0x20uLL);
  v4 = 0LL;
  v5 = 0LL;
  v6 = &qword_140388510[25 * v3];
  if ( v6[18].Region )
  {
    KeAcquireInStackQueuedSpinLock(&v6[19].Alignment, &LockHandle);
    Region = v6[18].Region;
    v15 = Region;
    if ( Region > a2 )
      v15 = a2;
    if ( v15 )
    {
      v16 = (_QWORD *)v6[19].Region;
      a2 -= v15;
      v4 = (__int64)v16;
      v6[18].Region = Region - v15;
      do
      {
        v17 = v16;
        v16 = (_QWORD *)*v16;
        --v15;
      }
      while ( v15 );
      *v17 = 0LL;
      v6[19].Region = (unsigned __int64)v16;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !a2 )
      return v4;
    v5 = v4;
  }
  v26[3] = a2;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(a2, 0LL) )
  {
    if ( v4 )
      MiReturnPhysicalPoolPages(v4);
    return 0LL;
  }
  MiInitializePageColorBase(0LL, v3 + 1, (__int64)&v22);
  if ( !a2 )
    return v4;
  v7 = v22;
  while ( 1 )
  {
    if ( a2 > 1 )
    {
      if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
        && !(unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, a2 + 160) )
      {
        goto LABEL_28;
      }
      v7 = v22;
    }
    MiRetryNonPagedAllocation();
    v8 = v23;
    Page = MiGetPage((__int64)&MiSystemPartition, v24 | (unsigned int)(unsigned __int16)(v8 & ++*v7), 0x8Cu);
    if ( Page != -1 )
    {
      v10 = 48 * Page - 0x58000000000LL;
      v11 = *(_QWORD *)(v10 + 24);
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v11 & 0xF0FFFFFFFFFFFFFFuLL, v11);
      if ( v11 != v12 )
      {
        do
        {
          v21 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v12 & 0xF0FFFFFFFFFFFFFFuLL, v12);
        }
        while ( v21 != v12 );
      }
      --v26[3];
      v7 = v22;
      --a2;
      *(_QWORD *)v10 = v4;
      v4 = 48 * Page - 0x58000000000LL;
      goto LABEL_11;
    }
    if ( !(unsigned int)MiRetryNonPagedAllocation() )
      break;
LABEL_11:
    if ( !a2 )
      return v4;
  }
  ++dword_14038805C;
LABEL_28:
  if ( v4 )
  {
    v18 = v4;
    do
    {
      if ( v18 == v5 )
        break;
      v19 = MiLockPageInline(v18);
      v20 = *(_QWORD *)(v18 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v18 + 32) = 1;
      *(_QWORD *)(v18 + 24) = v20 | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v19);
      v18 = *(_QWORD *)v18;
    }
    while ( v18 );
    MiReturnPhysicalPoolPages(v4);
  }
  v26[0] = v26[3];
  MiReturnNonPagedPoolCharges(v26, 0LL);
  return 0LL;
}
