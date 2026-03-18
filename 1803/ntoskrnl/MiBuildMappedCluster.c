/*
 * XREFs of MiBuildMappedCluster @ 0x140133CF8
 * Callers:
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiReleaseWriteInProgressCharges @ 0x140134F38 (MiReleaseWriteInProgressCharges.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 *__fastcall MiBuildMappedCluster(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 *v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  unsigned __int64 v28; // r10
  __int64 v29; // r8
  unsigned __int64 v30; // r10
  __int64 v31; // r11
  __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rcx
  int v36; // ecx
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r9
  unsigned __int64 v49; // rax
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rax
  __int64 *v53; // rcx
  unsigned __int8 v54; // si
  unsigned __int64 v55; // rdx
  __int64 v56; // r12
  unsigned __int64 v57; // r12
  __int64 *v58; // r13
  __int64 v59; // rsi
  unsigned __int64 v60; // rdi
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // r14
  __int64 v64; // r14
  char *PoolWithTag; // rax
  __int64 v66; // r9
  char *v67; // r14
  __int64 v68; // r9
  unsigned __int64 v69; // r13
  unsigned __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r9
  int v80; // eax
  unsigned __int8 v81; // si
  __int64 v82; // r15
  unsigned __int64 v83; // r13
  __int64 v84; // rsi
  unsigned __int64 v85; // rdi
  __int64 v86; // r8
  __int64 v87; // r14
  unsigned __int64 v89; // [rsp+28h] [rbp-59h]
  unsigned __int64 v90; // [rsp+30h] [rbp-51h]
  __int64 v91; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v92; // [rsp+40h] [rbp-41h]
  __int64 *v93; // [rsp+48h] [rbp-39h]
  unsigned __int64 v94; // [rsp+50h] [rbp-31h]
  unsigned __int64 v95; // [rsp+58h] [rbp-29h]
  unsigned __int64 v96; // [rsp+60h] [rbp-21h]
  __int64 v97; // [rsp+68h] [rbp-19h]
  __int64 v98; // [rsp+70h] [rbp-11h]
  __int64 v99; // [rsp+78h] [rbp-9h]
  __int64 *v100; // [rsp+80h] [rbp-1h]
  unsigned __int64 v101; // [rsp+88h] [rbp+7h]
  unsigned __int64 v102; // [rsp+90h] [rbp+Fh]
  __int64 *v105; // [rsp+F0h] [rbp+6Fh]
  int v107; // [rsp+F8h] [rbp+77h]
  int v108; // [rsp+F8h] [rbp+77h]
  unsigned __int8 v109; // [rsp+100h] [rbp+7Fh] BYREF

  v5 = a2;
  v6 = a1[1];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v102 = (v8 >> 63) + v8;
  v100 = a2 + 6;
  v93 = a2 + 6;
  v9 = v6 | 0x8000000000000000uLL;
  v95 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v11 = a1[2];
  v98 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v7 >> 40) & 0x3FF));
  PrototypePteDirect = MiGetPrototypePteDirect(v11);
  v14 = PrototypePteDirect;
  v92 = (__int64 *)PrototypePteDirect;
  LODWORD(v101) = v9;
  if ( (v9 & 0xFFFFFFFFFFFFF000uLL) < *(_QWORD *)(PrototypePteDirect + 8) )
    v10 = *(_QWORD *)(PrototypePteDirect + 8);
  v15 = v10;
  if ( v10 < v9 - 120 )
    v15 = v9 - 120;
  v97 = v15;
  v99 = v13 & 0xFFFFFFFFFLL;
  v16 = MiMapPageInHyperSpaceWorker(v99, &v109, 0x80000000, v99);
  v17 = v9 & 0xFFF;
  v94 = v16;
  v89 = v9;
  v90 = v9;
  v18 = v9;
  v19 = v16;
  if ( a3 )
    v18 = v10;
  v20 = v17 + v16;
  v21 = v9;
  v22 = v9;
  v23 = v17 + v16;
  if ( v9 > v18 )
  {
    v24 = v97;
    do
    {
      v25 = MI_READ_PTE_LOCK_FREE(v20 - 8);
      v91 = v25;
      v22 = v26;
      v90 = v26;
      v23 = v20;
      if ( (v25 & 1) != 0 )
        break;
      v90 = v26;
      if ( (v25 & 0x400) != 0 )
        break;
      v90 = v26;
      if ( (v25 & 0x800) == 0 )
        break;
      v27 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v91);
      v90 = v28;
      if ( !(unsigned int)MiIsPfnInline(v27) )
        break;
      v90 = v30;
      if ( (*(_BYTE *)(48 * v29 - 0x58000000000LL + 34) & 0x10) == 0 )
        break;
      v90 = v30;
      if ( *(_WORD *)(48 * v29 - 0x58000000000LL + 32) )
        break;
      v90 = v30;
      if ( v31 != *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(48 * v29 - 0x58000000000LL + 40) >> 40) & 0x3FFLL)) )
        break;
      v9 -= 8LL;
      v90 = v9;
      v22 = v9;
      if ( v9 >= v24 )
        v21 = v9;
    }
    while ( v9 > v18 );
    v5 = a2;
    v19 = v94;
    v14 = (__int64)v92;
    v89 = v21;
  }
  v32 = *(unsigned int *)(v14 + 44);
  v33 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)v21) & 0xFFF;
  v34 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v34 > *(_QWORD *)(v14 + 8) + 8 * v32 )
    v34 = *(_QWORD *)(v14 + 8) + 8 * v32;
  v92 = (__int64 *)v34;
  v35 = v34;
  if ( v34 > v21 + 128 )
    v35 = v21 + 128;
  v96 = v35;
  if ( !a3 )
  {
    v96 = v21 + 8;
    v34 = v21 + 8;
    v92 = (__int64 *)(v21 + 8);
  }
  v107 = 1;
  v36 = 1;
  v97 = v21;
  v37 = v21;
  if ( v21 < v34 )
  {
    v38 = v95;
    do
    {
      if ( v37 == v38 )
      {
        v39 = v93;
        *v93 = v102;
        v93 = v39 + 1;
      }
      else
      {
        if ( v36 != 3 || (__int64)(((char *)v93 - (char *)v5 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
        {
          v40 = MI_READ_PTE_LOCK_FREE(v33);
          v91 = v40;
          if ( (v40 & 1) == 0 && (v40 & 0x400) == 0 && (v40 & 0x800) != 0 )
          {
            v41 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v91);
            if ( !(unsigned int)MiIsPfnInline(v41) )
            {
              v33 -= 8LL;
              v37 -= 8LL;
              goto LABEL_37;
            }
            v43 = 48 * v42 - 0x58000000000LL;
            MiLockPageAtDpcInline(v43);
            v44 = MI_READ_PTE_LOCK_FREE(v33);
            if ( v91 != v44 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v21 = v89;
              v33 -= 8LL;
              v19 = v94;
              v37 -= 8LL;
              v38 = v95;
              goto LABEL_67;
            }
            if ( (*(_BYTE *)(v43 + 34) & 0x10) != 0
              && !*(_WORD *)(v43 + 32)
              && v98 == *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v43 + 40) >> 40) & 0x3FFLL)) )
            {
              if ( v37 >= v96 )
                goto LABEL_49;
              if ( v94 )
              {
                MiUnmapPageInHyperSpaceWorker(v94, 2u, 0x80000000);
                v107 = MiReferencePageForModifiedWrite(v43, 0, v46, v47);
                v49 = MiMapPageInHyperSpaceWorker(v99, 0LL, 0x80000000, v48);
                v50 = v107;
                v33 = v49 + (v33 & 0xFFF);
                v94 = v49;
                v19 = v49;
              }
              else
              {
                v51 = MiReferencePageForModifiedWrite(v43, 0, v45, v20);
                v19 = v94;
                v50 = v51;
                v107 = v51;
              }
              if ( v50 )
              {
                v52 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v91);
                v53 = v93;
                *v93 = v52;
                v93 = v53 + 1;
LABEL_49:
                _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v21 = v89;
                v19 = v94;
LABEL_37:
                v38 = v95;
                goto LABEL_67;
              }
            }
            else
            {
              v19 = v94;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v21 = v89;
          }
        }
        v54 = v109;
        if ( v19 )
        {
          MiUnmapPageInHyperSpaceWorker(v19, v109, 0x80000000);
          v19 = 0LL;
        }
        v55 = v95;
        if ( v37 >= v95 )
          goto LABEL_69;
        v56 = ((char *)v93 - (char *)v5 - 48) >> 3;
        v97 = v56;
        if ( v56 )
        {
          if ( v93 > v5 + 6 )
          {
            v57 = (unsigned __int64)v100;
            v58 = v93;
            do
            {
              v59 = 48 * *--v58 - 0x58000000000LL;
              v60 = (unsigned __int8)MiLockPageInline(v59);
              MiWriteCompletePfn(v59, 1, v61);
              _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v60);
            }
            while ( (unsigned __int64)v58 > v57 );
            v22 = v90;
            v34 = (unsigned __int64)v92;
            v56 = v97;
            v93 = v58;
            v5 = a2;
          }
          MiReleaseWriteInProgressCharges(v98, v56, 1LL);
          v55 = v95;
        }
        v62 = v96;
        if ( v96 == v89 + 8 )
        {
          v34 = v55 + 8;
          v92 = (__int64 *)(v55 + 8);
          v96 = v55 + 8;
        }
        else
        {
          if ( v34 > v55 + 128 )
            v62 = v55 + 128;
          v96 = v62;
        }
        v21 = v55;
        v89 = v55;
        v19 = MiMapPageInHyperSpaceWorker(v99, &v109, 0x80000000, v20);
        v94 = v19;
        v33 = v19 + (v101 & 0xFFF) - 8;
        v38 = v95;
        v37 = v95 - 8;
      }
LABEL_67:
      v36 = v107;
      v37 += 8LL;
      v33 += 8LL;
      v97 = v37;
    }
    while ( v37 < v34 );
  }
  v54 = v109;
LABEL_69:
  if ( v19 )
    MiUnmapPageInHyperSpaceWorker(v19, v54, 0x80000000);
  v63 = v96;
  if ( v37 <= v96 )
    v63 = v37;
  v64 = (__int64)(v63 - v21) >> 3;
  if ( v107 == 3 || v37 <= v96 && v22 >= v21 )
    goto LABEL_114;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v37 - v22) >> 3) + 48, 0x65576D4Du);
  v92 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_114;
  v105 = v100;
  v67 = PoolWithTag + 48;
  v101 = (unsigned __int64)(PoolWithTag + 48);
  v108 = 1;
  v69 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v109, 0x80000000, v66);
  v70 = v69 + (v22 & 0xFFF);
  while ( v22 < v37 )
  {
    if ( v22 >= v21 && v22 < v96 )
    {
      v71 = *v105++;
      *(_QWORD *)v67 = v71;
LABEL_97:
      v70 += 8LL;
      v22 += 8LL;
      v67 += 8;
      goto LABEL_108;
    }
    if ( v108 != 3 || (__int64)((v67 - (char *)v92 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v72 = MI_READ_PTE_LOCK_FREE(v70);
      v91 = v72;
      if ( (v72 & 1) == 0 && (v72 & 0x400) == 0 && (v72 & 0x800) != 0 )
      {
        v73 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v91);
        if ( !(unsigned int)MiIsPfnInline(v73) )
          goto LABEL_108;
        v75 = 48 * v74 - 0x58000000000LL;
        MiLockPageAtDpcInline(v75);
        v76 = MI_READ_PTE_LOCK_FREE(v70);
        if ( v91 != v76 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_108;
        }
        if ( (*(_BYTE *)(v75 + 34) & 0x10) != 0
          && !*(_WORD *)(v75 + 32)
          && v98 == *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v75 + 40) >> 40) & 0x3FFLL)) )
        {
          if ( v69 )
          {
            MiUnmapPageInHyperSpaceWorker(v69, 2u, 0x80000000);
            v108 = MiReferencePageForModifiedWrite(v75, 0, v77, v78);
            v69 = MiMapPageInHyperSpaceWorker(v99, 0LL, 0x80000000, v79);
            v70 = v69 + (v70 & 0xFFF);
            v80 = v108;
          }
          else
          {
            v80 = MiReferencePageForModifiedWrite(v75, 0, 0LL, v68);
            v108 = v80;
          }
          if ( v80 )
          {
            *(_QWORD *)v67 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v91);
            _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_97;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = v89;
      }
    }
    v81 = v109;
    if ( v69 )
    {
      MiUnmapPageInHyperSpaceWorker(v69, v109, 0x80000000);
      v69 = 0LL;
    }
    if ( v22 >= v21 )
      goto LABEL_111;
    v82 = (v67 - (char *)v92 - 48) >> 3;
    if ( v82 )
    {
      v83 = v101;
      if ( (unsigned __int64)v67 > v101 )
      {
        do
        {
          v67 -= 8;
          v84 = 48LL * *(_QWORD *)v67 - 0x58000000000LL;
          v85 = (unsigned __int8)MiLockPageInline(v84);
          MiWriteCompletePfn(v84, 1, v86);
          _InterlockedAnd64((volatile signed __int64 *)(v84 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v85);
        }
        while ( (unsigned __int64)v67 > v83 );
        v37 = v97;
        v21 = v89;
      }
      MiReleaseWriteInProgressCharges(v98, v82, 1LL);
    }
    v105 = v100;
    v22 = v21;
    v69 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v109, 0x80000000, v68);
    v70 = v69 + (v21 & 0xFFF);
LABEL_108:
    v21 = v89;
  }
  v81 = v109;
LABEL_111:
  if ( v69 )
    MiUnmapPageInHyperSpaceWorker(v69, v81, 0x80000000);
  v5 = v92;
  v64 = (v67 - (char *)v92 - 48) >> 3;
LABEL_114:
  v87 = v64 << 12;
  *v5 = 0LL;
  *((_DWORD *)v5 + 10) = v87;
  *((_WORD *)v5 + 4) = 8 * (((unsigned __int64)(v87 + 4095) >> 12) + 6);
  v5[4] = 0LL;
  *((_DWORD *)v5 + 11) = 0;
  *((_WORD *)v5 + 5) = 2;
  return v5;
}
