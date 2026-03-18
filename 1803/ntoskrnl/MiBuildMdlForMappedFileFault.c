/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x140056680
 * Callers:
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r13
  unsigned int v11; // r10d
  __int64 v12; // r11
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v17; // rdx
  __int64 Page; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rax
  char v26; // di
  unsigned int v27; // esi
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // rax
  __int64 TransitionPte; // rax
  int v43; // [rsp+20h] [rbp-68h] BYREF
  __int64 v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+40h] [rbp-48h]
  unsigned int v49; // [rsp+98h] [rbp+10h]
  unsigned __int64 v50; // [rsp+A0h] [rbp+18h]

  v50 = a3;
  v10 = *(_QWORD *)(a1 + 160);
  v11 = 0;
  v12 = a8;
  v45 = *(_QWORD *)(a1 + 168);
  v13 = a2;
  v14 = a2;
  v47 = *(_QWORD *)(a1 + 224);
  v46 = (unsigned int)((__int64)(a3 - a2) >> 3) + 1;
  v44 = a1 + 312;
  v49 = 0;
  if ( a2 > a3 )
    goto LABEL_42;
  v15 = a1 + 312 - a2;
  while ( 1 )
  {
    v17 = *(_QWORD *)v14;
    Page = a6;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v17, a3, a6)
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * ((v14 >> 3) & 0x1FF));
          v21 = v17 | 0x20;
          if ( (v20 & 0x20) == 0 )
            v21 = v17;
          v17 = v21;
          if ( (v20 & 0x42) != 0 )
            v17 = v21 | 0x42;
        }
      }
      a3 = v50;
    }
    if ( v17 == v45 )
      break;
    *(_QWORD *)(v15 + v14) = qword_1403CC418;
LABEL_29:
    v14 += 8LL;
    if ( v14 > a3 )
      goto LABEL_42;
  }
  if ( a6 == -1 )
  {
    if ( v11 == a5 )
    {
      Page = -1LL;
    }
    else
    {
      if ( v12 && *(_BYTE *)v12 == 1 && !MiGetAvailablePagesBelowPriority(a4, ((*(_DWORD *)(v12 + 80) >> 3) & 7u) + 1) )
        Page = -1LL;
      else
        Page = MiGetPage(
                 a4,
                 *(unsigned __int16 *)(a9 + 10) | (unsigned int)(unsigned __int16)(_InterlockedExchangeAdd(
                                                                                     *(volatile signed __int32 **)a9,
                                                                                     1u) & *(_WORD *)(a9 + 8)),
                 0);
      v12 = a8;
      v11 = v49;
    }
  }
  else
  {
    a6 = -1LL;
  }
  *(_QWORD *)(v15 + v14) = Page;
  if ( Page != -1 )
  {
    a3 = v50;
    v49 = ++v11;
    goto LABEL_29;
  }
  if ( v12 )
    *(_BYTE *)(v12 + 1) = 2;
  if ( v14 > v47 )
  {
    v46 = (__int64)(v14 - v13) >> 3;
    v50 = v14 - 8;
    goto LABEL_42;
  }
  if ( !v11 )
    return 0LL;
  v46 = 1LL;
  v23 = v44;
  v50 = v47;
  v13 = v47;
  if ( v11 > 1 )
  {
    v24 = v11 - 1;
    do
    {
      v25 = *(_QWORD *)(v23 + 8);
      v23 += 8LL;
      if ( v25 != qword_1403CC418 )
      {
        MiReleaseFreshPage(48 * v25 - 0x58000000000LL);
        v11 = v49;
      }
      v49 = --v11;
      --v24;
    }
    while ( v24 );
  }
LABEL_42:
  v26 = 0;
  v27 = MiProtectionToCacheAttribute(a7);
  v29 = (unsigned __int64)((unsigned __int128)((v10 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( v13 <= v50 )
  {
    v30 = v28 - v13;
    v44 = v30;
    v31 = 0x200000000000000LL;
    v32 = 0xFFFFFFFFFLL;
    do
    {
      v33 = *(_QWORD *)(v30 + v13);
      if ( v33 == qword_1403CC418 )
      {
        v26 = 1;
      }
      else
      {
        v34 = *(_QWORD *)v13;
        v35 = 48 * v33 - 0x58000000000LL;
        if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v29, 0x200000000000000LL, v34, v30)
            && (v34 & 1) != 0
            && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
          {
            v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 8 * ((v13 >> 3) & 0x1FF));
              v38 = v34 | 0x20;
              if ( (v37 & 0x20) == 0 )
                v38 = v34;
              v34 = v38;
              if ( (v37 & 0x42) != 0 )
                v34 = v38 | 0x42;
            }
          }
          v31 = 0x200000000000000LL;
        }
        if ( (v45 & 0x400) == 0 )
        {
          v39 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v45);
          v34 = *(_QWORD *)(v40 + 48 * v39);
        }
        *(_QWORD *)(v35 + 16) = v34;
        *(_QWORD *)(v35 + 40) |= v31;
        *(_WORD *)(v35 + 32) = 1;
        if ( a8 )
          MiAdvanceFaultList(a8);
        v43 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *(__int64 *)(v35 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
          v32 = 0xFFFFFFFFFLL;
        }
        *(_BYTE *)(v35 + 34) |= 0x20u;
        *(_QWORD *)v35 = a1 + 32;
        if ( v13 == v47 )
        {
          v29 = *(unsigned __int8 *)(v35 + 35);
          LOBYTE(v29) = *(_BYTE *)(a1 + 190) ^ v29;
        }
        else
        {
          v29 = *(unsigned __int8 *)(a1 + 190);
          LOBYTE(v29) = *(_BYTE *)(v35 + 35) ^ ((unsigned __int8)v29 >> 4);
        }
        LOBYTE(v29) = *(_BYTE *)(v35 + 35) ^ v29 & 7;
        v41 = v32 & (((v10 + 0x58000000000LL) / 48) ^ *(_QWORD *)(v35 + 40));
        *(_BYTE *)(v35 + 35) = v29;
        *(_QWORD *)(v35 + 40) ^= v41;
        LOBYTE(v41) = *(_BYTE *)(v35 + 34) & 0xFA;
        *(_QWORD *)(v35 + 8) = v13;
        *(_BYTE *)(v35 + 34) = v41 | 2;
        if ( *(unsigned __int8 *)(v35 + 34) >> 6 != v27 )
        {
          MiChangePageAttribute(v35, v27, 1LL);
          v32 = 0xFFFFFFFFFLL;
        }
        *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = v44;
        if ( (v45 & 0x400) != 0 )
        {
          TransitionPte = MiMakeTransitionPte(*(_QWORD *)(v44 + v13), a7);
          *(_QWORD *)v13 = TransitionPte;
          v29 = 0xFFFFF6FB7DBED000uLL;
          if ( v13 >= 0xFFFFF6FB7DBED000uLL )
          {
            v29 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v13 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              MiWritePteShadow(v13, TransitionPte);
              v30 = v44;
            }
          }
        }
        v31 = 0x200000000000000LL;
      }
      v13 += 8LL;
    }
    while ( v13 <= v50 );
  }
  *(_DWORD *)(a1 + 180) = (_DWORD)v46 << 12;
  if ( v26 == 1 )
    *(_BYTE *)(a1 + 191) |= 1u;
  return v49;
}
