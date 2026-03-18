/*
 * XREFs of MiBuildMappedCluster @ 0x140020978
 * Callers:
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140015008 (MiReleaseWriteInProgressCharges.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiBuildMappedCluster(_QWORD *a1, char *a2, int a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  int v18; // r11d
  __int64 v19; // r9
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned __int64 v30; // r12
  __int64 v31; // r14
  __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  ULONG_PTR v43; // rsi
  char v44; // r14
  unsigned __int64 v45; // rcx
  __int64 *v46; // r15
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // r14
  __int64 v49; // rsi
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int64 v52; // r14
  __int64 v53; // r14
  unsigned __int64 v54; // rsi
  char *PoolWithTag; // rax
  char *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  ULONG_PTR v66; // rsi
  char v67; // bl
  unsigned __int64 v68; // r12
  __int64 v69; // rsi
  unsigned __int64 v70; // rbx
  char *v71; // rcx
  __int64 v72; // r14
  unsigned __int64 v74; // [rsp+28h] [rbp-49h]
  __int64 *v75; // [rsp+30h] [rbp-41h]
  char *v76; // [rsp+30h] [rbp-41h]
  __int64 v77; // [rsp+38h] [rbp-39h]
  char *v78; // [rsp+38h] [rbp-39h]
  unsigned __int64 v79; // [rsp+40h] [rbp-31h]
  unsigned __int64 v80; // [rsp+48h] [rbp-29h]
  __int64 v81; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v82; // [rsp+58h] [rbp-19h]
  unsigned __int64 v83; // [rsp+60h] [rbp-11h]
  __int64 v84; // [rsp+68h] [rbp-9h]
  unsigned __int64 v85; // [rsp+70h] [rbp-1h]
  __int64 *v86; // [rsp+78h] [rbp+7h]
  __int64 v87; // [rsp+80h] [rbp+Fh]
  __int64 v90; // [rsp+E0h] [rbp+6Fh]
  unsigned int v92; // [rsp+E8h] [rbp+77h]
  int v93; // [rsp+E8h] [rbp+77h]
  char v94; // [rsp+F0h] [rbp+7Fh] BYREF

  v5 = (__int64 *)a2;
  v6 = a1[1];
  v7 = a1 + 0xB000000000LL;
  v8 = (unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v87 = (__int64)(a1 + 0xB000000000LL) / 48;
  v9 = a1[5];
  v86 = v5 + 6;
  v75 = v5 + 6;
  v10 = v6 | 0x8000000000000000uLL;
  v79 = v10;
  v80 = v10;
  v11 = v10 & 0xFFFFFFFFFFFFF000uLL;
  v12 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v9 >> 40) & 0x3FF));
  v13 = a1[2];
  v84 = v12;
  PrototypePteDirect = MiGetPrototypePteDirect(v13, v8, a1, v7);
  v83 = PrototypePteDirect;
  if ( (v10 & 0xFFFFFFFFFFFFF000uLL) < *(_QWORD *)(PrototypePteDirect + 8) )
    v11 = *(_QWORD *)(PrototypePteDirect + 8);
  v16 = v11;
  if ( v11 < v10 - 120 )
    v16 = v10 - 120;
  v17 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
  v18 = 0;
  v77 = v17;
  v85 = v10;
  v19 = v17;
  v20 = v17 + (v10 & 0xFFF);
  v21 = v10;
  if ( !a3 )
    v11 = v10;
  if ( v10 > v11 )
  {
    v22 = v84;
    do
    {
      v20 -= 8LL;
      v23 = MI_READ_PTE_LOCK_FREE(v20);
      v81 = v23;
      if ( (v23 & 1) != 0 )
        break;
      if ( (v23 & 0x400) != 0 )
        break;
      if ( (v23 & 0x800) == 0 )
        break;
      v24 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
      if ( !(unsigned int)MiIsPfnInline(v24, v24, v25, v26)
        || (*(_BYTE *)(v28 + 48 * v27 + 34) & 0x10) == 0
        || *(_WORD *)(v28 + 48 * v27 + 32) != (_WORD)v18
        || v22 != *(_QWORD *)(v29 + 8 * ((*(_QWORD *)(v28 + 48 * v27 + 40) >> 40) & 0x3FFLL)) )
      {
        break;
      }
      v10 -= 8LL;
      if ( v10 >= v16 )
        v21 = v10;
    }
    while ( v10 > v11 );
    v5 = (__int64 *)a2;
    v19 = v77;
    v79 = v10;
    v85 = v21;
  }
  v30 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v31 = ((unsigned __int16)v20 ^ (unsigned __int16)v21) & 0xFFF ^ v20;
  v32 = *(unsigned int *)(v83 + 44);
  if ( v30 > *(_QWORD *)(v83 + 8) + 8 * v32 )
    v30 = *(_QWORD *)(v83 + 8) + 8 * v32;
  v82 = (__int64 *)v30;
  v33 = v30;
  if ( v30 > v21 + 128 )
    v33 = v21 + 128;
  v74 = v33;
  if ( a3 == v18 )
  {
    v33 = v21 + 8;
    v74 = v21 + 8;
    v30 = v21 + 8;
    v82 = (__int64 *)(v21 + 8);
  }
  v83 = v21;
  v34 = 1LL;
  v92 = 1;
  v35 = v21;
  if ( v21 < v30 )
  {
    v36 = v80;
    do
    {
      if ( v35 == v36 )
      {
        *v75++ = v87;
      }
      else
      {
        if ( (_DWORD)v34 == 3 && (__int64)(((char *)v75 - (char *)v5 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_51;
        v37 = MI_READ_PTE_LOCK_FREE(v31);
        v81 = v37;
        v38 = v37;
        if ( (v37 & 1) != 0 || (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
          goto LABEL_50;
        v39 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
        if ( !(unsigned int)MiIsPfnInline(v39, v39, v40, v41) )
        {
          v33 = v74;
          v31 -= 8LL;
          v36 = v80;
          v35 -= 8LL;
LABEL_65:
          v34 = v92;
          goto LABEL_66;
        }
        v43 = 48 * v42 - 0x58000000000LL;
        MiLockPageAtDpcInline(v43);
        if ( v38 != MI_READ_PTE_LOCK_FREE(v31) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v33 = v74;
          v31 -= 8LL;
          v19 = v77;
          v35 -= 8LL;
          v36 = v80;
          goto LABEL_65;
        }
        if ( (*(_BYTE *)(v43 + 34) & 0x10) == 0
          || *(_WORD *)(v43 + 32)
          || (v34 = v84, v84 != *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v43 + 40) >> 40) & 0x3FFLL))) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = (__int64 *)a2;
          v19 = v77;
LABEL_50:
          v33 = v74;
          goto LABEL_51;
        }
        v33 = v74;
        if ( v35 >= v74 )
        {
          v34 = v92;
        }
        else
        {
          v92 = MiReferencePageForModifiedWrite(v43);
          v34 = v92;
          if ( !v92 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v5 = (__int64 *)a2;
            v19 = v77;
LABEL_51:
            v44 = v94;
            if ( v19 )
            {
              LOBYTE(v34) = v94;
              MiUnmapPageInHyperSpaceWorker(v19, v34, 0x80000000LL);
              v19 = 0LL;
            }
            v45 = v80;
            if ( v35 >= v80 )
              goto LABEL_68;
            v46 = v75;
            v47 = ((char *)v75 - (char *)v5 - 48) >> 3;
            v83 = v47;
            if ( v47 )
            {
              if ( v75 > v5 + 6 )
              {
                v48 = (unsigned __int64)v86;
                do
                {
                  v49 = 48 * *--v46 - 0x58000000000LL;
                  v50 = (unsigned __int8)MiLockPageInline(v49);
                  MiWriteCompletePfn(v49, 1LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v50);
                }
                while ( (unsigned __int64)v46 > v48 );
                v30 = (unsigned __int64)v82;
                v21 = v85;
                v47 = v83;
                v75 = v46;
              }
              MiReleaseWriteInProgressCharges(v84, v47, 1LL);
              v45 = v80;
              v33 = v74;
            }
            if ( v33 == v21 + 8 )
            {
              v30 = v45 + 8;
              v82 = (__int64 *)(v45 + 8);
              v33 = v45 + 8;
            }
            else if ( v30 > v45 + 128 )
            {
              v33 = v45 + 128;
            }
            v21 = v45;
            v85 = v45;
            v74 = v33;
            v51 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
            v36 = v80;
            v19 = v51;
            v77 = v51;
            v31 = v51 + (v80 & 0xFFF) - 8;
            v35 = v80 - 8;
            goto LABEL_65;
          }
          *v75++ = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v19 = v77;
      }
      v36 = v80;
LABEL_66:
      v5 = (__int64 *)a2;
      v35 += 8LL;
      v31 += 8LL;
      v83 = v35;
    }
    while ( v35 < v30 );
  }
  v44 = v94;
LABEL_68:
  if ( v19 )
  {
    LOBYTE(v34) = v44;
    MiUnmapPageInHyperSpaceWorker(v19, v34, 0x80000000LL);
  }
  v52 = v35;
  if ( v35 > v33 )
    v52 = v33;
  v53 = (__int64)(v52 - v21) >> 3;
  if ( v92 == 3
    || (v54 = v79, v35 <= v33) && v79 >= v21
    || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v35 - v79) >> 3) + 48, 0x65576D4Du),
        (v78 = PoolWithTag) == 0LL) )
  {
    v71 = a2;
    goto LABEL_111;
  }
  v82 = v86;
  v76 = PoolWithTag + 48;
  v56 = PoolWithTag + 48;
  v93 = 1;
  v90 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
  v58 = v90;
  v59 = v90 + (v79 & 0xFFF);
  while ( v54 < v35 )
  {
    if ( v54 >= v21 && v54 < v33 )
    {
      v60 = *v82++;
      *(_QWORD *)v56 = v60;
LABEL_93:
      v54 += 8LL;
      v59 += 8LL;
      v79 = v54;
      v56 += 8;
      goto LABEL_104;
    }
    if ( v93 != 3 || (__int64)((v56 - v78 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v61 = MI_READ_PTE_LOCK_FREE(v59);
      v81 = v61;
      v62 = v61;
      if ( (v61 & 1) == 0 && (v61 & 0x400) == 0 && (v61 & 0x800) != 0 )
      {
        v63 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
        if ( !(unsigned int)MiIsPfnInline(v63, v63, v64, v65) )
          goto LABEL_104;
        v66 = 48 * v57 - 0x58000000000LL;
        MiLockPageAtDpcInline(v66);
        if ( v62 != MI_READ_PTE_LOCK_FREE(v59) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v54 = v79;
          v58 = v90;
          goto LABEL_104;
        }
        if ( (*(_BYTE *)(v66 + 34) & 0x10) != 0 && !*(_WORD *)(v66 + 32) )
        {
          v57 = v84;
          if ( v84 == *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v66 + 40) >> 40) & 0x3FFLL)) )
          {
            v93 = MiReferencePageForModifiedWrite(v66);
            if ( v93 )
            {
              *(_QWORD *)v56 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
              _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v54 = v79;
              v58 = v90;
              goto LABEL_93;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v58 = v90;
        v54 = v79;
      }
    }
    v67 = v94;
    if ( v58 )
    {
      LOBYTE(v57) = v94;
      MiUnmapPageInHyperSpaceWorker(v58, v57, 0x80000000LL);
      v58 = 0LL;
    }
    if ( v54 >= v21 )
      goto LABEL_107;
    v68 = (v56 - v78 - 48) >> 3;
    if ( v68 )
    {
      if ( v56 > v76 )
      {
        do
        {
          v56 -= 8;
          v69 = 48LL * *(_QWORD *)v56 - 0x58000000000LL;
          v70 = (unsigned __int8)MiLockPageInline(v69);
          MiWriteCompletePfn(v69, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v70);
        }
        while ( v56 > v76 );
        v35 = v83;
        v21 = v85;
      }
      MiReleaseWriteInProgressCharges(v84, v68, 1LL);
    }
    v82 = v86;
    v54 = v21;
    v79 = v21;
    v90 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v94, 0x80000000LL);
    v58 = v90;
    v59 = v90 + (v21 & 0xFFF);
LABEL_104:
    v33 = v74;
  }
  v67 = v94;
LABEL_107:
  if ( v58 )
  {
    LOBYTE(v57) = v67;
    MiUnmapPageInHyperSpaceWorker(v58, v57, 0x80000000LL);
  }
  v71 = v78;
  v53 = (v56 - v78 - 48) >> 3;
LABEL_111:
  v72 = v53 << 12;
  *(_QWORD *)v71 = 0LL;
  *((_QWORD *)v71 + 4) = 0LL;
  *((_QWORD *)v71 + 5) = (unsigned int)v72;
  *((_WORD *)v71 + 4) = 8 * (((unsigned __int64)(v72 + 4095) >> 12) + 6);
  *((_WORD *)v71 + 5) = 2;
  return v71;
}
