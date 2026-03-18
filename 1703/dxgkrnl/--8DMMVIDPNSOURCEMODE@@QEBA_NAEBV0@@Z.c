/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C00074CC
 * Callers:
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0021268 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00441CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0091900 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00DF4EC (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rax

  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 != *(_DWORD *)(a2 + 72) )
    return 0;
  if ( v4 == 1 )
    return operator==((_DWORD *)(a1 + 76), (_DWORD *)(a2 + 76));
  if ( v4 != 2 )
  {
    if ( v4 > 2 && v4 <= 4 )
      return operator==((_DWORD *)(a1 + 76), (_DWORD *)(a2 + 76));
    if ( (unsigned int)(v4 - 1) <= 3 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2, a1, a4);
      WdLogEvent5_WdAssertion(v6);
    }
    return 0;
  }
  return *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76);
}
