/*
 * XREFs of ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00365A0
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01EEC78 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F63D4 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01F8330 (BmlGetRecommendedContentSizeForPath.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C01F8A48 (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 * Callees:
 *     <none>
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetNextMode(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODE *const a2)
{
  __int64 v4; // rax
  DMMVIDPNSOURCEMODESET *v5; // rdx
  const struct DMMVIDPNSOURCEMODE *result; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNSOURCEMODESET *)((char *)v5 - 8);
  if ( v5 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
