/*
 * XREFs of RtlRbRemoveNode @ 0x18003A530
 * Callers:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180037818 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x18003D9A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180060CB4 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180064118 (EtwpDereferenceUmGuidEntry.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800720D4 (RtlpHpVsFreeChunkRemove.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(__int64 a1, unsigned __int64 *a2)
{
  char v2; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  char v7; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  BOOL v10; // esi
  char v11; // r9
  char v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  char v17; // di
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  char v21; // bl
  unsigned __int64 v22; // rax
  char v23; // r9
  unsigned __int64 v24; // r9
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  char v27; // bl
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  char v32; // di
  unsigned __int64 v33; // rbp
  __int64 v34; // rcx
  unsigned __int64 *v35; // r14
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  unsigned __int64 v41; // r9
  unsigned __int64 *v42; // rdi
  char v43; // al
  char v44; // dl
  unsigned __int64 v45; // rcx
  _QWORD *v46; // r11
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // al
  unsigned __int64 v50; // rcx
  char v51; // dl
  unsigned __int64 v52; // rbx
  _BOOL8 v53; // rbx
  __int64 v54; // r11
  unsigned __int64 v55; // rdx
  char v56; // al
  unsigned __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  unsigned __int64 v61; // r9
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  char v64; // cl
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  int v67; // eax
  unsigned __int64 v68; // rdx
  __int64 v69; // r9
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // r9
  unsigned int v74; // esi
  unsigned __int64 v75; // rax
  int v76; // edx
  __int64 v77; // rdi
  __int64 *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  bool v88; // zf
  __int64 v89; // r9
  unsigned __int64 v90; // r10
  unsigned __int64 v91; // r10
  __int64 v92; // r9
  unsigned __int64 v93; // r9
  __int64 v94; // rbp
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // r9
  __int64 v97; // r9
  unsigned __int64 v98; // r9
  __int64 v99; // rbp
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rdi

  v2 = *(_BYTE *)(a1 + 8);
  v4 = *a2;
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)a2;
  v5 = a2[1];
  if ( (v2 & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)a2;
  if ( v4 )
  {
    if ( !v5 )
      goto LABEL_5;
    v8 = v5;
    v6 = v5;
    v10 = 1;
    if ( *(_QWORD *)v5 )
    {
      v10 = 0;
      do
      {
        v52 = *(_QWORD *)v8;
        v6 = v8;
        if ( (v2 & 1) != 0 && v52 )
          v8 ^= v52;
        else
          v8 = *(_QWORD *)v8;
      }
      while ( *(_QWORD *)v8 );
    }
    if ( (v2 & 1) != 0 )
      v14 = v4 ^ v8;
    else
      v14 = v4;
    *(_QWORD *)v8 = v14;
    v15 = *(_QWORD *)(v4 + 16);
    v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = *(_BYTE *)(a1 + 8) & 1;
    if ( v17 && v16 )
      v16 ^= v4;
    if ( (unsigned __int64 *)v16 != a2 )
      __fastfail(0x1Du);
    v18 = v8;
    if ( v17 )
      v18 = v4 ^ v8;
    *(_QWORD *)(v4 + 16) = v18 | v15 & 3;
    v19 = *(_QWORD *)(v5 + 16);
    v20 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
    v21 = *(_BYTE *)(a1 + 8) & 1;
    if ( v21 && v20 )
      v20 ^= v5;
    if ( (unsigned __int64 *)v20 != a2 )
      __fastfail(0x1Du);
    v22 = v8;
    if ( v21 )
      v22 = v5 ^ v8;
    *(_QWORD *)(v5 + 16) = v22 | v19 & 3;
    v4 = *(_QWORD *)(v8 + 8);
    v23 = *(_BYTE *)(a1 + 8) & 1;
    if ( v23 && v4 )
      v4 ^= v8;
    if ( v23 )
      v24 = v5 ^ v8;
    else
      v24 = v5;
    v25 = *(_QWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) = v24;
    v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
    v27 = *(_BYTE *)(a1 + 8) & 1;
    if ( v27 && v26 )
      v28 = v8 ^ v26;
    else
      v28 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v28 == v6 )
    {
LABEL_34:
      v11 = *(_BYTE *)(v8 + 16);
      v29 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v27 )
      {
        if ( v29 )
          v29 ^= (unsigned __int64)a2;
        if ( v29 )
          v29 ^= v8;
      }
      v30 = v29 | v25 & 3;
      *(_QWORD *)(v8 + 16) = v30;
      *(_BYTE *)(v8 + 16) ^= (*((_BYTE *)a2 + 16) ^ v30) & 1;
      v31 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v31 )
      {
        v32 = *(_BYTE *)(a1 + 8) & 1;
        if ( v32 )
          v31 ^= (unsigned __int64)a2;
        v33 = *(_QWORD *)(v31 + 8);
        if ( v32 && v33 )
          v33 ^= v31;
        v34 = 0LL;
        if ( (unsigned __int64 *)v33 == a2 )
          v34 = 8LL;
        v35 = (unsigned __int64 *)(v34 + v31);
        v36 = *(_QWORD *)(v34 + v31);
        if ( v32 && v36 )
          v36 ^= v31;
        if ( (unsigned __int64 *)v36 != a2 )
          __fastfail(0x1Du);
        if ( v32 )
          v37 = v8 ^ v31;
        else
          v37 = v8;
        *v35 = v37;
      }
      else
      {
        if ( *(unsigned __int64 **)a1 != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)a1 = v8;
      }
      goto LABEL_11;
    }
    if ( v27 )
    {
      if ( !v26 )
      {
LABEL_209:
        if ( v8 == v6 )
          goto LABEL_34;
LABEL_210:
        __fastfail(0x1Du);
      }
      v26 ^= v8;
    }
    if ( v26 )
      goto LABEL_210;
    goto LABEL_209;
  }
  v4 = v5;
LABEL_5:
  v6 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  v7 = v2 & 1;
  if ( v7 && v6 )
    v6 ^= (unsigned __int64)a2;
  v8 = (unsigned __int64)a2;
  if ( !v6 )
  {
    if ( v4 )
      *(_QWORD *)(v4 + 16) = 0LL;
    if ( *(unsigned __int64 **)a1 != a2 )
      __fastfail(0x1Du);
    v88 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = v4;
    if ( !v88 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v4;
    return v4;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v7 && v9 )
    v9 ^= v6;
  if ( (unsigned __int64 *)v9 != a2 )
  {
    v38 = *(_QWORD *)v6;
    if ( v7 && v38 )
      v38 ^= v6;
    if ( (unsigned __int64 *)v38 != a2 )
      __fastfail(0x1Du);
    v10 = 0;
    if ( (unsigned __int64 *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != a2 )
      goto LABEL_10;
    if ( v4 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      if ( !v7 )
        goto LABEL_10;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v6;
      if ( !v7 )
        goto LABEL_10;
    }
    *(_BYTE *)(a1 + 8) |= 1u;
    goto LABEL_10;
  }
  v10 = 1;
LABEL_10:
  v11 = *((_BYTE *)a2 + 16);
LABEL_11:
  v12 = v11 & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v4 )
    v13 = v4 ^ v6;
  else
    v13 = v4;
  *(_QWORD *)(v6 + 8LL * v10) = v13;
  if ( v4 )
  {
    v50 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v51 = *(_BYTE *)(a1 + 8) & 1;
    if ( v51 && v50 )
      v50 ^= v4;
    if ( v50 != v8 )
      __fastfail(0x1Du);
    if ( v51 && v6 )
      v6 ^= v4;
    *(_QWORD *)(v4 + 16) = v6;
    return v4;
  }
  if ( v12 )
    return v4;
  while ( 1 )
  {
    v39 = v6;
    v40 = !v10;
    v41 = *(_QWORD *)(v6 + 8 * v40);
    v42 = (unsigned __int64 *)(v6 + 8 * v40);
    v43 = *(_BYTE *)(a1 + 8);
    v44 = v43 & 1;
    if ( (v43 & 1) != 0 && v41 )
      v45 = v6 ^ v41;
    else
      v45 = v41;
    v46 = (_QWORD *)(v45 + 16);
    if ( (*(_BYTE *)(v45 + 16) & 1) == 0 )
      goto LABEL_55;
    v66 = *v46 & 0xFFFFFFFFFFFFFFFCuLL;
    v67 = v43 & 1;
    if ( v67 && v66 )
      v66 ^= v45;
    if ( v66 != v6 )
      __fastfail(0x1Du);
    if ( v67 && v41 )
      v41 ^= v6;
    if ( v41 != v45 )
      __fastfail(0x1Du);
    v68 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v67 )
    {
      if ( !v68 )
        goto LABEL_182;
      v68 ^= v6;
    }
    if ( v68 )
    {
      v69 = *(_QWORD *)(v68 + 8);
      if ( v67 && v69 )
        v69 ^= v68;
      if ( v69 == v6 )
      {
        if ( v67 )
          v70 = v45 ^ v68;
        else
          v70 = v45;
        *(_QWORD *)(v68 + 8) = v70;
      }
      else
      {
        v97 = *(_QWORD *)v68;
        if ( v67 && v97 )
          v97 ^= v68;
        if ( v97 != v6 )
          __fastfail(0x1Du);
        if ( v67 )
          v98 = v45 ^ v68;
        else
          v98 = v45;
        *(_QWORD *)v68 = v98;
      }
      goto LABEL_114;
    }
LABEL_182:
    if ( *(_QWORD *)a1 != v6 )
      __fastfail(0x1Du);
    *(_QWORD *)a1 = v45;
LABEL_114:
    if ( v67 && v68 )
      v68 ^= v45;
    *v46 &= 3uLL;
    *v46 |= v68;
    v71 = *(_QWORD *)(v45 + 8LL * v10);
    if ( !v67 )
      goto LABEL_116;
    if ( v71 )
    {
      v71 ^= v45;
LABEL_116:
      if ( v71 )
      {
        v94 = *(_QWORD *)(v71 + 16);
        v95 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v67 && v95 )
          v95 ^= v71;
        if ( v95 != v45 )
          __fastfail(0x1Du);
        if ( v67 )
          v96 = v6 ^ v71;
        else
          v96 = v6;
        *(_QWORD *)(v71 + 16) = v96 | v94 & 3;
      }
    }
    if ( v67 && v71 )
      v71 ^= v6;
    *v42 = v71;
    if ( v67 )
      v72 = v6 ^ v45;
    else
      v72 = v6;
    *(_QWORD *)(v45 + 8LL * v10) = v72;
    if ( v67 )
      v45 ^= v6;
    *(_QWORD *)(v6 + 16) &= 3uLL;
    *(_QWORD *)(v6 + 16) |= v45;
    *(_BYTE *)v46 &= ~1u;
    *(_BYTE *)(v6 + 16) |= 1u;
    v45 = *v42;
    v44 = *(_BYTE *)(a1 + 8) & 1;
    if ( v44 && v45 )
      v45 ^= v6;
LABEL_55:
    v47 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 )
    {
      if ( v44 )
        v47 ^= v45;
      if ( (*(_BYTE *)(v47 + 16) & 1) != 0 )
        break;
    }
    v48 = *(_QWORD *)(v45 + 8);
    if ( v48 )
    {
      if ( v44 )
        v48 ^= v45;
      if ( (*(_BYTE *)(v48 + 16) & 1) != 0 )
        break;
    }
    v49 = *(_BYTE *)(v6 + 16);
    if ( (v49 & 1) != 0 )
    {
      LOBYTE(v4) = v49 & 0xFE;
      *(_BYTE *)(v6 + 16) = v4;
      *(_BYTE *)(v45 + 16) |= 1u;
      return v4;
    }
    *(_BYTE *)(v45 + 16) |= 1u;
    v4 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v64 = *(_BYTE *)(a1 + 8) & 1;
    if ( v64 && v4 )
      v6 ^= v4;
    else
      v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v6 )
      return v4;
    v65 = *(_QWORD *)(v6 + 8);
    if ( v64 && v65 )
      v65 ^= v6;
    v10 = v65 == v39;
  }
  v53 = v10;
  v54 = 8 * !v10;
  v55 = *(_QWORD *)(v54 + v45);
  v56 = *(_BYTE *)(a1 + 8) & 1;
  if ( v56 )
  {
    if ( v55 )
    {
      v55 ^= v45;
      goto LABEL_72;
    }
  }
  else
  {
LABEL_72:
    if ( v55 && (*(_BYTE *)(v55 + 16) & 1) != 0 )
      goto LABEL_74;
  }
  v73 = *(_QWORD *)(v45 + 8LL * v10);
  if ( v56 && v73 )
    v73 ^= v45;
  *(_BYTE *)(v73 + 16) &= ~1u;
  v74 = !v10;
  v75 = *(_QWORD *)(v73 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v76 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v75 )
    v75 ^= v73;
  if ( v75 != v45 )
    __fastfail(0x1Du);
  v77 = v74;
  v78 = (__int64 *)(v45 + 8 * (v74 ^ 1LL));
  v79 = *v78;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v79 )
    v79 ^= v45;
  if ( v79 != v73 )
    __fastfail(0x1Du);
  v80 = 8 * v77;
  v81 = *(_QWORD *)(8 * v77 + v6);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v81 )
    v81 ^= v6;
  if ( v81 != v45 )
    goto LABEL_324;
  v82 = *(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v82 )
    v82 ^= v45;
  if ( v82 != v6 )
LABEL_324:
    __fastfail(0x1Du);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v83 = v73 ^ v6;
  else
    v83 = v73;
  *(_QWORD *)(v80 + v6) = v83;
  if ( v76 && v6 )
    v84 = v73 ^ v6;
  else
    v84 = v6;
  *(_QWORD *)(v73 + 16) &= 3uLL;
  *(_QWORD *)(v73 + 16) |= v84;
  v85 = *(_QWORD *)(v80 + v73);
  if ( v76 )
  {
    if ( v85 )
    {
      v85 ^= v73;
      goto LABEL_138;
    }
  }
  else
  {
LABEL_138:
    if ( v85 )
    {
      v99 = *(_QWORD *)(v85 + 16);
      v100 = v99 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v76 && v100 )
        v100 ^= v85;
      if ( v100 != v73 )
        __fastfail(0x1Du);
      if ( v76 )
        v101 = v45 ^ v85;
      else
        v101 = v45;
      *(_QWORD *)(v85 + 16) = v101 | v99 & 3;
    }
  }
  if ( v76 && v85 )
    v85 ^= v45;
  *v78 = v85;
  v86 = v45;
  if ( v76 )
    v86 = v73 ^ v45;
  *(_QWORD *)(v80 + v73) = v86;
  if ( v76 )
    v87 = v73 ^ v45;
  else
    v87 = v73;
  *(_QWORD *)(v45 + 16) &= 3uLL;
  v55 = v45;
  *(_QWORD *)(v45 + 16) |= v87;
  v45 = v73;
LABEL_74:
  *(_BYTE *)(v45 + 16) ^= (*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v45 + 16)) & 1;
  *(_BYTE *)(v6 + 16) &= ~1u;
  *(_BYTE *)(v55 + 16) &= ~1u;
  v57 = *(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v4) = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v57 )
    v57 ^= v45;
  if ( v57 != v6 )
    __fastfail(0x1Du);
  v58 = *(_QWORD *)(v54 + v6);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v58 )
    v58 ^= v6;
  if ( v58 != v45 )
    __fastfail(0x1Du);
  v59 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v59 )
    {
      v59 ^= v6;
      goto LABEL_79;
    }
  }
  else
  {
LABEL_79:
    if ( v59 )
    {
      v60 = *(_QWORD *)(v59 + 8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v60 )
        v60 ^= v59;
      if ( v60 == v6 )
      {
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v61 = v45 ^ v59;
        else
          v61 = v45;
        *(_QWORD *)(v59 + 8) = v61;
      }
      else
      {
        v92 = *(_QWORD *)v59;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v92 )
          v92 ^= v59;
        if ( v92 != v6 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v93 = v45 ^ v59;
        else
          v93 = v45;
        *(_QWORD *)v59 = v93;
      }
      goto LABEL_85;
    }
  }
  if ( *(_QWORD *)a1 != v6 )
    __fastfail(0x1Du);
  *(_QWORD *)a1 = v45;
LABEL_85:
  if ( (_DWORD)v4 && v59 )
    v59 ^= v45;
  *(_QWORD *)(v45 + 16) &= 3uLL;
  *(_QWORD *)(v45 + 16) |= v59;
  v62 = *(_QWORD *)(v45 + 8 * v53);
  if ( (_DWORD)v4 )
  {
    if ( v62 )
    {
      v62 ^= v45;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_87:
    if ( v62 )
    {
      v89 = *(_QWORD *)(v62 + 16);
      v90 = v89 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (_DWORD)v4 && v90 )
        v90 ^= v62;
      if ( v90 != v45 )
        __fastfail(0x1Du);
      if ( (_DWORD)v4 )
        v91 = v6 ^ v62;
      else
        v91 = v6;
      *(_QWORD *)(v62 + 16) = v91 | v89 & 3;
    }
  }
  if ( (_DWORD)v4 && v62 )
    v62 ^= v6;
  *(_QWORD *)(v54 + v6) = v62;
  if ( (_DWORD)v4 )
    v63 = v6 ^ v45;
  else
    v63 = v6;
  *(_QWORD *)(v45 + 8 * v53) = v63;
  if ( (_DWORD)v4 )
    v45 ^= v6;
  *(_QWORD *)(v6 + 16) &= 3uLL;
  *(_QWORD *)(v6 + 16) |= v45;
  return v4;
}
