/*
 * XREFs of RtlAvlRemoveNode @ 0x1800741C0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180073E80 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     sub_180074F3C @ 0x180074F3C (sub_180074F3C.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v4; // r11
  unsigned __int64 v6; // rdx
  char v7; // cl
  _QWORD *v8; // rax
  unsigned __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  _BOOL8 v15; // r10
  _BYTE *v16; // rdi
  char v17; // bp
  unsigned __int64 v18; // rsi
  bool v19; // zf
  unsigned __int64 v20; // rbx
  char v21; // r15
  _BOOL8 v22; // r10
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // r8
  __int64 v27; // r8

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v24 = *(_QWORD **)(v2 + 8);
        v10 = 0;
        v9 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        if ( v24 )
        {
          v10 = 1;
          do
          {
            v6 = v9;
            v9 = (unsigned __int64)v24;
            v24 = (_QWORD *)v24[1];
          }
          while ( v24 );
        }
        v11 = *(_QWORD *)v9;
      }
      else
      {
        v8 = *(_QWORD **)v4;
        v9 = *(_QWORD *)(a2 + 8);
        v6 = v9;
        v10 = 1;
        if ( *(_QWORD *)v4 )
        {
          v10 = 0;
          do
          {
            v6 = v9;
            v9 = (unsigned __int64)v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
        v11 = *(_QWORD *)(v9 + 8);
      }
      *(_QWORD *)v9 = v2;
      *(_QWORD *)(v9 + 8) = v4;
      v12 = *(_QWORD *)(v2 + 16);
      if ( (v12 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v2 + 16) = v9 | v12 & 3;
      v13 = *(_QWORD *)(v4 + 16);
      if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v4 + 16) = v9 | v13 & 3;
      if ( (*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      *(_QWORD *)(v6 + 8LL * v10) = v11;
      if ( v11 )
      {
        if ( *(_QWORD *)(v11 + 16) != v9 )
          __fastfail(0x1Du);
        *(_QWORD *)(v11 + 16) = v6;
      }
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(a2 + 16);
      v7 = v10 != 0 ? 3 : 1;
      v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8) == a2;
        if ( *(_QWORD *)(v14 + 8 * v15) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v14 + 8 * v15) = v9;
      }
      else
      {
        if ( *a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v9;
      }
      while ( 1 )
      {
LABEL_20:
        v16 = (_BYTE *)(v6 + 16);
        v17 = *(_BYTE *)(v6 + 16) & 3;
        if ( v17 == ((unsigned __int8)v7 ^ 2) )
        {
          *v16 = *(_BYTE *)(v6 + 16) & 0xFC;
          v18 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          if ( !v17 )
          {
            *(_BYTE *)(v6 + 16) &= 0xFCu;
            *(_BYTE *)(v6 + 16) |= v7;
            return;
          }
          v20 = *(_QWORD *)v6;
          v18 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 1 )
            v20 = *(_QWORD *)(v6 + 8);
          v21 = *(_BYTE *)(v20 + 16) & 3;
          if ( v21 == ((unsigned __int8)v7 ^ 2) )
          {
            v25 = sub_180074F3C(a1, v6, v20, v7 == 1);
            *v16 &= 0xFCu;
            v6 = v25;
            *(_BYTE *)(v20 + 16) &= 0xFCu;
            v26 = *(_BYTE *)(v25 + 16);
            if ( v17 == (v26 & 3) )
            {
              *v16 &= 0xFCu;
              *v16 |= (v17 ^ 0xFE) & 3;
            }
            else if ( v17 == ((v26 ^ 0xFE) & 3) )
            {
              *(_BYTE *)(v20 + 16) ^= (v17 ^ *(_BYTE *)(v20 + 16)) & 3;
            }
            *(_BYTE *)(v25 + 16) &= 0xFCu;
          }
          else
          {
            if ( (*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
              __fastfail(0x1Du);
            v22 = v7 == 1;
            if ( *(_QWORD *)(v6 + 8 * v22) != v20 )
              __fastfail(0x1Du);
            if ( v18 )
            {
              if ( *(_QWORD *)(v18 + 8) == v6 )
              {
                *(_QWORD *)(v18 + 8) = v20;
              }
              else
              {
                if ( *(_QWORD *)v18 != v6 )
                  __fastfail(0x1Du);
                *(_QWORD *)v18 = v20;
              }
            }
            else
            {
              if ( *a1 != v6 )
                __fastfail(0x1Du);
              *a1 = v20;
            }
            *(_QWORD *)(v20 + 16) &= 3uLL;
            *(_QWORD *)(v20 + 16) |= v18;
            v23 = *(_QWORD *)(v20 + 8LL * (v7 != 1));
            if ( v23 )
            {
              v27 = *(_QWORD *)(v23 + 16);
              if ( (v27 & 0xFFFFFFFFFFFFFFFCuLL) != v20 )
                __fastfail(0x1Du);
              *(_QWORD *)(v23 + 16) = v6 | v27 & 3;
            }
            *(_QWORD *)(v6 + 8 * v22) = v23;
            *(_QWORD *)(v20 + 8LL * (v7 != 1)) = v6;
            *(_QWORD *)v16 &= 3uLL;
            *(_QWORD *)v16 |= v20;
            *(_BYTE *)(v20 + 16) &= 0xFCu;
            if ( !v21 )
            {
              *(_BYTE *)(v20 + 16) |= (v7 ^ 0xFE) & 3;
              return;
            }
            *v16 &= 0xFCu;
            v6 = v20;
          }
        }
        if ( !v18 )
          return;
        v19 = *(_QWORD *)(v18 + 8) == v6;
        v7 = 3;
        v6 = v18;
        if ( !v19 )
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
    goto LABEL_20;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v2;
}
