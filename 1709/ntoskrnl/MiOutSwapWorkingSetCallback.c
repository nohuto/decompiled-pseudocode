/*
 * XREFs of MiOutSwapWorkingSetCallback @ 0x140002340
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x140002130 (MiOutSwapKernelStackPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MiOutSwapWorkingSetCallback(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v3; // r9
  unsigned __int64 PteShadow; // rax
  ULONG_PTR v6; // r15
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  ULONG_PTR v11; // r14
  char v12; // di
  unsigned __int64 v13; // rbx
  char v14; // cl
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  __int64 v19; // r14
  _QWORD *v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // r12
  unsigned __int64 *v23; // rcx
  char v24; // cl
  unsigned __int64 v25; // r11
  unsigned int v26; // ecx
  __int64 v27; // r12
  __int64 PteTimeStamp; // rax
  bool v29; // zf
  unsigned __int64 v30; // r8
  __int64 *v31; // r9
  __int64 v32; // rdx
  __int64 *v33; // rcx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  unsigned __int64 v38; // [rsp+20h] [rbp-48h] BYREF
  __int64 v39; // [rsp+28h] [rbp-40h]
  int v40; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp+10h]
  ULONG_PTR v42; // [rsp+80h] [rbp+18h]

  v42 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  PteShadow = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v39 = v3;
  v41 = PteShadow;
  if ( a2 <= a3 )
  {
    v7 = 0xFFFFF6FB7DBED000uLL;
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)v6;
        LOBYTE(PteShadow) = 0;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL )
        {
          LOBYTE(PteShadow) = -8;
          if ( v6 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
            v13 = PteShadow;
          }
        }
        v38 = v13;
        if ( (v13 & 1) != 0 )
          break;
        if ( (v13 & 0x400) != 0 )
          goto LABEL_76;
        if ( (v13 & 0x800) == 0 )
        {
          LOBYTE(PteShadow) = (unsigned __int8)v13 >> 1;
          if ( (v13 & 2) != 0 )
          {
            v9 = v13;
            v16 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
            v38 = v16;
            *(_QWORD *)v6 = v16;
            LOBYTE(PteShadow) = v7;
            if ( v6 >= v7 )
            {
              LOBYTE(PteShadow) = v8;
              if ( v6 <= v8 )
                LOBYTE(PteShadow) = MiWritePteShadow(v6, v16);
            }
          }
          goto LABEL_76;
        }
        PteShadow = MiLockTransitionLeafPage(v6);
        v8 = 0xFFFFF6FB7DBED7F8uLL;
        v11 = PteShadow;
        v7 = 0xFFFFF6FB7DBED000uLL;
        if ( PteShadow )
        {
          v14 = *(_BYTE *)(PteShadow + 34);
          v12 = 1;
          if ( (v14 & 0x28) == 0 )
          {
            v15 = *(_QWORD *)(PteShadow + 16);
            LOBYTE(PteShadow) = (unsigned __int8)v15 >> 1;
            if ( (v15 & 2) != 0 )
            {
              v9 = v15;
              if ( *(_WORD *)(v11 + 32) || (v14 & 7) != 3 )
              {
                *(_QWORD *)(v11 + 16) &= ~2uLL;
              }
              else
              {
                MiUnlinkPageFromList(v11);
                *(_QWORD *)(v11 + 16) &= ~2uLL;
                LOBYTE(PteShadow) = MiInsertPageInList(v11, 8LL);
              }
            }
          }
          goto LABEL_76;
        }
      }
      PteShadow = MI_GET_PAGE_FRAME_FROM_PTE(&v38);
      if ( PteShadow > qword_1403885E0
        || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * PteShadow - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        goto LABEL_76;
      }
      v19 = 3 * PteShadow;
      LOBYTE(PteShadow) = 0;
      v11 = 16 * v19 - 0x58000000000LL;
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
      {
        v20 = *(_QWORD **)(a1 + 8);
        if ( !v20 )
          goto LABEL_76;
      }
      else
      {
        PteShadow = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
        if ( PteShadow != v6 )
          goto LABEL_76;
        v40 = 0;
        v12 = 1;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v40);
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
          v17 = 0xFFFFF6FB7DBED7F8uLL;
          v18 = 0xFFFFF6FB7DBED000uLL;
        }
        LOBYTE(PteShadow) = *(_BYTE *)(v11 + 34);
        if ( (PteShadow & 8) != 0 )
          goto LABEL_76;
        v21 = *(_QWORD *)(v11 + 16);
        v22 = (unsigned __int64 *)(v11 + 16);
        LOBYTE(PteShadow) = (unsigned __int8)v21 >> 1;
        if ( (v21 & 2) != 0 )
        {
          *v22 &= ~2uLL;
          v9 = v21;
        }
        if ( *(_WORD *)(v11 + 32) != 1 )
          goto LABEL_76;
        if ( (*(_BYTE *)(v39 + 192) & 7) == 0 )
        {
          v23 = (unsigned __int64 *)(((((__int64)(v6 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
          PteShadow = *v23;
          if ( (unsigned __int64)v23 >= v18 && (unsigned __int64)v23 <= v17 )
            PteShadow = MiReadPteShadow(v23, *v23);
          if ( (PteShadow & 1) != 0 )
          {
            LOBYTE(PteShadow) = HIBYTE(PteShadow) & 0xF;
            if ( (HIBYTE(PteShadow) & 0xF) == 8 )
              goto LABEL_76;
          }
        }
        if ( (v13 & 0x42) == 0 && (*(_BYTE *)(v11 + 34) & 0x10) == 0 )
        {
          LOBYTE(PteShadow) = (unsigned __int8)*(_DWORD *)v22 >> 2;
          if ( (*(_DWORD *)v22 & 4) == 0 )
            goto LABEL_76;
          v12 = 3;
        }
        v24 = *(_BYTE *)(v11 + 34);
        if ( (v24 & 0x10) == 0 )
        {
          if ( (*(_DWORD *)v22 & 0x400LL) == 0 && (v24 & 8) == 0 )
            v10 = MiCapturePageFileInfoInline(v11 + 16, 1LL);
          *(_BYTE *)(v11 + 34) |= 0x10u;
        }
        LOBYTE(PteShadow) = *(_BYTE *)(v11 + 34) >> 6;
        if ( (_BYTE)PteShadow != 1 )
        {
          if ( (_BYTE)PteShadow == 2 )
          {
            v12 |= 4u;
          }
          else if ( !(_BYTE)PteShadow )
          {
            v12 |= 8u;
          }
        }
        v25 = v41;
        if ( *(_DWORD *)(a1 + 32) == -1 )
        {
          PteShadow = MiTransferSoftwarePte(
                        *v22,
                        *(_QWORD *)(v41 + 8LL * *(unsigned int *)(v41 + 1140) + 5792),
                        0xFFFFFFFFLL,
                        0LL,
                        v38);
          v38 = PteShadow;
          *v22 = PteShadow;
          if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(PteShadow) = MiWritePteShadow(v11 + 16, PteShadow);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v26 = *(_DWORD *)(a1 + 32);
        v12 &= ~1u;
        v20 = *(_QWORD **)a1;
        if ( v26 != -1 )
        {
          v27 = a1 + 16LL * v26;
          if ( v26 >= 5 || !*(_DWORD *)(v27 + 48) )
            goto LABEL_76;
          MiReservePageFileSpaceForPage(v25, v6, 128LL, v27 + 40);
          PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v27 + 40));
          PteShadow = MiUpdatePageFileHighInPte(*(_QWORD *)(v27 + 40), PteTimeStamp + 1);
          v29 = (*(_DWORD *)(v27 + 48))-- == 1;
          *(_QWORD *)(v27 + 40) = PteShadow;
          if ( v29 )
            ++*(_DWORD *)(a1 + 32);
          v12 |= 0x10u;
        }
      }
      v30 = v20[2];
      if ( v30 < v20[1] )
      {
        v31 = (__int64 *)(*v20 + 16 * v30);
        v32 = (__int64)(v6 << 25) >> 16;
        if ( !v30 || (v33 = v31 - 1, PteShadow = *(v31 - 1) + *(v31 - 2), PteShadow != v32) )
        {
          LOBYTE(PteShadow) = v30 + 1;
          v20[2] = v30 + 1;
          v33 = v31 + 1;
          *v31 = v32;
          v31[1] = 0LL;
        }
        *v33 += 4096LL;
        ++v20[3];
        if ( (v12 & 2) != 0 )
          ++*(_QWORD *)(a1 + 136);
        if ( (v12 & 4) != 0 )
        {
          ++*(_QWORD *)(a1 + 120);
        }
        else if ( (v12 & 8) != 0 )
        {
          ++*(_QWORD *)(a1 + 128);
        }
      }
LABEL_76:
      if ( (v12 & 1) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v34 = v41;
      if ( v9 )
      {
        v35 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( (v9 & 4) == 0 )
          v35 = v9;
        LOBYTE(PteShadow) = MiReleasePageFileInfo(v41, v35, 0LL);
      }
      if ( v10 )
        LOBYTE(PteShadow) = MiReleasePageFileInfo(v34, v10, 0LL);
      v6 += 8LL;
      v8 = 0xFFFFF6FB7DBED7F8uLL;
      v7 = 0xFFFFF6FB7DBED000uLL;
      if ( v6 > v42 )
      {
        v3 = v39;
        break;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 36) != 17 )
  {
    if ( (unsigned int)MiWorkingSetIsContended(v3) )
    {
LABEL_90:
      LOBYTE(PteShadow) = MiRelockWorkingSetExclusive(v36, *(unsigned __int8 *)(a1 + 36));
      return PteShadow;
    }
    LODWORD(PteShadow) = KeShouldYieldProcessor();
    if ( (_DWORD)PteShadow )
    {
      v36 = v39;
      goto LABEL_90;
    }
  }
  return PteShadow;
}
