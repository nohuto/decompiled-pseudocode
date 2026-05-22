/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x1800621A8
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1800618E0 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::SetValueForKey(
        char **a1,
        int *a2,
        _OWORD *a3)
{
  int v3; // r11d
  int v5; // r10d
  char v6; // r8
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned int v11; // edx
  unsigned int v12; // ecx
  char *v13; // rbp
  __int64 v14; // rax
  char *v15; // rcx
  char *v16; // rbp
  unsigned int v17; // esi
  char *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx

  v3 = *a2;
  v5 = *((_DWORD *)a1 + 4);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a2 == v5 )
  {
    v7 = -2147024809;
LABEL_3:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return v7;
  }
  v11 = *((_DWORD *)a1 + 2);
  v12 = 0;
  if ( v11 )
  {
    v13 = *a1;
    do
    {
      v14 = 152LL * v12;
      if ( *(_DWORD *)&v13[v14] == v3 )
      {
        v15 = &v13[152 * v12];
        *(_OWORD *)(v15 + 8) = *a3;
        *(_OWORD *)(v15 + 24) = a3[1];
        *(_OWORD *)(v15 + 40) = a3[2];
        *(_OWORD *)(v15 + 56) = a3[3];
        *(_OWORD *)(v15 + 72) = a3[4];
        *(_OWORD *)(v15 + 88) = a3[5];
        *(_OWORD *)(v15 + 104) = a3[6];
        *(_OWORD *)(v15 + 120) = a3[7];
        *(_OWORD *)(v15 + 136) = a3[8];
        return v7;
      }
      if ( !v6 && *(_DWORD *)&v13[v14] == v5 )
      {
        v8 = v12;
        v6 = 1;
      }
      ++v12;
    }
    while ( v12 < v11 );
    if ( v6 )
      goto LABEL_23;
  }
  if ( *((_DWORD *)a1 + 3) != v11 )
    return (unsigned int)-2147467259;
  v16 = *a1;
  v17 = 2 * v11;
  v8 = v11;
  v18 = (char *)operator new[](saturated_mul(2 * v11, 0x98uLL));
  *a1 = v18;
  if ( !v18 )
  {
    v7 = -2147024882;
    goto LABEL_3;
  }
  memcpy_0(v18, v16, 152LL * *((unsigned int *)a1 + 2));
  if ( *((_DWORD *)a1 + 2) < v17 )
  {
    v19 = 152LL * *((unsigned int *)a1 + 2);
    v20 = v17 - *((_DWORD *)a1 + 2);
    do
    {
      *(_DWORD *)&(*a1)[v19] = *((_DWORD *)a1 + 4);
      v19 += 152LL;
      --v20;
    }
    while ( v20 );
  }
  *((_DWORD *)a1 + 2) = v17;
  operator delete(v16);
LABEL_23:
  v21 = 152LL * v8;
  *(_DWORD *)&(*a1)[v21] = *a2;
  v22 = (__int64)&(*a1)[v21];
  *(_OWORD *)(v22 + 8) = *a3;
  *(_OWORD *)(v22 + 24) = a3[1];
  *(_OWORD *)(v22 + 40) = a3[2];
  *(_OWORD *)(v22 + 56) = a3[3];
  *(_OWORD *)(v22 + 72) = a3[4];
  *(_OWORD *)(v22 + 88) = a3[5];
  *(_OWORD *)(v22 + 104) = a3[6];
  *(_OWORD *)(v22 + 120) = a3[7];
  *(_OWORD *)(v22 + 136) = a3[8];
  ++*((_DWORD *)a1 + 3);
  return 0;
}
