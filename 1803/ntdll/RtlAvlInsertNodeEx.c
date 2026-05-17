/*
 * XREFs of RtlAvlInsertNodeEx @ 0x18006AFD0
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006A010 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006A9D0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     sub_18006B178 @ 0x18006B178 (sub_18006B178.c)
 */

void __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  _BYTE *v5; // r9
  char v6; // al
  char v7; // di
  _BOOL8 v8; // r11
  _BOOL8 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // r9
  __int64 v15; // rcx

  *a4 = 0LL;
  v4 = (unsigned __int64)a4;
  a4[1] = 0LL;
  a4[2] = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v5 = (_BYTE *)(a2 + 16);
    v6 = ~(-2 * a3) & 3;
    v7 = *(_BYTE *)(a2 + 16) & 3;
    if ( v7 )
      break;
    v4 = a2;
    *v5 = v6 | *(_BYTE *)(a2 + 16) & 0xFC;
    a2 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return;
    a3 = *(_QWORD *)a2 != v4;
  }
  if ( v7 != v6 )
    goto LABEL_15;
  if ( (*(_BYTE *)(v4 + 16) & 3) == v7 )
  {
    if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    v8 = !a3;
    v9 = a3;
    if ( *(_QWORD *)(a2 + 8LL * a3) != v4 )
      __fastfail(0x1Du);
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 8) == a2 )
      {
        *(_QWORD *)(v10 + 8) = v4;
      }
      else
      {
        if ( *(_QWORD *)v10 != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)v10 = v4;
      }
    }
    else
    {
      if ( *a1 != a2 )
        __fastfail(0x1Du);
      *a1 = v4;
    }
    *(_QWORD *)(v4 + 16) &= 3uLL;
    *(_QWORD *)(v4 + 16) |= v10;
    v11 = *(_QWORD *)(v4 + 8 * v8);
    if ( v11 )
    {
      v15 = *(_QWORD *)(v11 + 16);
      if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
        __fastfail(0x1Du);
      *(_QWORD *)(v11 + 16) = a2 | v15 & 3;
    }
    *(_QWORD *)(a2 + 8 * v9) = v11;
    *(_QWORD *)(v4 + 8 * v8) = a2;
    *(_QWORD *)(a2 + 16) &= 3uLL;
    *(_QWORD *)(a2 + 16) |= v4;
    *(_BYTE *)(v4 + 16) &= 0xFCu;
LABEL_15:
    *(_BYTE *)(a2 + 16) &= 0xFCu;
    return;
  }
  v12 = sub_18006B178(a1, a2, v4, a3);
  *(_BYTE *)(v13 + 16) &= 0xFCu;
  v14 = *(_BYTE *)(v4 + 16) & 0xFC;
  *(_BYTE *)(v4 + 16) = v14;
  if ( v7 == (*(_BYTE *)(v12 + 16) & 3) )
  {
    *(_BYTE *)(v13 + 16) &= 0xFCu;
    *(_BYTE *)(v13 + 16) |= (v7 ^ 0xFE) & 3;
  }
  else if ( v7 == ((*(_BYTE *)(v12 + 16) ^ 0xFE) & 3) )
  {
    *(_BYTE *)(v4 + 16) = v7 | v14;
  }
  *(_BYTE *)(v12 + 16) &= 0xFCu;
}
