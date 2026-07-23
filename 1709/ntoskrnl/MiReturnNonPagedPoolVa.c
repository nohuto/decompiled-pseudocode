/*
 * XREFs of MiReturnNonPagedPoolVa @ 0x1400F3C70
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     MiScrubNonPagedPool @ 0x1406E2B74 (MiScrubNonPagedPool.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400C01C4 (MiReturnNonPagedPoolCharges.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiNonPagedPoolToNode @ 0x1400F4370 (MiNonPagedPoolToNode.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1401398B4 (MiSignalNonPagedPoolWatchers.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MiJoinBitmapPages @ 0x1402201F0 (MiJoinBitmapPages.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiReturnNonPagedPoolVa(ULONG_PTR a1, unsigned __int64 a2)
{
  _QWORD *v4; // r12
  unsigned __int64 Region; // rax
  __int64 v6; // r15
  __int64 *v7; // rdi
  unsigned __int64 v8; // r13
  _QWORD *v9; // rdx
  __int64 PteShadow; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _SLIST_HEADER *v13; // r14
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  _SLIST_HEADER *v18; // rcx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  _QWORD *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *v31; // r12
  char v32; // r9
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v34; // rdi
  __int64 v35; // r14
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  _QWORD *v39; // rbx
  unsigned __int64 v40; // [rsp+20h] [rbp-E0h]
  _SLIST_HEADER *v41; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v42; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v43; // [rsp+38h] [rbp-C8h]
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  _SLIST_HEADER *v45; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v48; // [rsp+60h] [rbp-A0h]
  _SLIST_HEADER *v49; // [rsp+68h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-90h]
  _QWORD *v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp-70h]
  unsigned __int64 v55; // [rsp+98h] [rbp-68h]
  unsigned __int64 v56; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v57[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v59; // [rsp+C8h] [rbp-38h]
  _QWORD *v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v62; // [rsp+E4h] [rbp-1Ch]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  memset(v57, 0, sizeof(v57));
  v58 = 0LL;
  v51 = 0LL;
  v4 = 0LL;
  v41 = &qword_140388510[25 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v48 = (a1 - v41[20].Alignment) >> 12;
  v42 = v48 & 0xFFFFFFFFFFFFFE00uLL;
  v55 = a2 + v48;
  v43 = (a2 + v48 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  Region = v41[23].Region;
  v63 = 20LL;
  v61 = 0;
  v62 = 0;
  v6 = Region + 8 * (v43 >> 6);
  v64 = 0LL;
  v65 = 0LL;
  v40 = 0LL;
  v45 = v41 + 19;
  v7 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v8 = 0LL;
  v44 = 0LL;
  LOBYTE(Region) = KeGetCurrentIrql();
  __writecr8(2uLL);
  v46 = Region;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v44, &v41[19]);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v41[19], (__int64)&v44);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&v44, v9);
  }
  RtlClearBitsEx((__int64)&v41[23], v48, a2);
  PteShadow = *v7;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v7, *v7);
  v53 = PteShadow;
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v13 = v41;
    v14 = 1LL;
  }
  else
  {
    v11 = a2;
    v12 = (v48 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    if ( (v55 & 0xFFFFFFFFFFFFFE00uLL) > v12 )
      v11 = v12 + a2 - (v55 & 0xFFFFFFFFFFFFFE00uLL);
    v13 = v41;
    v14 = 0LL;
    v41[18].Alignment -= v11;
  }
  v13[17].Alignment -= a2;
  v15 = _InterlockedExchangeAdd64(&qword_140388018, -(__int64)a2);
  if ( MiState[0]
    && (v15 >= MiState[0] - 5120 && v15 - a2 < MiState[0] - 5120
     || v15 >= MiState[0] - 2048 && v15 - a2 < MiState[0] - 2048) )
  {
    MiSignalNonPagedPoolWatchers();
  }
  v16 = v43;
  v17 = v42;
  v18 = &v13[v14 + 21];
  v59 = &v13[24].Alignment + v14;
  v49 = v18;
  v19 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v50 = v43;
  v20 = -1LL;
  v52 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v21 = v43;
  if ( v43 > v42 )
  {
    do
    {
      v22 = v21 - 512;
      v23 = 0LL;
      v54 = v21 - 512;
      v24 = (v21 - 512) >> 9;
      while ( 1 )
      {
        v6 -= 8LL;
        if ( *(_QWORD *)v6 )
          break;
        if ( (unsigned __int64)++v23 >= 8 )
          goto LABEL_29;
      }
      if ( v21 == v16 )
      {
        v52 = v6 & 0xFFFFFFFFFFFFF000uLL;
      }
      else if ( v22 <= v17 )
      {
        v20 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      v6 = v6 + 8 * v23 - 56;
LABEL_29:
      if ( v23 == 8 )
      {
        v56 = v13[20].Alignment + (v22 << 12);
        v8 = v56;
        v25 = (_QWORD *)(((v56 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v60 = v25;
        v26 = *v25;
        if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v27 = MiReadPteShadow(v25, *v25);
          v22 = v54;
          v26 = v27;
          v17 = v42;
        }
        *(_QWORD *)v6 = -1LL;
        *(_QWORD *)(v6 + 8) = -1LL;
        *(_QWORD *)(v6 + 16) = -1LL;
        *(_QWORD *)(v6 + 24) = -1LL;
        *(_QWORD *)(v6 + 32) = -1LL;
        *(_QWORD *)(v6 + 40) = -1LL;
        *(_QWORD *)(v6 + 48) = -1LL;
        *(_QWORD *)(v6 + 56) = -1LL;
        v28 = v6 + 64;
        v53 = v26;
        if ( v21 == v43 )
        {
          v29 = v28;
          if ( (v28 & 0xFFF) != 0 )
          {
            while ( !*(_QWORD *)v29 )
            {
              v29 += 8LL;
              if ( (v29 & 0xFFF) == 0 )
                goto LABEL_41;
            }
            v52 = v29 & 0xFFFFFFFFFFFFF000uLL;
          }
        }
LABEL_41:
        v6 = v28 - 64;
        if ( v22 <= v17 )
        {
          v20 = v6;
          if ( (v6 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v20 -= 8LL;
              if ( *(_QWORD *)v20 )
                break;
              if ( (v20 & 0xFFF) == 0 )
              {
                if ( !*(_QWORD *)v20 )
                  goto LABEL_47;
                break;
              }
            }
            v20 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
        }
LABEL_47:
        _bittestandset64((signed __int64 *)v49->Region, v24);
        v30 = v8 + 0x200000;
        if ( v40 )
          v30 = v40;
        v40 = v30;
        v31 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v53) - 0x58000000000LL);
        if ( v32 >= 0 )
        {
          MiInsertTbFlushEntry(&v61, v8, 512LL, 0);
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v34 = (volatile signed __int32 *)(v31 + 3);
          v35 = 512LL;
          do
          {
            v47 = 0;
            while ( _interlockedbittestandset64(v34, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v47);
              while ( *(__int64 *)v34 < 0 );
            }
            *((_BYTE *)v34 + 10) = *((_BYTE *)v34 + 10) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)v34, 0x7FFFFFFFFFFFFFFFuLL);
            v34 += 12;
            --v35;
          }
          while ( v35 );
          __writecr8(CurrentIrql);
          v21 = v50;
          *v31 = v51;
          v51 = v31;
          if ( v54 >= v48 && v21 <= v55 )
          {
            v13 = v41;
          }
          else
          {
            v13 = v41;
            --v41[17].Region;
          }
          v8 = v56;
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
            MiLogPerfMemoryRangeEvent(v56, 0LL, 10LL, 512LL);
          v36 = (unsigned __int64)v60;
          *v60 = 0LL;
          if ( v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v36, 0LL);
          MiInsertTbFlushEntry(&v61, v8, 1LL, 1);
        }
        v16 = v43;
        v18 = v49;
        v17 = v42;
      }
      else
      {
        _bittestandreset64((signed __int64 *)v18->Region, v24);
        if ( v22 < *v59 )
          *v59 = v22;
      }
      v21 -= 512LL;
      v50 = v21;
    }
    while ( v21 > v17 );
    v4 = v51;
    v19 = v52;
  }
  if ( v19 > v20 )
    MiJoinBitmapPages(v18, v20, (v19 - v20) >> 12);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v44, retaddr);
    goto LABEL_77;
  }
  _m_prefetchw(&v44);
  v37 = v44;
  if ( !v44 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v45, 0LL, (signed __int64)&v44) == &v44 )
      goto LABEL_77;
    v37 = KxWaitForLockChainValid(&v44);
  }
  v44 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v37 + 8), 1uLL);
LABEL_77:
  __writecr8(v46);
  if ( v8 )
  {
    MiReturnSystemVa(v8, v40, 5LL, &v61);
    v38 = v57[0];
    if ( v4 )
    {
      do
      {
        v39 = (_QWORD *)*v4;
        MiFreeLargePageMemory((__int64)(v4 + 0xB000000000LL) / 48, 1LL);
        v38 += 512LL;
        v4 = v39;
      }
      while ( v39 );
      v57[0] = v38;
    }
    if ( v38 )
    {
      v58 = v38;
      MiReturnNonPagedPoolCharges(v57, 0);
    }
  }
}
