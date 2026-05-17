/*
 * XREFs of RtlAvlInsertNodeEx @ 0x180073ED0
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x180073620 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800738C0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180073C20 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x180074084 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  _BYTE *v6; // rcx
  char v7; // al
  char v8; // di
  _BOOL8 v9; // rcx
  _BOOL8 v10; // r9
  _BOOL8 v11; // r11
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rcx

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
    v6 = (_BYTE *)(a2 + 16);
    v7 = ~(-2 * a3) & 3;
    v8 = *(_BYTE *)(a2 + 16) & 3;
    if ( v8 )
      break;
    *v6 &= 0xFCu;
    v4 = a2;
    *v6 |= v7;
    a2 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return;
    a3 = *(_QWORD *)a2 != v4;
  }
  if ( v8 != v7 )
    goto LABEL_15;
  if ( (*(_BYTE *)(v4 + 16) & 3) == v8 )
  {
    v9 = !a3;
    if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    v10 = a3;
    v11 = v9;
    if ( *(_QWORD *)(a2 + 8LL * a3) != v4 )
      __fastfail(0x1Du);
    v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 8) == a2 )
      {
        *(_QWORD *)(v12 + 8) = v4;
      }
      else
      {
        if ( *(_QWORD *)v12 != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)v12 = v4;
      }
    }
    else
    {
      if ( *a1 != a2 )
        __fastfail(0x1Du);
      *a1 = v4;
    }
    *(_QWORD *)(v4 + 16) &= 3uLL;
    *(_QWORD *)(v4 + 16) |= v12;
    v13 = *(_QWORD *)(v4 + 8 * v9);
    if ( v13 )
    {
      v17 = *(_QWORD *)(v13 + 16);
      if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
        __fastfail(0x1Du);
      *(_QWORD *)(v13 + 16) = a2 | v17 & 3;
    }
    *(_QWORD *)(a2 + 8 * v10) = v13;
    *(_QWORD *)(v4 + 8 * v11) = a2;
    *(_QWORD *)(a2 + 16) &= 3uLL;
    *(_QWORD *)(a2 + 16) |= v4;
    *(_BYTE *)(v4 + 16) &= 0xFCu;
LABEL_15:
    *(_BYTE *)(a2 + 16) &= 0xFCu;
    return;
  }
  v14 = RtlpTreeDoubleRotateNodes(a1, a2, v4, a3);
  *(_BYTE *)(v15 + 16) &= 0xFCu;
  v16 = *(_BYTE *)(v4 + 16) & 0xFC;
  *(_BYTE *)(v4 + 16) = v16;
  if ( v8 == (*(_BYTE *)(v14 + 16) & 3) )
  {
    *(_BYTE *)(v15 + 16) &= 0xFCu;
    *(_BYTE *)(v15 + 16) |= (v8 ^ 0xFE) & 3;
  }
  else if ( v8 == ((*(_BYTE *)(v14 + 16) ^ 0xFE) & 3) )
  {
    *(_BYTE *)(v4 + 16) = v8 | v16;
  }
  *(_BYTE *)(v14 + 16) &= 0xFCu;
}
