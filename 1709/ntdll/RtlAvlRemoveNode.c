/*
 * XREFs of RtlAvlRemoveNode @ 0x180073280
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180072F20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800730E0 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x180074084 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v4; // r11
  unsigned __int64 v6; // rdx
  char v7; // cl
  _BYTE *v8; // rdi
  char v9; // bp
  unsigned __int64 v10; // rsi
  bool v11; // zf
  _QWORD *v12; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r10
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  unsigned __int64 v20; // rbx
  char v21; // r15
  _BOOL8 v22; // r10
  _BOOL8 v23; // r11
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rax
  char v27; // r8
  __int64 v28; // r8

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v25 = *(_QWORD **)(v2 + 8);
        v14 = 0;
        v13 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        if ( v25 )
        {
          v14 = 1;
          do
          {
            v6 = v13;
            v13 = (unsigned __int64)v25;
            v25 = (_QWORD *)v25[1];
          }
          while ( v25 );
        }
        v15 = *(_QWORD *)v13;
      }
      else
      {
        v12 = *(_QWORD **)v4;
        v13 = *(_QWORD *)(a2 + 8);
        v6 = v13;
        v14 = 1;
        if ( *(_QWORD *)v4 )
        {
          v14 = 0;
          do
          {
            v6 = v13;
            v13 = (unsigned __int64)v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
        v15 = *(_QWORD *)(v13 + 8);
      }
      *(_QWORD *)v13 = v2;
      *(_QWORD *)(v13 + 8) = v4;
      v16 = *(_QWORD *)(v2 + 16);
      if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v2 + 16) = v13 | v16 & 3;
      v17 = *(_QWORD *)(v4 + 16);
      if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v4 + 16) = v13 | v17 & 3;
      if ( (*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      *(_QWORD *)(v6 + 8LL * v14) = v15;
      if ( v15 )
      {
        if ( *(_QWORD *)(v15 + 16) != v13 )
          __fastfail(0x1Du);
        *(_QWORD *)(v15 + 16) = v6;
      }
      *(_QWORD *)(v13 + 16) = *(_QWORD *)(a2 + 16);
      v7 = v14 != 0 ? 3 : 1;
      v18 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v18 )
      {
        v19 = 0LL;
        if ( *(_QWORD *)(v18 + 8) == a2 )
          v19 = 8LL;
        if ( *(_QWORD *)(v19 + v18) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v19 + v18) = v13;
      }
      else
      {
        if ( *a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v13;
      }
      while ( 1 )
      {
LABEL_7:
        v8 = (_BYTE *)(v6 + 16);
        v9 = *(_BYTE *)(v6 + 16) & 3;
        if ( v9 == ((unsigned __int8)v7 ^ 2) )
        {
          *v8 = *(_BYTE *)(v6 + 16) & 0xFC;
          v10 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          if ( !v9 )
          {
            *(_BYTE *)(v6 + 16) &= 0xFCu;
            *(_BYTE *)(v6 + 16) |= v7;
            return;
          }
          v20 = *(_QWORD *)v6;
          v10 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 1 )
            v20 = *(_QWORD *)(v6 + 8);
          v21 = *(_BYTE *)(v20 + 16) & 3;
          if ( v21 == ((unsigned __int8)v7 ^ 2) )
          {
            v26 = RtlpTreeDoubleRotateNodes(a1, v6, v20, v7 == 1);
            *v8 &= 0xFCu;
            v6 = v26;
            v27 = *(_BYTE *)(v20 + 16) & 0xFC;
            *(_BYTE *)(v20 + 16) = v27;
            if ( v9 == (*(_BYTE *)(v26 + 16) & 3) )
            {
              *v8 &= 0xFCu;
              *v8 |= (v9 ^ 0xFE) & 3;
            }
            else if ( v9 == ((*(_BYTE *)(v26 + 16) ^ 0xFE) & 3) )
            {
              *(_BYTE *)(v20 + 16) = v9 | v27;
            }
            *(_BYTE *)(v26 + 16) &= 0xFCu;
          }
          else
          {
            if ( (*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
              __fastfail(0x1Du);
            v22 = v7 != 1;
            v23 = v7 == 1;
            if ( *(_QWORD *)(v6 + 8 * v23) != v20 )
              __fastfail(0x1Du);
            if ( v10 )
            {
              if ( *(_QWORD *)(v10 + 8) == v6 )
              {
                *(_QWORD *)(v10 + 8) = v20;
              }
              else
              {
                if ( *(_QWORD *)v10 != v6 )
                  __fastfail(0x1Du);
                *(_QWORD *)v10 = v20;
              }
            }
            else
            {
              if ( *a1 != v6 )
                __fastfail(0x1Du);
              *a1 = v20;
            }
            *(_QWORD *)(v20 + 16) &= 3uLL;
            *(_QWORD *)(v20 + 16) |= v10;
            v24 = *(_QWORD *)(v20 + 8 * v22);
            if ( v24 )
            {
              v28 = *(_QWORD *)(v24 + 16);
              if ( (v28 & 0xFFFFFFFFFFFFFFFCuLL) != v20 )
                __fastfail(0x1Du);
              *(_QWORD *)(v24 + 16) = v6 | v28 & 3;
            }
            *(_QWORD *)(v6 + 8 * v23) = v24;
            *(_QWORD *)(v20 + 8 * v22) = v6;
            *(_QWORD *)v8 &= 3uLL;
            *(_QWORD *)v8 |= v20;
            *(_BYTE *)(v20 + 16) &= 0xFCu;
            if ( !v21 )
            {
              *(_BYTE *)(v20 + 16) |= (v7 ^ 0xFE) & 3;
              return;
            }
            *v8 &= 0xFCu;
            v6 = v20;
          }
        }
        if ( !v10 )
          return;
        v11 = *(_QWORD *)(v10 + 8) == v6;
        v7 = 3;
        v6 = v10;
        if ( !v11 )
          v7 = 1;
      }
    }
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
  }
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v6;
  }
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) == a2 )
    {
      v7 = 3;
      *(_QWORD *)(v6 + 8) = v2;
    }
    else
    {
      if ( *(_QWORD *)v6 != a2 )
        __fastfail(0x1Du);
      v7 = 1;
      *(_QWORD *)v6 = v2;
    }
    goto LABEL_7;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v2;
}
