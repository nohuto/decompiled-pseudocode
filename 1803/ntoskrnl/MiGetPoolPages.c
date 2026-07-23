/*
 * XREFs of MiGetPoolPages @ 0x1400F0860
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRetryNonPagedAllocation @ 0x1400F0A50 (MiRetryNonPagedAllocation.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x14017039C (MiReturnPhysicalPoolPages.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  _SLIST_HEADER *v6; // rdi
  int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int16 v11; // cx
  __int64 Page; // rax
  __int64 v13; // r9
  signed __int64 v14; // rdx
  signed __int64 v15; // r8
  unsigned __int64 Region; // rdx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r9
  _QWORD *v22; // r15
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v25; // rdi
  signed __int64 v26; // rcx
  volatile signed __int32 *v27; // [rsp+20h] [rbp-88h] BYREF
  __int16 v28; // [rsp+28h] [rbp-80h]
  unsigned __int16 v29; // [rsp+2Ah] [rbp-7Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v31[12]; // [rsp+48h] [rbp-60h] BYREF

  v3 = a2;
  v4 = 0LL;
  v6 = &qword_1403CB6A8[25 * a2];
  v7 = a1;
  if ( v6[18].Region )
  {
    KeAcquireInStackQueuedSpinLock(&v6[19].Alignment, &LockHandle);
    Region = v6[18].Region;
    v18 = Region;
    if ( Region > a3 )
      v18 = a3;
    if ( v18 )
    {
      v19 = (_QWORD *)v6[19].Region;
      a3 -= v18;
      v4 = (__int64)v19;
      v6[18].Region = Region - v18;
      do
      {
        v20 = v19;
        v19 = (_QWORD *)*v19;
        --v18;
      }
      while ( v18 );
      *v20 = 0LL;
      v6[19].Region = (unsigned __int64)v19;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (v7 & 0x40000000) != 0 )
    {
      v22 = (_QWORD *)v4;
      if ( v4 )
      {
        do
        {
          v23 = (__int64)(v22 + 0xB000000000LL) / 48;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v25 = MiMapPageInHyperSpaceWorker(v23, 0LL, 0x80000000, v21);
            KeZeroPages(v25, 4096LL);
            MiUnmapPageInHyperSpaceWorker(v25, 0x11u, 0x80000000);
          }
          else
          {
            MxFillPhysicalPage(v23);
          }
          __writecr8(CurrentIrql);
          v22 = (_QWORD *)*v22;
        }
        while ( v22 );
        v3 = a2;
        v7 = a1;
      }
    }
    if ( !a3 )
      return v4;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0LL) )
  {
    MiInitializePageColorBase(0LL, v3 + 1, (__int64)&v27);
    v8 = 524;
    if ( (v7 & 0x40000000) != 0 )
      v8 = 782;
    if ( a3 )
    {
      while ( 1 )
      {
        v9 = v4;
        v10 = v4;
        if ( a3 > 1
          && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
          && !(unsigned int)MiSufficientAvailablePages(&MiSystemPartition, a3 + 160) )
        {
          break;
        }
        MiRetryNonPagedAllocation();
        v11 = _InterlockedExchangeAdd(v27, 1u);
        Page = MiGetPage((__int64)&MiSystemPartition, v29 | (unsigned int)(unsigned __int16)(v11 & v28), v8);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
          {
            ++dword_1403CB15C;
            break;
          }
        }
        else
        {
          v13 = 48 * Page - 0x58000000000LL;
          v14 = *(_QWORD *)(v13 + 24);
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), v14 & 0xF0FFFFFFFFFFFFFFuLL, v14);
          if ( v14 != v15 )
          {
            do
            {
              v26 = v15;
              v15 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v13 + 24),
                      v15 & 0xF0FFFFFFFFFFFFFFuLL,
                      v15);
            }
            while ( v26 != v15 );
          }
          *(_QWORD *)v13 = v4;
          --a3;
          v4 = 48 * Page - 0x58000000000LL;
        }
        if ( !a3 )
          return v4;
      }
      memset(v31, 0, 0x20uLL);
      if ( v4 )
        MiReturnPhysicalPoolPages(v4, 0LL);
      v31[0] = a3;
      v31[3] = a3;
      MiReturnPoolCharges(v31, 0LL);
      v4 = 0LL;
      if ( !v10 )
        return v9;
    }
    return v4;
  }
  if ( v4 )
    MiReturnPhysicalPoolPages(v4, 0LL);
  return 0LL;
}
