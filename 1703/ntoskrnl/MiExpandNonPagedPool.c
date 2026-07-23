/*
 * XREFs of MiExpandNonPagedPool @ 0x140126E74
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x1400AD2B4 (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x1401241D8 (MiFindContiguousMemoryInPool.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400AE68C (MiIncreaseNonPagedPoolUsage.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiObtainNonPagedPoolCharges @ 0x14010ECE0 (MiObtainNonPagedPoolCharges.c)
 *     MiReturnNonPagedPoolCharges @ 0x140126068 (MiReturnNonPagedPoolCharges.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140127490 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiSplitBitmapPages @ 0x140127E80 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainDynamicVa @ 0x140128308 (MiObtainDynamicVa.c)
 *     MiGetLargePageChain @ 0x140128D4C (MiGetLargePageChain.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeLargePageChain @ 0x140224000 (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiExpandNonPagedPool(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v7; // r12
  int v10; // r9d
  PSLIST_HEADER v11; // rdi
  _SLIST_HEADER *v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 Region; // rcx
  unsigned __int64 v17; // r14
  _QWORD *LargePageChain; // r13
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 *p_Alignment; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r15
  __int64 v30; // rbx
  unsigned int i; // edi
  __int64 v32; // r9
  _QWORD *v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 Alignment; // rcx
  __int64 v38; // r9
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // [rsp+30h] [rbp-69h]
  unsigned __int64 v43; // [rsp+30h] [rbp-69h]
  unsigned __int64 v44; // [rsp+30h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-61h] BYREF
  _SLIST_HEADER *v46; // [rsp+50h] [rbp-49h]
  unsigned __int64 v47; // [rsp+58h] [rbp-41h]
  unsigned __int64 v48; // [rsp+60h] [rbp-39h]
  unsigned __int64 *v49; // [rsp+68h] [rbp-31h]
  unsigned __int64 v50[14]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v51; // [rsp+F0h] [rbp+57h]
  unsigned int v53; // [rsp+100h] [rbp+67h]

  v7 = a3;
  memset(v50, 0, 0x20uLL);
  v10 = 0;
  v11 = qword_14036C1C8;
  v53 = 0;
  *a6 = 3;
  v12 = &v11[25 * v7];
  v46 = v12;
  v51 = 1;
  if ( (a1 & 0x200) == 0 )
    goto LABEL_17;
  v13 = *(_QWORD *)(2184LL * (unsigned int)v7 + qword_140380230 + 2056) >> 9;
  if ( qword_1403817D0 >= 0x100000 )
  {
    if ( qword_1403817D0 < 0x400000 )
      v13 = ((v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
          + ((unsigned __int64)(v13 - ((v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
    v14 = v13 >> 4;
  }
  else
  {
    v14 = *(_QWORD *)(2184LL * (unsigned int)v7 + qword_140380230 + 2056) >> 14;
  }
  if ( qword_1403817D0 > 0x20000 )
  {
    v15 = -1LL;
    if ( qword_1403817D0 < 0x80000 )
      v15 = 2LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( (a2 & 0x1FF) == 0 )
    goto LABEL_12;
  Region = v12[17].Region;
  if ( Region < v15 )
  {
    if ( Region < v14 )
    {
LABEL_12:
      v10 = 1;
LABEL_16:
      v51 = 0;
      v53 = 2;
      goto LABEL_17;
    }
    LOBYTE(v10) = v12[18].Alignment >= (Region << 12) / 0xA;
    if ( v10 == 1 )
      goto LABEL_16;
  }
LABEL_17:
  v17 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v17 < a2 )
    return -1LL;
  LargePageChain = 0LL;
  v19 = v17 >> 9;
  v20 = 0LL;
  if ( v10 == 1 )
  {
    if ( a4 != -1 )
      goto LABEL_27;
    if ( MmProtectFreedNonPagedPool != 1 && (unsigned int)MiObtainNonPagedPoolCharges(v19 << 9, 0) == 1 )
    {
      LargePageChain = (_QWORD *)MiGetLargePageChain((unsigned int)v7, v19 << 9);
      if ( LargePageChain )
        goto LABEL_27;
      v50[3] = v19 << 9;
      v50[0] = v19 << 9;
      MiReturnNonPagedPoolCharges(v50, 0);
    }
    v10 = 0;
    v51 = 1;
    v53 = 0;
  }
  if ( !v10 && a5 == 1 )
    return -1LL;
LABEL_27:
  v21 = MiObtainDynamicVa((char *)&qword_14036C1C8[25 * v7 + 11].HeaderX64 + 8, (unsigned int)v19, 5LL);
  v47 = v21;
  v22 = v21;
  v23 = 0xFFFFF68000000000uLL;
  if ( !v21 )
  {
LABEL_33:
    if ( LargePageChain )
    {
      MiFreeLargePageChain(LargePageChain, v23);
      v50[3] = v19 << 9;
      v50[0] = v19 << 9;
      MiReturnNonPagedPoolCharges(v50, 0);
    }
    if ( v22 )
      MiReturnSystemVa(v22, (__int64)((v20 << 25) + 0x10000000) >> 16, 5, 0LL);
    return -1LL;
  }
  v42 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = (v21 - v12[20].Alignment) >> 21;
  v20 = v42 + 8 * (v17 - 1);
  KeAcquireInStackQueuedSpinLock(&v12[19].Alignment, &LockHandle);
  v48 = v24 + v19;
  p_Alignment = &v12[v51 + 21].Alignment;
  v49 = p_Alignment;
  if ( v24 + v19 > *p_Alignment )
  {
    v26 = (v24 + v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v26 <= v12[11].Alignment )
      *p_Alignment = v26;
  }
  if ( !(unsigned int)MiSplitBitmapPages(5LL, p_Alignment[1] + (v24 >> 3), v19 + (v24 & 7))
    || !(unsigned int)MiSplitBitmapPages(
                        5LL,
                        v12[23].Region + ((v22 - v12[20].Alignment) >> 15),
                        (v19 << 9) + (((v22 - v12[20].Alignment) >> 12) & 7)) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    goto LABEL_33;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !(unsigned int)MiMakeZeroedPageTables(v42, v20, v53, 5LL) )
    goto LABEL_33;
  if ( LargePageChain || a4 != -1 )
  {
    if ( a2 != v17 || a4 != -1 )
      ++v12[17].Region;
    *a6 = 1;
  }
  v28 = -1LL;
  v29 = 0LL;
  v43 = -1LL;
  v30 = ((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v17 )
  {
    for ( i = 0; i < v17; i += 512 )
    {
      v50[4] = MI_READ_PTE_LOCK_FREE(v30);
      if ( v32 == -1 && LargePageChain )
      {
        v33 = LargePageChain;
        LargePageChain = (_QWORD *)*LargePageChain;
        v34 = (__int64)((unsigned __int128)((__int64)(v33 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
        v44 = (v34 >> 63) + v34;
        MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, (v34 >> 63) + v34, 512, 1, 1);
        *(_QWORD *)v30 = MiMakeValidPte(0LL, v44, -1543503868);
        if ( (unsigned int)MiPteInShadowRange(v30) )
          MiWritePteShadow(v35);
        MiInitializeLargeNonPagedPoolLeafFrames(v30 << 25 >> 16, v44);
        if ( v44 < v28 )
          v28 = v44;
        if ( v44 + 511 > v29 )
          v29 = v44 | 0x1FF;
      }
      v30 += 8LL;
    }
    v12 = v46;
    v22 = v47;
    v43 = v28;
  }
  v36 = (v22 - v12[20].Alignment) >> 12;
  KeAcquireInStackQueuedSpinLock(&v12[19].Alignment, &LockHandle);
  if ( v29 )
  {
    Alignment = v12[16].Alignment;
    if ( v43 < Alignment || !Alignment )
      v12[16].Alignment = v43;
    if ( v29 > v12[16].Region )
      v12[16].Region = v29;
  }
  if ( v17 != a2 )
  {
    RtlClearBitsEx((__int64)&v12[23], v36 + a2, v17 - a2);
    _bittestandreset64((signed __int64 *)v49[1], v48 - 1);
    if ( v36 < *(&v12[24].Alignment + v51) )
      *(&v12[24].Alignment + v51) = v36 + a2;
  }
  v38 = a4;
  if ( a4 == -1 )
    v38 = a2;
  v39 = MiIncreaseNonPagedPoolUsage((__int64)v12, v51, v36, v38);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v39 == 1 )
    MiTrimSegmentCache(LockHandle.OldIrql, v40, v41);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a6 == 1 && a4 == -1 )
    MiLogPerfMemoryRangeEvent(v22, 0LL, 11LL, v17);
  return v36;
}
