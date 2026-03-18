/*
 * XREFs of MiBuildMappedCluster @ 0x1400EE1F0
 * Callers:
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400EFDE0 (MiReleaseWriteInProgressCharges.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiBuildMappedCluster(_QWORD *a1, char *a2, int a3)
{
  char *v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r9
  bool v20; // zf
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r9
  __int64 PteShadow; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 *v29; // rsi
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rax
  unsigned __int8 v40; // si
  unsigned __int64 v41; // rcx
  char *v42; // r12
  __int64 v43; // r14
  unsigned __int64 v44; // r13
  __int64 v45; // rsi
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r14
  __int64 v51; // r14
  char *PoolWithTag; // rax
  char *v53; // r14
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r9
  __int64 *v58; // r15
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rax
  unsigned __int8 v64; // si
  __int64 v65; // r15
  unsigned __int64 v66; // r13
  __int64 v67; // rsi
  unsigned __int64 v68; // rbx
  __int64 v69; // r14
  unsigned __int64 v71; // [rsp+28h] [rbp-49h]
  unsigned __int64 v72; // [rsp+30h] [rbp-41h]
  char *v73; // [rsp+30h] [rbp-41h]
  __int64 v74; // [rsp+38h] [rbp-39h]
  unsigned __int64 v75; // [rsp+38h] [rbp-39h]
  __int64 *v76; // [rsp+38h] [rbp-39h]
  unsigned __int64 v77; // [rsp+40h] [rbp-31h]
  char *v78; // [rsp+48h] [rbp-29h]
  __int64 v79; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v80; // [rsp+58h] [rbp-19h]
  __int64 v81; // [rsp+60h] [rbp-11h]
  __int64 v82; // [rsp+68h] [rbp-9h]
  unsigned __int64 v83; // [rsp+70h] [rbp-1h]
  __int64 *v84; // [rsp+78h] [rbp+7h]
  char *v85; // [rsp+80h] [rbp+Fh]
  unsigned __int64 v88; // [rsp+E0h] [rbp+6Fh]
  unsigned int v90; // [rsp+E8h] [rbp+77h]
  int v91; // [rsp+E8h] [rbp+77h]
  unsigned __int8 v92; // [rsp+F0h] [rbp+7Fh] BYREF

  v5 = a2;
  v6 = a1[1];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v85 = (char *)((v8 >> 63) + v8);
  v84 = (__int64 *)(a2 + 48);
  v78 = a2 + 48;
  v9 = v6 | 0x8000000000000000uLL;
  v83 = v9;
  v77 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v11 = a1[2];
  v82 = *(_QWORD *)(qword_140388AF0 + 8 * ((v7 >> 40) & 0x3FF));
  PrototypePteDirect = MiGetPrototypePteDirect(v11);
  v74 = PrototypePteDirect;
  v14 = PrototypePteDirect;
  if ( (v9 & 0xFFFFFFFFFFFFF000uLL) < *(_QWORD *)(PrototypePteDirect + 8) )
    v10 = *(_QWORD *)(PrototypePteDirect + 8);
  v15 = v10;
  if ( v10 < v9 - 120 )
    v15 = v9 - 120;
  v81 = v15;
  v16 = MiMapPageInHyperSpaceWorker(v13 & 0xFFFFFFFFFLL, &v92, 0x80000000);
  v17 = 0;
  v72 = v16;
  v18 = v16 + (v9 & 0xFFF);
  v19 = v16;
  v20 = a3 == 0;
  v21 = v9;
  if ( v20 )
    v10 = v9;
  v71 = v9;
  if ( v9 > v10 )
  {
    v22 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v18 -= 8LL;
      PteShadow = *(_QWORD *)v18;
      if ( v18 >= v22 && v18 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v18, *(_QWORD *)v18);
        v17 = 0;
      }
      v79 = PteShadow;
      if ( (PteShadow & 1) != 0 )
        break;
      if ( (PteShadow & 0x400) != 0 )
        break;
      if ( (PteShadow & 0x800) == 0 )
        break;
      v24 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v79);
      if ( !(unsigned int)MiIsPfnInline(v24)
        || (*(_BYTE *)(48 * v25 - 0x58000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * v25 - 0x58000000000LL + 32) != (_WORD)v17
        || v27 != *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(48 * v25 - 0x58000000000LL + 40) >> 40) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      if ( v9 >= v26 )
        v21 = v9;
    }
    while ( v9 > v10 );
    v5 = a2;
    v19 = v72;
    v14 = v74;
    v83 = v9;
    v71 = v21;
  }
  v28 = *(unsigned int *)(v14 + 44);
  v29 = (__int64 *)(((unsigned __int16)v18 ^ (unsigned __int16)v21) & 0xFFF ^ v18);
  v30 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v30 > *(_QWORD *)(v14 + 8) + 8 * v28 )
    v30 = *(_QWORD *)(v14 + 8) + 8 * v28;
  v75 = v30;
  v31 = v30;
  if ( v30 > v21 + 128 )
    v31 = v21 + 128;
  v80 = v31;
  if ( a3 == v17 )
  {
    v80 = v21 + 8;
    v30 = v21 + 8;
    v75 = v21 + 8;
  }
  v81 = v21;
  v32 = 1LL;
  v90 = 1;
  v33 = v21;
  if ( v21 < v30 )
  {
    v34 = v77;
    do
    {
      if ( v33 == v34 )
      {
        *(_QWORD *)v78 = v85;
        v78 += 8;
      }
      else
      {
        if ( (_DWORD)v32 == 3 && (__int64)((v78 - v5 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_59;
        v35 = *v29;
        if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
          v35 = MiReadPteShadow(v29, *v29);
        v79 = v35;
        if ( (v35 & 1) != 0 || (v35 & 0x400) != 0 || (v35 & 0x800) == 0 )
          goto LABEL_58;
        v36 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v79);
        if ( !(unsigned int)MiIsPfnInline(v36) )
        {
          v21 = v71;
          --v29;
          v34 = v77;
          v33 -= 8LL;
          goto LABEL_74;
        }
        v38 = 48 * v37 - 0x58000000000LL;
        MiLockPageAtDpcInline(v38);
        v39 = *v29;
        if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
          v39 = MiReadPteShadow(v29, *v29);
        if ( v35 != v39 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v21 = v71;
          --v29;
          v19 = v72;
          v33 -= 8LL;
          v34 = v77;
          goto LABEL_74;
        }
        if ( (*(_BYTE *)(v38 + 34) & 0x10) == 0
          || *(_WORD *)(v38 + 32)
          || (v32 = v82, v82 != *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v38 + 40) >> 40) & 0x3FFLL))) )
        {
LABEL_57:
          v19 = v72;
          _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_58:
          v21 = v71;
LABEL_59:
          v40 = v92;
          if ( v19 )
          {
            LOBYTE(v32) = v92;
            MiUnmapPageInHyperSpaceWorker(v19, v32, 0x80000000LL);
            v19 = 0LL;
          }
          v41 = v77;
          if ( v33 >= v77 )
            goto LABEL_77;
          v42 = v78;
          v43 = (v78 - v5 - 48) >> 3;
          v81 = v43;
          if ( v43 )
          {
            if ( v78 > v5 + 48 )
            {
              v44 = (unsigned __int64)v84;
              do
              {
                v42 -= 8;
                v45 = 48LL * *(_QWORD *)v42 - 0x58000000000LL;
                v46 = (unsigned __int8)MiLockPageInline(v45);
                MiWriteCompletePfn(v45, 1);
                _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v46);
              }
              while ( (unsigned __int64)v42 > v44 );
              v30 = v75;
              v43 = v81;
              v5 = a2;
              v78 = v42;
            }
            MiReleaseWriteInProgressCharges(v82, v43, 1LL, v19);
            v41 = v77;
          }
          v47 = v80;
          if ( v80 == v71 + 8 )
          {
            v30 = v41 + 8;
            v75 = v41 + 8;
            v80 = v41 + 8;
          }
          else
          {
            if ( v30 > v41 + 128 )
              v47 = v41 + 128;
            v80 = v47;
          }
          v21 = v41;
          v71 = v41;
          v48 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v92, 0x80000000);
          v34 = v77;
          v19 = v48;
          v72 = v48;
          v29 = (__int64 *)(v48 + (v77 & 0xFFF) - 8);
          v33 = v77 - 8;
LABEL_74:
          v32 = v90;
          goto LABEL_75;
        }
        if ( v33 >= v80 )
        {
          v32 = v90;
        }
        else
        {
          v90 = MiReferencePageForModifiedWrite(v38);
          v32 = v90;
          if ( !v90 )
            goto LABEL_57;
          *(_QWORD *)v78 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v79);
          v78 += 8;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = v71;
        v19 = v72;
      }
      v34 = v77;
LABEL_75:
      v33 += 8LL;
      ++v29;
      v81 = v33;
    }
    while ( v33 < v30 );
  }
  v40 = v92;
LABEL_77:
  if ( v19 )
  {
    LOBYTE(v32) = v40;
    MiUnmapPageInHyperSpaceWorker(v19, v32, 0x80000000LL);
  }
  v49 = v80;
  v50 = v33;
  if ( v33 > v80 )
    v50 = v80;
  v51 = (__int64)(v50 - v21) >> 3;
  if ( v90 == 3 || v33 <= v80 && v83 >= v21 )
    goto LABEL_126;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v33 - v83) >> 3) + 48, 0x65576D4Du);
  v73 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_126;
  v76 = v84;
  v85 = PoolWithTag + 48;
  v53 = PoolWithTag + 48;
  v91 = 1;
  v54 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v92, 0x80000000);
  v56 = v83;
  v57 = v54;
  v88 = v54;
  v58 = (__int64 *)(v54 + (v83 & 0xFFF));
  while ( v56 < v33 )
  {
    if ( v56 >= v21 && v56 < v49 )
    {
      v59 = *v76++;
      *(_QWORD *)v53 = v59;
LABEL_108:
      ++v58;
      v56 += 8LL;
      v53 += 8;
      goto LABEL_120;
    }
    if ( v91 != 3 || (__int64)((v53 - v73 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v60 = *v58;
      if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL )
        v60 = MiReadPteShadow(v58, *v58);
      v79 = v60;
      if ( (v60 & 1) == 0 && (v60 & 0x400) == 0 && (v60 & 0x800) != 0 )
      {
        v61 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v79);
        if ( !(unsigned int)MiIsPfnInline(v61) )
          goto LABEL_120;
        v62 = 48 * v55 - 0x58000000000LL;
        MiLockPageAtDpcInline(v62);
        v63 = *v58;
        if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL )
          v63 = MiReadPteShadow(v58, *v58);
        if ( v60 != v63 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v57 = v88;
          goto LABEL_120;
        }
        if ( (*(_BYTE *)(v62 + 34) & 0x10) != 0 && !*(_WORD *)(v62 + 32) )
        {
          v55 = v82;
          if ( v82 == *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v62 + 40) >> 40) & 0x3FFLL)) )
          {
            v91 = MiReferencePageForModifiedWrite(v62);
            if ( v91 )
            {
              *(_QWORD *)v53 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v79);
              _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v57 = v88;
              goto LABEL_108;
            }
          }
        }
        v57 = v88;
        _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v21 = v71;
    }
    v64 = v92;
    if ( v57 )
    {
      LOBYTE(v55) = v92;
      MiUnmapPageInHyperSpaceWorker(v57, v55, 0x80000000LL);
      v57 = 0LL;
    }
    if ( v56 >= v21 )
      goto LABEL_123;
    v65 = (v53 - v73 - 48) >> 3;
    if ( v65 )
    {
      v66 = (unsigned __int64)v85;
      if ( v53 > v85 )
      {
        do
        {
          v53 -= 8;
          v67 = 48LL * *(_QWORD *)v53 - 0x58000000000LL;
          v68 = (unsigned __int8)MiLockPageInline(v67);
          MiWriteCompletePfn(v67, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v68);
        }
        while ( (unsigned __int64)v53 > v66 );
        v33 = v81;
        v21 = v71;
      }
      MiReleaseWriteInProgressCharges(v82, v65, 1LL, v57);
    }
    v76 = v84;
    v56 = v21;
    v88 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v92, 0x80000000);
    v57 = v88;
    v58 = (__int64 *)(v88 + (v21 & 0xFFF));
LABEL_120:
    v21 = v71;
    v49 = v80;
  }
  v64 = v92;
LABEL_123:
  if ( v57 )
  {
    LOBYTE(v55) = v64;
    MiUnmapPageInHyperSpaceWorker(v57, v55, 0x80000000LL);
  }
  v5 = v73;
  v51 = (v53 - v73 - 48) >> 3;
LABEL_126:
  v69 = v51 << 12;
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = (unsigned int)v69;
  *((_WORD *)v5 + 4) = 8 * (((unsigned __int64)(v69 + 4095) >> 12) + 6);
  *((_WORD *)v5 + 5) = 2;
  return v5;
}
