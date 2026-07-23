/*
 * XREFs of MiExpandNonPagedPool @ 0x1400F5408
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x1400C193C (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x140119800 (MiFindContiguousMemoryInPool.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400C01C4 (MiReturnNonPagedPoolCharges.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400C24F0 (MiIncreaseNonPagedPoolUsage.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePageChain @ 0x1400CACC8 (MiGetLargePageChain.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1400F5A50 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiObtainDynamicVa @ 0x1400F6200 (MiObtainDynamicVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400F74DC (MiObtainNonPagedPoolCharges.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     MiFreeLargePageChain @ 0x140157020 (MiFreeLargePageChain.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
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
  unsigned __int128 v17; // rax
  unsigned __int64 Alignment; // rcx
  unsigned __int64 v19; // r14
  _QWORD *LargePageChain; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 *p_Alignment; // rcx
  unsigned __int64 v27; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r15
  unsigned int v32; // edx
  unsigned __int64 v33; // rbx
  __int64 PteShadow; // rax
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // ebx
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
  int v53; // [rsp+100h] [rbp+67h]
  unsigned int v54; // [rsp+100h] [rbp+67h]

  v7 = a3;
  memset(v50, 0, 0x20uLL);
  v10 = 0;
  v11 = qword_140388510;
  v53 = 0;
  *a6 = 3;
  v12 = &v11[25 * v7];
  v46 = v12;
  v51 = 1;
  if ( (a1 & 0x200) == 0 )
    goto LABEL_17;
  v13 = *(_QWORD *)(8256LL * (unsigned int)v7 + qword_14038A0D0 + 8080) >> 9;
  if ( qword_14038B750 >= 0x100000 )
  {
    if ( qword_14038B750 < 0x400000 )
      v13 = ((v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
          + ((unsigned __int64)(v13 - ((v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
    v14 = v13 >> 4;
  }
  else
  {
    v14 = *(_QWORD *)(8256LL * (unsigned int)v7 + qword_14038A0D0 + 8080) >> 14;
  }
  if ( qword_14038B750 > 0x20000 )
  {
    v15 = -1LL;
    if ( qword_14038B750 < 0x80000 )
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
    v17 = (Region << 12) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    Alignment = v12[18].Alignment;
    *((_QWORD *)&v17 + 1) >>= 3;
    LOBYTE(v10) = Alignment >= *((_QWORD *)&v17 + 1);
    if ( Alignment >= *((_QWORD *)&v17 + 1) )
      goto LABEL_16;
  }
LABEL_17:
  v19 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v19 < a2 )
    return -1LL;
  LargePageChain = 0LL;
  v21 = v19 >> 9;
  v22 = 0LL;
  if ( v10 == 1 )
  {
    if ( a4 != -1 )
      goto LABEL_27;
    if ( MmProtectFreedNonPagedPool != 1 && (unsigned int)MiObtainNonPagedPoolCharges(v19, 0LL) == 1 )
    {
      LargePageChain = MiGetLargePageChain(v7, v21 << 9);
      if ( LargePageChain )
        goto LABEL_27;
      v50[3] = v21 << 9;
      v50[0] = v21 << 9;
      MiReturnNonPagedPoolCharges(v50, 0);
    }
    v10 = 0;
    v51 = 1;
    v53 = 0;
  }
  if ( !v10 && a5 == 1 )
    return -1LL;
LABEL_27:
  v23 = MiObtainDynamicVa((char *)&qword_140388510[25 * v7 + 11].HeaderX64 + 8, (unsigned int)v21, 5LL);
  v47 = v23;
  v24 = v23;
  if ( !v23 )
  {
LABEL_33:
    if ( LargePageChain )
    {
      MiFreeLargePageChain(LargePageChain);
      v50[3] = v21 << 9;
      v50[0] = v21 << 9;
      MiReturnNonPagedPoolCharges(v50, 0);
    }
    if ( v24 )
      MiReturnSystemVa(v24, ((v22 << 25) + 0x10000000) >> 16, 5LL, 0LL);
    return -1LL;
  }
  v42 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = (v23 - v12[20].Alignment) >> 21;
  v22 = v42 + 8 * (v19 - 1);
  KeAcquireInStackQueuedSpinLock(&v12[19].Alignment, &LockHandle);
  v48 = v25 + v21;
  p_Alignment = &v12[v51 + 21].Alignment;
  v49 = p_Alignment;
  if ( v25 + v21 > *p_Alignment )
  {
    v27 = (v25 + v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v27 <= v12[11].Alignment )
      *p_Alignment = v27;
  }
  if ( !(unsigned int)MiSplitBitmapPages(5LL, p_Alignment[1] + (v25 >> 3), v21 + (v25 & 7))
    || !(unsigned int)MiSplitBitmapPages(
                        5LL,
                        v12[23].Region + ((v24 - v12[20].Alignment) >> 15),
                        (v21 << 9) + (((v24 - v12[20].Alignment) >> 12) & 7)) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    goto LABEL_33;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !(unsigned int)MiMakeZeroedPageTables(v42, v22, v53, 5) )
    goto LABEL_33;
  v29 = a4;
  if ( LargePageChain || a4 != -1 )
  {
    if ( a2 != v19 || a4 != -1 )
      ++v12[17].Region;
    *a6 = 1;
  }
  v30 = -1LL;
  v31 = 0LL;
  v43 = -1LL;
  v32 = 0;
  v33 = ((v24 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v54 = 0;
  if ( v19 )
  {
    do
    {
      PteShadow = *(_QWORD *)v33;
      if ( v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v33, *(_QWORD *)v33);
        v32 = v54;
      }
      v50[4] = PteShadow;
      if ( v29 == -1 && LargePageChain )
      {
        v35 = LargePageChain;
        LargePageChain = (_QWORD *)*LargePageChain;
        v36 = (__int64)((unsigned __int128)((__int64)(v35 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
        v44 = (v36 >> 63) + v36;
        MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v44, 0x200uLL, 1, 1);
        ValidPte = MiMakeValidPte(0LL, v44, -1543503868);
        *(_QWORD *)v33 = ValidPte;
        if ( v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v33, ValidPte);
        MiInitializeLargeNonPagedPoolLeafFrames((__int64)(v33 << 25) >> 16, v44);
        v29 = a4;
        v32 = v54;
        if ( v44 < v30 )
          v30 = v44;
        if ( v44 + 511 > v31 )
          v31 = v44 | 0x1FF;
      }
      v32 += 512;
      v33 += 8LL;
      v54 = v32;
    }
    while ( v32 < v19 );
    v12 = v46;
    v24 = v47;
    v43 = v30;
  }
  v38 = (v24 - v12[20].Alignment) >> 12;
  KeAcquireInStackQueuedSpinLock(&v12[19].Alignment, &LockHandle);
  if ( v31 )
  {
    v39 = v12[16].Alignment;
    if ( v43 < v39 || !v39 )
      v12[16].Alignment = v43;
    if ( v31 > v12[16].Region )
      v12[16].Region = v31;
  }
  if ( v19 != a2 )
  {
    RtlClearBitsEx((__int64)&v12[23], v38 + a2, v19 - a2);
    _bittestandreset64((signed __int64 *)v49[1], v48 - 1);
    if ( v38 < *(&v12[24].Alignment + v51) )
      *(&v12[24].Alignment + v51) = v38 + a2;
  }
  v40 = a4;
  if ( a4 == -1 )
    v40 = a2;
  v41 = MiIncreaseNonPagedPoolUsage((__int64)v12, v51, v38, v40);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v41 == 1 )
    MiFreeExcessSegments();
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a6 == 1 && a4 == -1 )
    MiLogPerfMemoryRangeEvent(v24, 0LL, 11LL, v19);
  return v38;
}
