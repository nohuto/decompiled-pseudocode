/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0005A08
 * Callers:
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024DD0 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0043BC4 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C00BDE30 (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00BF000 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C0007ED4 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 */

char __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 != *(_DWORD *)(a2 + 72) )
    return 0;
  if ( v2 == 1 )
    return operator==(a1 + 76, a2 + 76);
  if ( v2 != 2 )
  {
    if ( v2 > 2 && v2 <= 4 )
      return operator==(a1 + 76, a2 + 76);
    if ( (unsigned int)(v2 - 1) <= 3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v4);
    }
    return 0;
  }
  return *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76);
}
