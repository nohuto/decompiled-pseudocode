/*
 * XREFs of RtlAvlRemoveNode @ 0x18006A620
 * Callers:
 *     RtlDeleteFunctionTable @ 0x18006A2B0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     sub_18006B178 @ 0x18006B178 (sub_18006B178.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // cl
  _BYTE *v10; // rdi
  char v11; // al
  unsigned __int8 v12; // bp
  unsigned __int64 v13; // rsi
  bool v14; // zf
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // rbx
  char v24; // r15
  _BOOL8 v25; // r10
  _BOOL8 v26; // r11
  __int64 v27; // r9
  _QWORD *v28; // rax
  char v29; // r8
  unsigned __int8 v30; // cl
  __int64 v31; // r8

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v4;
  if ( *(_QWORD *)a2 )
    v5 = *(_QWORD *)a2;
  v7 = -*(_QWORD *)a2;
  if ( (-(__int64)(*(_QWORD *)a2 != 0LL) & v4) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
    {
      v28 = *(_QWORD **)(v2 + 8);
      v17 = 0;
      v16 = *(_QWORD *)a2;
      v8 = *(_QWORD *)a2;
      if ( v28 )
      {
        v17 = 1;
        do
        {
          v8 = v16;
          v16 = (unsigned __int64)v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( v28 );
      }
      v18 = *(_QWORD *)v16;
    }
    else
    {
      v15 = *(_QWORD **)v4;
      v16 = *(_QWORD *)(a2 + 8);
      v8 = v16;
      v17 = 1;
      if ( *(_QWORD *)v4 )
      {
        v17 = 0;
        do
        {
          v8 = v16;
          v16 = (unsigned __int64)v15;
          v15 = (_QWORD *)*v15;
        }
        while ( v15 );
      }
      v18 = *(_QWORD *)(v16 + 8);
    }
    *(_QWORD *)v16 = v2;
    *(_QWORD *)(v16 + 8) = v4;
    v19 = *(_QWORD *)(v2 + 16);
    if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v16 | v19 & 3;
    v20 = *(_QWORD *)(v4 + 16);
    if ( (v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v4 + 16) = v16 | v20 & 3;
    if ( (*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
      __fastfail(0x1Du);
    *(_QWORD *)(v8 + 8LL * v17) = v18;
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 16) != v16 )
        __fastfail(0x1Du);
      *(_QWORD *)(v18 + 16) = v8;
    }
    *(_QWORD *)(v16 + 16) = *(_QWORD *)(a2 + 16);
    v9 = v17 != 0 ? 3 : 1;
    v21 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v21 )
    {
      v22 = 0LL;
      if ( *(_QWORD *)(v21 + 8) == a2 )
        v22 = 8LL;
      if ( *(_QWORD *)(v22 + v21) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v22 + v21) = v16;
    }
    else
    {
      if ( *a1 != a2 )
        __fastfail(0x1Du);
      *a1 = v16;
    }
    while ( 1 )
    {
LABEL_8:
      v10 = (_BYTE *)(v8 + 16);
      v11 = *(_BYTE *)(v8 + 16);
      v12 = v11 & 3;
      if ( (v11 & 3) == ((unsigned __int8)v9 ^ 2) )
      {
        LOBYTE(v7) = v11 & 0xFC;
        *v10 = v7;
        v13 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        if ( !v12 )
        {
          LOBYTE(v7) = v9 | v11 & 0xFC;
          *(_BYTE *)(v8 + 16) = v7;
          return v7;
        }
        v23 = *(_QWORD *)v8;
        v13 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v9 == 1 )
          v23 = *(_QWORD *)(v8 + 8);
        v24 = *(_BYTE *)(v23 + 16) & 3;
        if ( v24 == ((unsigned __int8)v9 ^ 2) )
        {
          v7 = sub_18006B178(a1, v8, v23, v9 == 1);
          *v10 &= 0xFCu;
          v8 = v7;
          v29 = *(_BYTE *)(v23 + 16) & 0xFC;
          *(_BYTE *)(v23 + 16) = v29;
          v30 = *(_BYTE *)(v7 + 16);
          LODWORD(v7) = v30 & 3;
          if ( v12 == (_DWORD)v7 )
          {
            *v10 &= 0xFCu;
            *v10 |= (v12 ^ 0xFE) & 3;
          }
          else if ( v12 == ((v30 ^ 0xFE) & 3) )
          {
            *(_BYTE *)(v23 + 16) = v12 | v29;
          }
          *(_BYTE *)(v8 + 16) &= 0xFCu;
        }
        else
        {
          if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            __fastfail(0x1Du);
          v25 = v9 != 1;
          v26 = v9 == 1;
          if ( *(_QWORD *)(v8 + 8 * v26) != v23 )
            __fastfail(0x1Du);
          if ( v13 )
          {
            if ( *(_QWORD *)(v13 + 8) == v8 )
            {
              *(_QWORD *)(v13 + 8) = v23;
            }
            else
            {
              if ( *(_QWORD *)v13 != v8 )
                __fastfail(0x1Du);
              *(_QWORD *)v13 = v23;
            }
          }
          else
          {
            if ( *a1 != v8 )
              __fastfail(0x1Du);
            *a1 = v23;
          }
          *(_QWORD *)(v23 + 16) &= 3uLL;
          *(_QWORD *)(v23 + 16) |= v13;
          v27 = *(_QWORD *)(v23 + 8 * v25);
          if ( v27 )
          {
            v31 = *(_QWORD *)(v27 + 16);
            if ( (v31 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
              __fastfail(0x1Du);
            *(_QWORD *)(v27 + 16) = v8 | v31 & 3;
          }
          *(_QWORD *)(v8 + 8 * v26) = v27;
          *(_QWORD *)(v23 + 8 * v25) = v8;
          *(_QWORD *)v10 &= 3uLL;
          *(_QWORD *)v10 |= v23;
          LOBYTE(v7) = *(_BYTE *)(v23 + 16) & 0xFC;
          if ( !v24 )
          {
            *(_BYTE *)(v23 + 16) = v7 | (v9 ^ 0xFE) & 3;
            return v7;
          }
          *(_BYTE *)(v23 + 16) = v7;
          v8 = v23;
          *v10 &= 0xFCu;
        }
      }
      if ( !v13 )
        return v7;
      v14 = *(_QWORD *)(v13 + 8) == v8;
      v9 = 3;
      v8 = v13;
      if ( !v14 )
        v9 = 1;
    }
  }
  v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v5 + 16) = v8;
  }
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 8) == a2 )
    {
      v9 = 3;
      *(_QWORD *)(v8 + 8) = v5;
    }
    else
    {
      if ( *(_QWORD *)v8 != a2 )
        __fastfail(0x1Du);
      v9 = 1;
      *(_QWORD *)v8 = v5;
    }
    goto LABEL_8;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v5;
  return v7;
}
