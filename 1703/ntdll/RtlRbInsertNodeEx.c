/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001E790
 * Callers:
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18001B91C @ 0x18001B91C (sub_18001B91C.c)
 *     sub_18001BB44 @ 0x18001BB44 (sub_18001BB44.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180052B08 @ 0x180052B08 (sub_180052B08.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(__int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  bool v7; // zf
  char v8; // r11
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  _BOOL8 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // r10d
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  BOOL v26; // ebx
  unsigned __int64 v27; // rax
  int v28; // r9d
  _BOOL8 v29; // r11
  __int64 *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 v33; // r10
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdi
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r10
  __int64 v45; // rbp
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rdi

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v5 = a4 ^ a2;
    else
      v5 = a4;
    *(_QWORD *)(a2 + 8LL * a3) = v5;
    v6 = a2;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v6 = a4 ^ a2;
    *(_QWORD *)(a4 + 16) = v6 | 1;
    if ( !a3 && a2 == (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      v7 = (*(_BYTE *)(a1 + 8) & 1) == 0;
      *(_QWORD *)(a1 + 8) = a4;
      if ( !v7 )
        *(_BYTE *)(a1 + 8) |= 1u;
    }
    if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
      return;
    v8 = *(_BYTE *)(a1 + 8) & 1;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 && v9 )
        v9 ^= a2;
      v10 = *(_QWORD *)v9;
      if ( v8 && v10 )
        v10 ^= v9;
      v11 = v10 != a2;
      v12 = *(_QWORD *)(v9 + 8 * !v11);
      if ( v8 )
      {
        if ( !v12 )
          break;
        v12 ^= v9;
      }
      if ( !v12 || (*(_BYTE *)(v12 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v9;
      *(_BYTE *)(v12 + 16) &= ~1u;
      a2 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !a2 )
          return;
        a2 ^= v9;
      }
      if ( a2 )
      {
        *(_BYTE *)(v9 + 16) |= 1u;
        v39 = *(_QWORD *)a2;
        v8 = *(_BYTE *)(a1 + 8) & 1;
        if ( v8 && v39 )
          v39 ^= a2;
        a3 = v9 != v39;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return;
    }
    if ( a3 == v11 )
    {
LABEL_38:
      v26 = !v11;
      v27 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v28 = *(_BYTE *)(a1 + 8) & 1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v27 )
        v27 ^= a2;
      if ( v27 != v9 )
        __fastfail(0x1Du);
      v29 = v26;
      v30 = (__int64 *)(v9 + 8 * !v26);
      v31 = *v30;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v31 )
        v31 ^= v9;
      if ( v31 != a2 )
        __fastfail(0x1Du);
      v32 = (_QWORD *)(v9 + 16);
      v33 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_83;
        v33 ^= v9;
      }
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 8);
        if ( v28 && v34 )
          v34 ^= v33;
        if ( v34 == v9 )
        {
          if ( v28 )
            v35 = a2 ^ v33;
          else
            v35 = a2;
          *(_QWORD *)(v33 + 8) = v35;
        }
        else
        {
          v40 = *(_QWORD *)v33;
          if ( v28 && v40 )
            v40 ^= v33;
          if ( v40 != v9 )
            __fastfail(0x1Du);
          if ( v28 )
            v41 = a2 ^ v33;
          else
            v41 = a2;
          *(_QWORD *)v33 = v41;
        }
        goto LABEL_49;
      }
LABEL_83:
      if ( *(_QWORD *)a1 != v9 )
        __fastfail(0x1Du);
      *(_QWORD *)a1 = a2;
LABEL_49:
      if ( v28 && v33 )
        v33 ^= a2;
      *(_QWORD *)(a2 + 16) &= 3uLL;
      *(_QWORD *)(a2 + 16) |= v33;
      v36 = *(_QWORD *)(a2 + 8 * v29);
      if ( v28 )
      {
        if ( !v36 )
        {
LABEL_52:
          if ( v28 && v36 )
            v36 ^= v9;
          *v30 = v36;
          v37 = v9;
          if ( v28 )
            v37 = a2 ^ v9;
          *(_QWORD *)(a2 + 8 * v29) = v37;
          if ( v28 )
            v38 = a2 ^ v9;
          else
            v38 = a2;
          *v32 &= 3uLL;
          *v32 |= v38;
          *(_BYTE *)v32 |= 1u;
          *(_BYTE *)(a2 + 16) &= ~1u;
          return;
        }
        v36 ^= a2;
      }
      if ( v36 )
      {
        v42 = *(_QWORD *)(v36 + 16);
        v43 = v42 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v28 && v43 )
          v43 ^= v36;
        if ( v43 != a2 )
          __fastfail(0x1Du);
        if ( v28 )
          v44 = v9 ^ v36;
        else
          v44 = v9;
        *(_QWORD *)(v36 + 16) = v44 | v42 & 3;
      }
      goto LABEL_52;
    }
    v13 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v13 )
      v13 ^= a4;
    if ( v13 != a2 )
      __fastfail(0x1Du);
    v15 = (unsigned __int64 *)(a2 + 8 * !v11);
    v16 = *v15;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v16 )
      v16 ^= a2;
    if ( v16 != a4 )
      __fastfail(0x1Du);
    v17 = 8 * v11;
    v18 = *(_QWORD *)(8 * v11 + v9);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v18 )
      v18 ^= v9;
    if ( v18 != a2 )
      goto LABEL_117;
    v19 = (_QWORD *)(a2 + 16);
    v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v20 )
      v20 ^= a2;
    if ( v20 != v9 )
LABEL_117:
      __fastfail(0x1Du);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v21 = a4 ^ v9;
    else
      v21 = a4;
    *(_QWORD *)(v17 + v9) = v21;
    v22 = v9;
    if ( v14 )
      v22 = a4 ^ v9;
    *(_QWORD *)(a4 + 16) &= 3uLL;
    *(_QWORD *)(a4 + 16) |= v22;
    v23 = *(_QWORD *)(v17 + a4);
    if ( v14 )
    {
      if ( !v23 )
      {
LABEL_32:
        if ( v14 && v23 )
          v23 ^= a2;
        *v15 = v23;
        v24 = a2;
        if ( v14 )
          v24 = a4 ^ a2;
        *(_QWORD *)(v17 + a4) = v24;
        if ( v14 )
          v25 = a4 ^ a2;
        else
          v25 = a4;
        *v19 &= 3uLL;
        *v19 |= v25;
        a2 = a4;
        goto LABEL_38;
      }
      v23 ^= a4;
    }
    if ( v23 )
    {
      v45 = *(_QWORD *)(v23 + 16);
      v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 && v46 )
        v46 ^= v23;
      if ( v46 != a4 )
        __fastfail(0x1Du);
      if ( v14 )
        v47 = a2 ^ v23;
      else
        v47 = a2;
      *(_QWORD *)(v23 + 16) = v47 | v45 & 3;
    }
    goto LABEL_32;
  }
  v7 = (*(_BYTE *)(a1 + 8) & 1) == 0;
  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)a1 = a4;
  if ( !v7 )
    *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)(a4 + 16) = 0LL;
}
