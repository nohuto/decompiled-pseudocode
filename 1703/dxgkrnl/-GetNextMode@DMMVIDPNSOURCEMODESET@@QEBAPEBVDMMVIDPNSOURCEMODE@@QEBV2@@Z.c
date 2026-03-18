/*
 * XREFs of ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0045848
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01D3598 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DD9AC (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01DF248 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetNextMode(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODE *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rdx
  const struct DMMVIDPNSOURCEMODE *result; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNSOURCEMODESET *)((char *)v7 - 8);
  if ( v7 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
