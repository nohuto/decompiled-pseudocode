/*
 * XREFs of RtlRbRemoveNode @ 0x180028010
 * Callers:
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009CF8 @ 0x180009CF8 (sub_180009CF8.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_18001EB74 @ 0x18001EB74 (sub_18001EB74.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     sub_18005FE54 @ 0x18005FE54 (sub_18005FE54.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlRbRemoveNode(__int64 a1, unsigned __int64 *a2)
{
  char v2; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  char v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  char v11; // r9
  char v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int64 v17; // r9
  char v18; // si
  unsigned __int64 v19; // r9
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  char v22; // r11
  unsigned __int64 v23; // rax
  char v24; // r9
  unsigned __int64 v25; // r9
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  char v28; // r11
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r11
  char v33; // si
  unsigned __int64 v34; // rbp
  unsigned __int64 *v35; // r14
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r11
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned __int64 *v40; // rbx
  char v41; // dl
  unsigned __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  char v46; // dl
  unsigned __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // r11
  unsigned __int64 v50; // rdx
  char v51; // al
  unsigned __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // r9
  unsigned __int64 v56; // r9
  __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r9
  __int64 v60; // rdi
  unsigned __int64 v61; // rax
  int v62; // edx
  __int64 *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  bool v73; // zf
  char v74; // dl
  __int64 v75; // rcx
  unsigned __int64 v76; // r11
  int v77; // edx
  unsigned __int64 v78; // r9
  __int64 v79; // r11
  unsigned __int64 v80; // r11
  unsigned __int64 v81; // r9
  unsigned __int64 v82; // r9
  __int64 v83; // r9
  unsigned __int64 v84; // r9
  __int64 v85; // r9
  unsigned __int64 v86; // r10
  unsigned __int64 v87; // r10
  __int64 v88; // rbp
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // rdi
  __int64 v91; // r11
  unsigned __int64 v92; // r11
  __int64 v93; // rbp
  unsigned __int64 v94; // r11
  unsigned __int64 v95; // r11

  v2 = *(_BYTE *)(a1 + 8);
  result = *a2;
  if ( (v2 & 1) != 0 && result )
    result ^= (unsigned __int64)a2;
  v5 = a2[1];
  if ( (v2 & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)a2;
  if ( result )
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
        v47 = *(_QWORD *)v8;
        v6 = v8;
        if ( (v2 & 1) != 0 && v47 )
          v8 ^= v47;
        else
          v8 = *(_QWORD *)v8;
      }
      while ( *(_QWORD *)v8 );
    }
    if ( (v2 & 1) != 0 )
      v15 = result ^ v8;
    else
      v15 = result;
    *(_QWORD *)v8 = v15;
    v16 = *(_QWORD *)(result + 16);
    v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    v18 = *(_BYTE *)(a1 + 8) & 1;
    if ( v18 && v17 )
      v17 ^= result;
    if ( (unsigned __int64 *)v17 != a2 )
      __fastfail(0x1Du);
    v19 = v8;
    if ( v18 )
      v19 = result ^ v8;
    *(_QWORD *)(result + 16) = v19 | v16 & 3;
    v20 = *(_QWORD *)(v5 + 16);
    v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
    v22 = *(_BYTE *)(a1 + 8) & 1;
    if ( v22 && v21 )
      v21 ^= v5;
    if ( (unsigned __int64 *)v21 != a2 )
      __fastfail(0x1Du);
    v23 = v8;
    if ( v22 )
      v23 = v5 ^ v8;
    *(_QWORD *)(v5 + 16) = v23 | v20 & 3;
    result = *(_QWORD *)(v8 + 8);
    v24 = *(_BYTE *)(a1 + 8) & 1;
    if ( v24 && result )
      result ^= v8;
    if ( v24 )
      v25 = v5 ^ v8;
    else
      v25 = v5;
    v26 = *(_QWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) = v25;
    v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = *(_BYTE *)(a1 + 8) & 1;
    if ( v28 && v27 )
      v29 = v8 ^ v27;
    else
      v29 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v29 == v6 )
    {
LABEL_40:
      v11 = *(_BYTE *)(v8 + 16);
      v30 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v28 )
      {
        if ( v30 )
          v30 ^= (unsigned __int64)a2;
        if ( v30 )
          v30 ^= v8;
      }
      v31 = v30 | v26 & 3;
      *(_QWORD *)(v8 + 16) = v31;
      *(_BYTE *)(v8 + 16) ^= (*((_BYTE *)a2 + 16) ^ v31) & 1;
      v32 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v32 )
      {
        v33 = *(_BYTE *)(a1 + 8) & 1;
        if ( v33 )
          v32 ^= (unsigned __int64)a2;
        v34 = *(_QWORD *)(v32 + 8);
        if ( v33 && v34 )
          v34 ^= v32;
        v35 = (unsigned __int64 *)(v32 + 8LL * (v34 == (_QWORD)a2));
        v36 = *v35;
        if ( v33 && v36 )
          v36 ^= v32;
        if ( (unsigned __int64 *)v36 != a2 )
          __fastfail(0x1Du);
        if ( v33 )
          v37 = v8 ^ v32;
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
    if ( v28 )
    {
      if ( !v27 )
      {
LABEL_206:
        if ( v8 == v6 )
          goto LABEL_40;
LABEL_207:
        __fastfail(0x1Du);
      }
      v27 ^= v8;
    }
    if ( v27 )
      goto LABEL_207;
    goto LABEL_206;
  }
  result = v5;
LABEL_5:
  v6 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  v7 = v2 & 1;
  if ( v7 && v6 )
    v6 ^= (unsigned __int64)a2;
  v8 = (unsigned __int64)a2;
  if ( !v6 )
  {
    if ( result )
      *(_QWORD *)(result + 16) = 0LL;
    if ( *(unsigned __int64 **)a1 != a2 )
      __fastfail(0x1Du);
    v73 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = result;
    if ( !v73 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = result;
    return result;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v7 && v9 )
    v9 ^= v6;
  if ( (unsigned __int64 *)v9 != a2 )
  {
    v14 = *(_QWORD *)v6;
    if ( v7 && v14 )
      v14 ^= v6;
    if ( (unsigned __int64 *)v14 != a2 )
      __fastfail(0x1Du);
    v10 = 0;
    if ( (unsigned __int64 *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != a2 )
      goto LABEL_10;
    if ( result )
    {
      *(_QWORD *)(a1 + 8) = result;
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
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && result )
    v13 = result ^ v6;
  else
    v13 = result;
  *(_QWORD *)(v6 + 8LL * v10) = v13;
  if ( result )
  {
    v45 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v46 = *(_BYTE *)(a1 + 8) & 1;
    if ( v46 && v45 )
      v45 ^= result;
    if ( v45 != v8 )
      __fastfail(0x1Du);
    if ( v46 && v6 )
      v6 ^= result;
    *(_QWORD *)(result + 16) = v6;
    return result;
  }
  if ( v12 )
    return result;
  while ( 1 )
  {
    v38 = v10 ^ 1LL;
    v39 = *(_QWORD *)(v6 + 8 * v38);
    v40 = (unsigned __int64 *)(v6 + 8 * v38);
    v41 = *(_BYTE *)(a1 + 8) & 1;
    if ( v41 && v39 )
      v42 = v6 ^ v39;
    else
      v42 = *(_QWORD *)(v6 + 8 * v38);
    v43 = (_QWORD *)(v42 + 16);
    if ( (*(_BYTE *)(v42 + 16) & 1) == 0 )
      goto LABEL_53;
    v76 = *v43 & 0xFFFFFFFFFFFFFFFCuLL;
    v77 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v76 )
      v76 ^= v42;
    if ( v76 != v6 )
      __fastfail(0x1Du);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v39 )
      v39 ^= v6;
    if ( v39 != v42 )
      __fastfail(0x1Du);
    v78 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( !v78 )
        goto LABEL_179;
      v78 ^= v6;
    }
    if ( v78 )
    {
      v79 = *(_QWORD *)(v78 + 8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v79 )
        v79 ^= v78;
      if ( v79 == v6 )
      {
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v80 = v42 ^ v78;
        else
          v80 = v42;
        *(_QWORD *)(v78 + 8) = v80;
      }
      else
      {
        v91 = *(_QWORD *)v78;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v91 )
          v91 ^= v78;
        if ( v91 != v6 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v92 = v42 ^ v78;
        else
          v92 = v42;
        *(_QWORD *)v78 = v92;
      }
      goto LABEL_140;
    }
LABEL_179:
    if ( *(_QWORD *)a1 != v6 )
      __fastfail(0x1Du);
    *(_QWORD *)a1 = v42;
LABEL_140:
    if ( v77 && v78 )
      v78 ^= v42;
    *v43 &= 3uLL;
    *v43 |= v78;
    v81 = *(_QWORD *)(v42 + 8LL * v10);
    if ( !v77 )
      goto LABEL_142;
    if ( v81 )
    {
      v81 ^= v42;
LABEL_142:
      if ( v81 )
      {
        v93 = *(_QWORD *)(v81 + 16);
        v94 = v93 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v77 && v94 )
          v94 ^= v81;
        if ( v94 != v42 )
          __fastfail(0x1Du);
        if ( v77 )
          v95 = v6 ^ v81;
        else
          v95 = v6;
        *(_QWORD *)(v81 + 16) = v95 | v93 & 3;
      }
    }
    if ( v77 && v81 )
      v81 ^= v6;
    *v40 = v81;
    if ( v77 )
      v82 = v6 ^ v42;
    else
      v82 = v6;
    *(_QWORD *)(v42 + 8LL * v10) = v82;
    if ( v77 )
      v42 ^= v6;
    *(_QWORD *)(v6 + 16) &= 3uLL;
    *(_QWORD *)(v6 + 16) |= v42;
    *(_BYTE *)v43 &= ~1u;
    *(_BYTE *)(v6 + 16) |= 1u;
    v42 = *v40;
    v41 = *(_BYTE *)(a1 + 8) & 1;
    if ( v41 && v42 )
      v42 ^= v6;
LABEL_53:
    v44 = *(_QWORD *)v42;
    if ( *(_QWORD *)v42 )
    {
      if ( v41 )
        v44 ^= v42;
      if ( (*(_BYTE *)(v44 + 16) & 1) != 0 )
        break;
    }
    result = *(_QWORD *)(v42 + 8);
    if ( result )
    {
      if ( v41 )
        result ^= v42;
      if ( (*(_BYTE *)(result + 16) & 1) != 0 )
        break;
    }
    if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
    {
      *(_BYTE *)(v6 + 16) &= ~1u;
      *(_BYTE *)(v42 + 16) |= 1u;
      return result;
    }
    *(_BYTE *)(v42 + 16) |= 1u;
    result = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v74 = *(_BYTE *)(a1 + 8) & 1;
    if ( v74 )
    {
      if ( !result )
        return result;
      result ^= v6;
    }
    if ( !result )
      return result;
    v75 = *(_QWORD *)(result + 8);
    if ( v74 )
    {
      if ( v75 )
        v75 ^= result;
    }
    v73 = v75 == v6;
    v6 = result;
    v10 = v73;
  }
  v48 = v10;
  v49 = 8 * (v10 ^ 1LL);
  v50 = *(_QWORD *)(v49 + v42);
  v51 = *(_BYTE *)(a1 + 8) & 1;
  if ( v51 )
  {
    if ( v50 )
    {
      v50 ^= v42;
      goto LABEL_70;
    }
  }
  else
  {
LABEL_70:
    if ( v50 && (*(_BYTE *)(v50 + 16) & 1) != 0 )
      goto LABEL_72;
  }
  v59 = *(_QWORD *)(v42 + 8LL * v10);
  if ( v51 && v59 )
    v59 ^= v42;
  *(_BYTE *)(v59 + 16) &= ~1u;
  v60 = v10 ^ 1;
  v61 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v62 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v61 )
    v61 ^= v59;
  if ( v61 != v42 )
    __fastfail(0x1Du);
  v63 = (__int64 *)(v42 + 8 * (v60 ^ 1));
  v64 = *v63;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v64 )
    v64 ^= v42;
  if ( v64 != v59 )
    __fastfail(0x1Du);
  v65 = 8 * v60;
  v66 = *(_QWORD *)(8 * v60 + v6);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v66 )
    v66 ^= v6;
  if ( v66 != v42 )
    goto LABEL_320;
  v67 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v67 )
    v67 ^= v42;
  if ( v67 != v6 )
LABEL_320:
    __fastfail(0x1Du);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v68 = v59 ^ v6;
  else
    v68 = v59;
  *(_QWORD *)(v65 + v6) = v68;
  if ( v62 && v6 )
    v69 = v59 ^ v6;
  else
    v69 = v6;
  *(_QWORD *)(v59 + 16) &= 3uLL;
  *(_QWORD *)(v59 + 16) |= v69;
  v70 = *(_QWORD *)(v65 + v59);
  if ( v62 )
  {
    if ( v70 )
    {
      v70 ^= v59;
      goto LABEL_110;
    }
  }
  else
  {
LABEL_110:
    if ( v70 )
    {
      v88 = *(_QWORD *)(v70 + 16);
      v89 = v88 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v62 && v89 )
        v89 ^= v70;
      if ( v89 != v59 )
        __fastfail(0x1Du);
      if ( v62 )
        v90 = v42 ^ v70;
      else
        v90 = v42;
      *(_QWORD *)(v70 + 16) = v90 | v88 & 3;
    }
  }
  if ( v62 && v70 )
    v70 ^= v42;
  *v63 = v70;
  v71 = v42;
  if ( v62 )
    v71 = v59 ^ v42;
  *(_QWORD *)(v65 + v59) = v71;
  if ( v62 )
    v72 = v59 ^ v42;
  else
    v72 = v59;
  *(_QWORD *)(v42 + 16) &= 3uLL;
  v50 = v42;
  *(_QWORD *)(v42 + 16) |= v72;
  v42 = v59;
LABEL_72:
  *(_BYTE *)(v42 + 16) ^= (*(_BYTE *)(v42 + 16) ^ *(_BYTE *)(v6 + 16)) & 1;
  *(_BYTE *)(v6 + 16) &= ~1u;
  *(_BYTE *)(v50 + 16) &= ~1u;
  v52 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  result = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v52 )
    v52 ^= v42;
  if ( v52 != v6 )
    __fastfail(0x1Du);
  v53 = *(_QWORD *)(v49 + v6);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v53 )
    v53 ^= v6;
  if ( v53 != v42 )
    __fastfail(0x1Du);
  v54 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v54 )
    {
      v54 ^= v6;
      goto LABEL_77;
    }
  }
  else
  {
LABEL_77:
    if ( v54 )
    {
      v55 = *(_QWORD *)(v54 + 8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v55 )
        v55 ^= v54;
      if ( v55 == v6 )
      {
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v56 = v42 ^ v54;
        else
          v56 = v42;
        *(_QWORD *)(v54 + 8) = v56;
      }
      else
      {
        v83 = *(_QWORD *)v54;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v83 )
          v83 ^= v54;
        if ( v83 != v6 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          v84 = v42 ^ v54;
        else
          v84 = v42;
        *(_QWORD *)v54 = v84;
      }
      goto LABEL_83;
    }
  }
  if ( *(_QWORD *)a1 != v6 )
    __fastfail(0x1Du);
  *(_QWORD *)a1 = v42;
LABEL_83:
  if ( (_DWORD)result && v54 )
    v54 ^= v42;
  *(_QWORD *)(v42 + 16) &= 3uLL;
  *(_QWORD *)(v42 + 16) |= v54;
  v57 = *(_QWORD *)(v42 + 8 * v48);
  if ( (_DWORD)result )
  {
    if ( v57 )
    {
      v57 ^= v42;
      goto LABEL_85;
    }
  }
  else
  {
LABEL_85:
    if ( v57 )
    {
      v85 = *(_QWORD *)(v57 + 16);
      v86 = v85 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (_DWORD)result && v86 )
        v86 ^= v57;
      if ( v86 != v42 )
        __fastfail(0x1Du);
      if ( (_DWORD)result )
        v87 = v6 ^ v57;
      else
        v87 = v6;
      *(_QWORD *)(v57 + 16) = v87 | v85 & 3;
    }
  }
  if ( (_DWORD)result && v57 )
    v57 ^= v6;
  *(_QWORD *)(v49 + v6) = v57;
  if ( (_DWORD)result )
    v58 = v6 ^ v42;
  else
    v58 = v6;
  *(_QWORD *)(v42 + 8 * v48) = v58;
  if ( (_DWORD)result )
    v42 ^= v6;
  *(_QWORD *)(v6 + 16) &= 3uLL;
  *(_QWORD *)(v6 + 16) |= v42;
  return result;
}
