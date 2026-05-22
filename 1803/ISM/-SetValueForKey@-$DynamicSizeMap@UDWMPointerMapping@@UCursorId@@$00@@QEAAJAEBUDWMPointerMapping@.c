/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@UDWMPointerMapping@@UCursorId@@$00@@QEAAJAEBUDWMPointerMapping@@AEBUCursorId@@@Z @ 0x18008A9F8
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18008A2A0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<DWMPointerMapping,CursorId,1>::SetValueForKey(__int64 a1, int *a2, _OWORD *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // r11d
  unsigned int v6; // ebp
  char v7; // r10
  unsigned int v11; // ecx
  __int64 v12; // rdx
  _DWORD *v13; // r9
  _DWORD *v14; // rsi
  unsigned int v15; // edi
  void *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
  if ( *a2 == v5 && a2[1] == *(_DWORD *)(a1 + 20) )
  {
    v4 = -2147024809;
LABEL_4:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return v4;
  }
  v11 = *(_DWORD *)(a1 + 8);
  v12 = 0LL;
  if ( v11 )
  {
    v13 = *(_DWORD **)a1;
    do
    {
      if ( v13[6 * v12] == v3 && v13[6 * v12 + 1] == a2[1] )
      {
        *(_OWORD *)&v13[6 * v12 + 2] = *a3;
        return v4;
      }
      if ( !v7 && v13[6 * v12] == v5 && v13[6 * v12 + 1] == *(_DWORD *)(a1 + 20) )
      {
        v6 = v12;
        v7 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < v11 );
    if ( v7 )
      goto LABEL_26;
  }
  if ( *(_DWORD *)(a1 + 12) != v11 )
    return (unsigned int)-2147467259;
  v14 = *(_DWORD **)a1;
  v15 = 2 * v11;
  v6 = v11;
  v16 = operator new[](saturated_mul(2 * v11, 0x18uLL));
  *(_QWORD *)a1 = v16;
  if ( !v16 )
  {
    v4 = -2147024882;
    goto LABEL_4;
  }
  memcpy_0(v16, v14, 24LL * *(unsigned int *)(a1 + 8));
  if ( *(_DWORD *)(a1 + 8) < v15 )
  {
    v17 = 24LL * *(unsigned int *)(a1 + 8);
    v18 = v15 - *(_DWORD *)(a1 + 8);
    do
    {
      *(_QWORD *)(v17 + *(_QWORD *)a1) = *(_QWORD *)(a1 + 16);
      v17 += 24LL;
      --v18;
    }
    while ( v18 );
  }
  *(_DWORD *)(a1 + 8) = v15;
  operator delete(v14);
LABEL_26:
  v19 = 3LL * v6;
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v19) = *(_QWORD *)a2;
  *(_OWORD *)(*(_QWORD *)a1 + 8 * v19 + 8) = *a3;
  ++*(_DWORD *)(a1 + 12);
  return 0;
}
