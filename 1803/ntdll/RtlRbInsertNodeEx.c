/*
 * XREFs of RtlRbInsertNodeEx @ 0x180021C90
 * Callers:
 *     sub_180005E60 @ 0x180005E60 (sub_180005E60.c)
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_18002235C @ 0x18002235C (sub_18002235C.c)
 *     sub_1800235C8 @ 0x1800235C8 (sub_1800235C8.c)
 *     sub_1800241D0 @ 0x1800241D0 (sub_1800241D0.c)
 *     sub_18004334C @ 0x18004334C (sub_18004334C.c)
 *     sub_18005E81C @ 0x18005E81C (sub_18005E81C.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v7; // r10
  char v8; // cl
  char v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // bl
  unsigned __int64 v15; // rdx
  char v16; // r8
  __int64 v17; // rcx
  BOOL v18; // eax
  _BOOL8 v19; // rcx
  _BOOL8 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r8d
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r9
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  int v39; // r8d
  __int64 *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = a2;
  v8 = *(_BYTE *)(a1 + 8);
  v9 = v8 & 1;
  if ( !a2 )
  {
    v10 = a1 ^ a4;
    if ( v9 )
    {
      *(_QWORD *)a1 = v10;
      v8 = *(_BYTE *)(a1 + 8);
    }
    else
    {
      *(_QWORD *)a1 = a4;
    }
    if ( (v8 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v10;
      LOBYTE(v10) = v10 | 1;
      *(_BYTE *)(a1 + 8) = v10;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v10;
  }
  v11 = a4;
  if ( v9 )
    v11 = a2 ^ a4;
  *(_QWORD *)(a2 + 8LL * a3) = v11;
  v12 = a2;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v12 = a2 ^ a4;
  v10 = v12 | 1;
  *(_QWORD *)(a4 + 16) = v10;
  if ( !a3 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( (v13 & 1) != 0 )
      v10 = v13 == 1 ? 0LL : v13 ^ (a1 | 1);
    else
      v10 = *(_QWORD *)(a1 + 8);
    if ( a2 == v10 )
    {
      if ( (v13 & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = a4 ^ a1;
        LOBYTE(v10) = a4 ^ a1 | 1;
        *(_BYTE *)(a1 + 8) = v10;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = a4;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v14 = *(_BYTE *)(a1 + 8);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = v14 & 1;
      if ( (v14 & 1) != 0 && v15 )
        v15 ^= v7;
      v17 = *(_QWORD *)v15;
      if ( v16 && v17 )
        v17 ^= v15;
      v18 = v17 != v7;
      v19 = v17 == v7;
      v20 = v18;
      v21 = *(_QWORD *)(v15 + 8 * v19);
      if ( v16 )
      {
        if ( !v21 )
          break;
        v21 ^= v15;
      }
      if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(v7 + 16) &= ~1u;
      a4 = v15;
      *(_BYTE *)(v21 + 16) &= ~1u;
      v10 = *(_QWORD *)(v15 + 16);
      v7 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !v7 )
          return v10;
        v7 ^= v15;
      }
      if ( v7 )
      {
        *(_BYTE *)(v15 + 16) = v10 | 1;
        v14 = *(_BYTE *)(a1 + 8);
        v10 = *(_QWORD *)v7;
        if ( (v14 & 1) != 0 && v10 )
          v10 ^= v7;
        a3 = v15 != v10;
        if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
          continue;
      }
      return v10;
    }
    if ( a3 == v20 )
    {
LABEL_88:
      v36 = *(_QWORD *)a1;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
      {
        if ( v36 )
          v36 ^= a1;
        else
          v36 = 0LL;
      }
      v37 = (unsigned int)v20 ^ 1;
      v38 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v39 = *(_QWORD *)(a1 + 8) & 1;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v38 )
        v38 ^= v7;
      if ( v38 != v15 )
        __fastfail(0x1Du);
      v40 = (__int64 *)(v15 + 8 * ((unsigned int)v37 ^ 1LL));
      v41 = *v40;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v41 )
        v41 ^= v15;
      if ( v41 != v7 )
        __fastfail(0x1Du);
      v42 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_107;
        v42 ^= v15;
      }
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8);
        if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v43 )
          v43 ^= v42;
        if ( v43 == v15 )
        {
          v44 = v7 ^ v42;
          if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
            v44 = v7;
          *(_QWORD *)(v42 + 8) = v44;
        }
        else
        {
          v45 = *(_QWORD *)v42;
          if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v45 )
            v45 ^= v42;
          if ( v45 != v15 )
            __fastfail(0x1Du);
          v46 = v7 ^ v42;
          if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
            v46 = v7;
          *(_QWORD *)v42 = v46;
        }
LABEL_125:
        if ( v39 && v42 )
          v42 ^= v7;
        *(_QWORD *)(v7 + 16) &= 3uLL;
        *(_QWORD *)(v7 + 16) |= v42;
        v47 = *(_QWORD *)(v7 + 8 * v37);
        if ( v39 )
        {
          if ( !v47 )
          {
LABEL_140:
            if ( v39 && v47 )
              v47 ^= v15;
            *v40 = v47;
            v51 = v7 ^ v15;
            v10 = v7 ^ v15;
            if ( !v39 )
              v10 = v15;
            *(_QWORD *)(v7 + 8 * v37) = v10;
            *(_QWORD *)(v15 + 16) &= 3uLL;
            if ( !v39 )
              v51 = v7;
            *(_QWORD *)(v15 + 16) |= v51;
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            {
              LOBYTE(v10) = a1 ^ v36;
              if ( v36 )
                v4 = a1 ^ v36;
            }
            else
            {
              v4 = v36;
            }
            *(_QWORD *)a1 = v4;
            *(_BYTE *)(v15 + 16) |= 1u;
            *(_BYTE *)(v7 + 16) &= ~1u;
            return v10;
          }
          v47 ^= v7;
        }
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 16);
          v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v39 && v49 )
            v49 ^= v47;
          if ( v49 != v7 )
            __fastfail(0x1Du);
          v50 = v47 ^ v15;
          if ( !v39 )
            v50 = v15;
          *(_QWORD *)(v47 + 16) = v48 & 3 | v50;
        }
        goto LABEL_140;
      }
LABEL_107:
      if ( v36 != v15 )
        __fastfail(0x1Du);
      v36 = v7;
      goto LABEL_125;
    }
    v22 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = v14 & 1;
    if ( (v14 & 1) != 0 && v22 )
      v22 ^= a4;
    if ( v22 != v7 )
      __fastfail(0x1Du);
    v24 = *(_QWORD *)(v7 + 8 * v19);
    if ( (v14 & 1) != 0 && v24 )
      v24 ^= v7;
    if ( v24 != a4 )
      __fastfail(0x1Du);
    v25 = *(_QWORD *)(v15 + 8 * v20);
    if ( (v14 & 1) != 0 && v25 )
      v25 ^= v15;
    if ( v25 != v7 )
      goto LABEL_91;
    v26 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v14 & 1) != 0 && v26 )
      v26 ^= v7;
    if ( v26 != v15 )
LABEL_91:
      __fastfail(0x1Du);
    v27 = (unsigned __int64 *)(a4 + 8 * v20);
    v28 = v15 ^ a4;
    v29 = v15 ^ a4;
    if ( (v14 & 1) == 0 )
      v29 = a4;
    *(_QWORD *)(v15 + 8 * v20) = v29;
    *(_QWORD *)(a4 + 16) &= 3uLL;
    if ( (v14 & 1) == 0 )
      v28 = v15;
    *(_QWORD *)(a4 + 16) |= v28;
    v30 = *v27;
    if ( (v14 & 1) != 0 )
    {
      if ( !v30 )
      {
LABEL_80:
        if ( v23 && v30 )
          v30 ^= v7;
        *(_QWORD *)(v7 + 8 * !v20) = v30;
        v34 = v7 ^ a4;
        v35 = v7 ^ a4;
        if ( !v23 )
          v35 = v7;
        *v27 = v35;
        *(_QWORD *)(v7 + 16) &= 3uLL;
        if ( !v23 )
          v34 = a4;
        *(_QWORD *)(v7 + 16) |= v34;
        v7 = a4;
        goto LABEL_88;
      }
      v30 ^= a4;
    }
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v23 && v32 )
        v32 ^= v30;
      if ( v32 != a4 )
        __fastfail(0x1Du);
      v33 = v30 ^ v7;
      if ( !v23 )
        v33 = v7;
      *(_QWORD *)(v30 + 16) = v31 & 3 | v33;
    }
    goto LABEL_80;
  }
  return v10;
}
