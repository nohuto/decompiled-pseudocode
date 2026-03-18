/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x140107600
 * Callers:
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r13
  __int64 *v13; // rdi
  _QWORD *v14; // r14
  _QWORD *v15; // rbp
  _QWORD *v16; // rsi
  __int64 v17; // r14
  int v18; // r12d
  __int64 v19; // rbp
  unsigned int v20; // r9d
  unsigned __int64 v21; // r10
  _WORD *v22; // rax
  __int16 v23; // dx
  __int64 Page; // rax
  char v25; // si
  __int64 v26; // r8
  unsigned int v27; // r15d
  __int128 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned int v33; // r9d
  _QWORD *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r10
  int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // r11
  unsigned __int8 v47; // r11
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // [rsp+20h] [rbp-68h]
  _QWORD *v51; // [rsp+28h] [rbp-60h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  unsigned __int64 v53; // [rsp+30h] [rbp-58h] BYREF
  __int64 v54; // [rsp+38h] [rbp-50h]
  _QWORD *v55; // [rsp+40h] [rbp-48h]
  _QWORD *v56; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v57; // [rsp+98h] [rbp+10h]
  unsigned __int64 v58; // [rsp+A0h] [rbp+18h]

  v58 = a3;
  v57 = a2;
  v56 = a1;
  v9 = a1[21];
  v10 = (_QWORD *)a1[28];
  v11 = a1[20];
  v53 = v9;
  v54 = (unsigned int)((__int64)(a3 - (_QWORD)a2) >> 3) + 1;
  v51 = a1 + 38;
  v13 = a1 + 38;
  v55 = v10;
  v14 = a2;
  v50 = 0;
  v15 = a1;
  v16 = a2;
  if ( (unsigned __int64)a2 > a3 )
  {
LABEL_17:
    v25 = 0;
    v27 = MiProtectionToCacheAttribute(a7);
    v28 = (v11 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL;
    v29 = v58;
    v30 = (*((_QWORD *)&v28 + 1) >> 63) + (*((__int64 *)&v28 + 1) >> 3);
    if ( (unsigned __int64)v14 <= v58 )
    {
      v31 = v26 - (_QWORD)v14;
      v52 = v31;
      do
      {
        v32 = *(_QWORD *)((char *)v14 + v31);
        if ( v32 == qword_14036CED8 )
        {
          v25 = 1;
        }
        else
        {
          v38 = 48 * v32 - 0x58000000000LL;
          v39 = MI_READ_PTE_LOCK_FREE(v14);
          *(_QWORD *)v38 = v15 + 4;
          v44 = (v9 >> 10) & 1;
          if ( v44 )
          {
            *(_QWORD *)(v38 + 16) = v39;
          }
          else
          {
            v45 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v53);
            *(_QWORD *)(v38 + 16) = *(_QWORD *)(v46 + 48 * v45);
          }
          *(_QWORD *)(v38 + 40) |= v43;
          v47 = 1;
          *(_WORD *)(v38 + 32) = 1;
          if ( v42 )
            MiAdvanceFaultList(v42, v40, v41);
          LODWORD(v56) = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v56);
              while ( *(__int64 *)(v38 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
            v47 = 1;
          }
          *(_BYTE *)(v38 + 34) |= 0x20u;
          if ( v14 == v55 )
            *(_BYTE *)(v38 + 35) ^= (*(_BYTE *)(v38 + 35) ^ *((_BYTE *)v15 + 190)) & 7;
          else
            *(_BYTE *)(v38 + 35) ^= (*(_BYTE *)(v38 + 35) ^ (*((_BYTE *)v15 + 190) >> 4)) & 7;
          v48 = v30 ^ *(_QWORD *)(v38 + 40);
          *(_QWORD *)(v38 + 8) = v14;
          *(_QWORD *)(v38 + 40) ^= v48 & 0xFFFFFFFFFLL;
          *(_BYTE *)(v38 + 34) = *(_BYTE *)(v38 + 34) & 0xF8 | 2;
          if ( *(unsigned __int8 *)(v38 + 34) >> 6 != v27 )
            MiChangePageAttribute(v38, v27, v47);
          *(_QWORD *)(v38 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v31 = v52;
          if ( v44 )
          {
            *v14 = MiMakeTransitionPte(*(_QWORD *)((char *)v14 + v52), a7);
            if ( (unsigned int)MiPteInShadowRange(v14) )
            {
              MiWritePteShadow(v49);
              v31 = v52;
            }
          }
          v9 = v53;
        }
        ++v14;
      }
      while ( (unsigned __int64)v14 <= v29 );
    }
    *((_DWORD *)v15 + 45) = (_DWORD)v54 << 12;
    if ( v25 == 1 )
      *((_BYTE *)v15 + 191) |= 1u;
    return v50;
  }
  v17 = a9;
  v18 = a5;
  v19 = a6;
  while ( MI_READ_PTE_LOCK_FREE(v16) != v9 )
  {
    *v13 = qword_14036CED8;
LABEL_14:
    ++v16;
    ++v13;
    if ( (unsigned __int64)v16 > v21 )
    {
      v14 = v57;
LABEL_16:
      v15 = v56;
      goto LABEL_17;
    }
  }
  if ( v19 != -1 )
  {
    *v13 = v19;
    v19 = -1LL;
LABEL_12:
    if ( *v13 == -1 )
      goto LABEL_22;
    v50 = v20 + 1;
    goto LABEL_14;
  }
  if ( v20 != v18
    && (!a8 || *(_BYTE *)a8 != 1 || MiGetAvailablePagesBelowPriority(a4, ((*(_DWORD *)(a8 + 80) >> 3) & 7u) + 1)) )
  {
    v22 = *(_WORD **)v17;
    v23 = *(_WORD *)(v17 + 8);
    Page = MiGetPage(a4, *(unsigned __int16 *)(v17 + 10) | (unsigned int)(unsigned __int16)(++*v22 & v23), 0);
    v20 = v50;
    v21 = v58;
    *v13 = Page;
    goto LABEL_12;
  }
  *v13 = -1LL;
LABEL_22:
  if ( a8 )
    *(_BYTE *)(a8 + 1) = 2;
  if ( v16 > v55 )
  {
    v14 = v57;
    v54 = v16 - v57;
    v58 = (unsigned __int64)(v16 - 1);
    goto LABEL_16;
  }
  v33 = v50;
  if ( v50 )
  {
    v54 = 1LL;
    v14 = v55;
    v58 = (unsigned __int64)v55;
    v35 = v51;
    if ( v50 > 1 )
    {
      v36 = v50 - 1;
      do
      {
        v37 = v35[1];
        ++v35;
        if ( v37 != qword_14036CED8 )
        {
          MiReleaseFreshPage(48 * v37 - 0x58000000000LL);
          v33 = v50;
        }
        v50 = --v33;
        --v36;
      }
      while ( v36 );
    }
    goto LABEL_16;
  }
  return 0LL;
}
