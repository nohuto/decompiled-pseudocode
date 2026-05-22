/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800817FC
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18007D530 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18007DAF0 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned int v7; // edi
  unsigned int v8; // r15d
  unsigned int v9; // r10d
  __int64 v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r11
  _QWORD *v15; // rsi
  unsigned int v16; // edi
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx

  v4 = a1 + 16;
  v7 = 0;
  v8 = 0;
  if ( operator==(a2, a1 + 16) )
  {
    v7 = -2147024809;
LABEL_3:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return v7;
  }
  v9 = *(_DWORD *)(a1 + 8);
  v10 = 0LL;
  if ( v9 )
  {
    v11 = *(_QWORD **)a1;
    do
    {
      if ( operator==((__int64)&v11[6 * v10], a2) )
      {
        v11[6 * v13 + 5] = *a3;
        return v7;
      }
      if ( !v14 && operator==(v12, v4) )
      {
        v8 = v13;
        v14 = 1;
      }
      v10 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v10 < v9 );
    if ( v14 )
      goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 12) != v9 )
    return (unsigned int)-2147467259;
  v15 = *(_QWORD **)a1;
  v16 = 2 * v9;
  v8 = v9;
  v17 = operator new[](saturated_mul(2 * v9, 0x30uLL));
  *(_QWORD *)a1 = v17;
  if ( !v17 )
  {
    v7 = -2147024882;
    goto LABEL_3;
  }
  memcpy_0(v17, v15, 48LL * *(unsigned int *)(a1 + 8));
  if ( *(_DWORD *)(a1 + 8) < v16 )
  {
    v18 = 6LL * *(unsigned int *)(a1 + 8);
    v19 = v16 - *(_DWORD *)(a1 + 8);
    do
    {
      v20 = *(_QWORD **)a1;
      *(_OWORD *)&v20[v18] = *(_OWORD *)v4;
      v18 += 6LL;
      *(_OWORD *)&v20[v18 - 4] = *(_OWORD *)(v4 + 16);
      v20[v18 - 2] = *(_QWORD *)(v4 + 32);
      --v19;
    }
    while ( v19 );
  }
  *(_DWORD *)(a1 + 8) = v16;
  operator delete(v15);
LABEL_23:
  v21 = *(_QWORD **)a1;
  v22 = 6LL * v8;
  *(_OWORD *)&v21[v22] = *(_OWORD *)a2;
  *(_OWORD *)&v21[v22 + 2] = *(_OWORD *)(a2 + 16);
  v21[v22 + 4] = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v22 + 40) = *a3;
  ++*(_DWORD *)(a1 + 12);
  return 0;
}
