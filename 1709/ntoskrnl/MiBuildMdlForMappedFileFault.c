/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x140028510
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned int v11; // r10d
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r13
  _QWORD *v15; // r12
  __int64 *v16; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  int v20; // r12d
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r11
  _WORD *v24; // rax
  __int16 v25; // dx
  __int64 Page; // rax
  unsigned int v27; // r15d
  char v28; // si
  unsigned int v29; // ebp
  __int64 v30; // r8
  __int64 v31; // r11
  __int64 v32; // r14
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 PteShadow; // rax
  int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 TransitionPte; // rax
  _QWORD *v47; // [rsp+20h] [rbp-68h]
  __int64 v48; // [rsp+20h] [rbp-68h]
  unsigned __int64 v49; // [rsp+28h] [rbp-60h] BYREF
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int64 *v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h]
  _QWORD *v53; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v54; // [rsp+98h] [rbp+10h]
  __int64 *v55; // [rsp+A0h] [rbp+18h]

  v55 = (__int64 *)a3;
  v53 = a1;
  v9 = a3;
  v10 = a1[21];
  v11 = 0;
  v52 = a1[20];
  v12 = (__int64 *)a1[28];
  v13 = a2;
  v50 = (unsigned int)((__int64)(a3 - (_QWORD)a2) >> 3) + 1;
  v47 = a1 + 38;
  v14 = a2;
  v49 = v10;
  v15 = a1;
  v51 = v12;
  v16 = a1 + 38;
  v54 = 0;
  v18 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v13 > a3 )
  {
LABEL_26:
    v27 = a7;
    v28 = 0;
    v29 = MiProtectionToCacheAttribute(a7);
    v32 = (v52 + 0x58000000000LL) / 48;
    if ( v14 <= v55 )
    {
      v33 = v30 - (_QWORD)v14;
      v48 = v33;
      v34 = 0x200000000000000LL;
      do
      {
        v35 = *(__int64 *)((char *)v14 + v33);
        if ( v35 == qword_140389198 )
        {
          v28 = 1;
        }
        else
        {
          v40 = 48 * v35 - 0x58000000000LL;
          PteShadow = *v14;
          if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow(v14, *v14);
            v34 = 0x200000000000000LL;
          }
          v42 = (v10 >> 10) & 1;
          if ( v42 )
          {
            *(_QWORD *)(v40 + 16) = PteShadow;
          }
          else
          {
            v43 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v49);
            *(_QWORD *)(v40 + 16) = *(_QWORD *)(v44 + 48 * v43);
          }
          *(_QWORD *)(v40 + 40) |= v34;
          *(_WORD *)(v40 + 32) = 1;
          if ( v31 )
            MiAdvanceFaultList(v31);
          LODWORD(v53) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v53);
            while ( *(__int64 *)(v40 + 24) < 0 );
          }
          *(_BYTE *)(v40 + 34) |= 0x20u;
          *(_QWORD *)v40 = v15 + 4;
          if ( v14 == v51 )
            *(_BYTE *)(v40 + 35) ^= (*(_BYTE *)(v40 + 35) ^ *((_BYTE *)v15 + 190)) & 7;
          else
            *(_BYTE *)(v40 + 35) ^= (*(_BYTE *)(v40 + 35) ^ (*((_BYTE *)v15 + 190) >> 4)) & 7;
          v45 = v32 ^ *(_QWORD *)(v40 + 40);
          *(_QWORD *)(v40 + 8) = v14;
          *(_QWORD *)(v40 + 40) ^= v45 & 0xFFFFFFFFFLL;
          *(_BYTE *)(v40 + 34) = *(_BYTE *)(v40 + 34) & 0xF8 | 2;
          if ( *(unsigned __int8 *)(v40 + 34) >> 6 != v29 )
            MiChangePageAttribute(v40, v29, 1LL);
          *(_QWORD *)(v40 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v33 = v48;
          if ( v42 )
          {
            TransitionPte = MiMakeTransitionPte(*(__int64 *)((char *)v14 + v48), v27);
            *v14 = TransitionPte;
            if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              MiWritePteShadow(v14, TransitionPte);
              v33 = v48;
            }
          }
          v10 = v49;
          v34 = 0x200000000000000LL;
        }
        v31 = a8;
        ++v14;
      }
      while ( v14 <= v55 );
    }
    *((_DWORD *)v15 + 45) = (_DWORD)v50 << 12;
    if ( v28 == 1 )
      *((_BYTE *)v15 + 191) |= 1u;
    return v54;
  }
  v19 = a9;
  v20 = a5;
  v21 = a6;
  while ( 1 )
  {
    v22 = *v13;
    if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
      v22 = MiReadPteShadow(v13, *v13);
    if ( v22 != v10 )
    {
      *v16 = qword_140389198;
      goto LABEL_17;
    }
    if ( v21 == -1 )
    {
      v23 = a8;
      if ( v11 == v20
        || a8 && *(_BYTE *)a8 == 1 && !MiGetAvailablePagesBelowPriority(a4, ((*(_DWORD *)(a8 + 80) >> 3) & 7u) + 1) )
      {
        *v16 = -1LL;
        goto LABEL_21;
      }
      v24 = *(_WORD **)v19;
      v25 = *(_WORD *)(v19 + 8);
      Page = MiGetPage(a4, *(unsigned __int16 *)(v19 + 10) | (unsigned int)(unsigned __int16)(++*v24 & v25), 0LL);
      v11 = v54;
      v9 = (unsigned __int64)v55;
      *v16 = Page;
    }
    else
    {
      *v16 = v21;
      v21 = -1LL;
    }
    if ( *v16 == -1 )
      break;
    v54 = ++v11;
LABEL_17:
    ++v13;
    ++v16;
    if ( (unsigned __int64)v13 > v9 )
      goto LABEL_25;
    v18 = 0xFFFFF6FB7DBED7F8uLL;
  }
  v23 = a8;
LABEL_21:
  if ( v23 )
    *(_BYTE *)(v23 + 1) = 2;
  if ( v13 > v51 )
  {
    v50 = v13 - v14;
    v55 = v13 - 1;
LABEL_25:
    v15 = v53;
    goto LABEL_26;
  }
  if ( v11 )
  {
    v50 = 1LL;
    v37 = v47;
    v55 = v51;
    v14 = v51;
    if ( v11 > 1 )
    {
      v38 = v11 - 1;
      do
      {
        v39 = v37[1];
        ++v37;
        if ( v39 != qword_140389198 )
        {
          MiReleaseFreshPage(48 * v39 - 0x58000000000LL, v18);
          v11 = v54;
        }
        v54 = --v11;
        --v38;
      }
      while ( v38 );
    }
    goto LABEL_25;
  }
  return 0LL;
}
