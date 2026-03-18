/*
 * XREFs of vtfdQueryFontData @ 0x1C0238470
 * Callers:
 *     vtfdQueryFontDataTE @ 0x1C0236CB0 (vtfdQueryFontDataTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     bCreatePath @ 0x1C0237C24 (bCreatePath.c)
 *     bReconnectVtfdFont @ 0x1C0238064 (bReconnectVtfdFont.c)
 *     cjVtfdDeviceMetrics @ 0x1C02380D8 (cjVtfdDeviceMetrics.c)
 *     vFill_GlyphData @ 0x1C02382AC (vFill_GlyphData.c)
 *     vtfdOpenFontContext @ 0x1C0238ACC (vtfdOpenFontContext.c)
 */

__int64 __fastcall vtfdQueryFontData(__int64 a1, int a2, unsigned int a3, char *a4, PATHOBJ *a5)
{
  __int64 v6; // rcx
  __int64 v11; // rbx
  unsigned __int8 **v12; // rax
  unsigned __int8 *v13; // rsi
  unsigned __int8 *v14; // r12
  int v15; // edi
  int v16; // edi
  char *v17; // r14
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // [rsp+30h] [rbp-88h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v6 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont(v6) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = vtfdOpenFontContext(a1);
  v11 = *(_QWORD *)(a1 + 56);
  if ( !v11 )
    return 0xFFFFFFFFLL;
  v12 = *(unsigned __int8 ***)(v11 + 112);
  v13 = *v12;
  v14 = &(*v12)[*(unsigned int *)(v11 + 124)];
  v15 = a2 - 2;
  if ( !v15 )
  {
    if ( a3 <= v13[96] - (unsigned int)v13[95] )
      v16 = a3;
    else
      v16 = v13[97];
    v17 = &v22;
    if ( a4 )
      v17 = a4;
    vFill_GlyphData(v11, (__int64)v17, v16);
    *((_DWORD *)v17 + 2) = a3;
    if ( !a5 )
      return 0LL;
    v18 = v16 + 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 48LL) & 0x1000) != 0 )
    {
      v19 = (unsigned int)(2 * v16);
      v20 = (unsigned int)(2 * v18);
    }
    else
    {
      v19 = (unsigned int)(4 * v16);
      v20 = (unsigned int)(4 * v18);
    }
    v21 = v13[(unsigned int)v20 + 117] | (v13[v20 + 118] << 8);
    if ( (unsigned int)v21 >= *(unsigned __int16 *)&v13[v19 + 117]
      && (unsigned int)(v21 + *(_DWORD *)(v11 + 124)) <= *(_DWORD *)(*(_QWORD *)(v11 + 112) + 12LL)
      && (unsigned int)bCreatePath(
                         (char *)&v14[*(unsigned __int16 *)&v13[v19 + 117]],
                         (char *)&v14[v21],
                         v11,
                         a5,
                         *((_DWORD *)v17 + 5)) )
    {
      return 0LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( v15 != 1 )
    return 0xFFFFFFFFLL;
  if ( a5 )
    return cjVtfdDeviceMetrics(v11, (__int64)a5);
  else
    return 124LL;
}
