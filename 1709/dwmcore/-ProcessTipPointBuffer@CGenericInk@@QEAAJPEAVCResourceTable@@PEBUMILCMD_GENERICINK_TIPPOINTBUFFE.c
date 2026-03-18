/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801672AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800781D0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18013AB30 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_TIPPOINTBUFFER *a3)
{
  struct CResourceTable *v4; // [rsp+48h] [rbp+18h] BYREF
  const struct MILCMD_GENERICINK_TIPPOINTBUFFER *v5; // [rsp+50h] [rbp+20h]

  v5 = a3;
  v4 = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetCachedFeatureEnabledState(
      (__int64)this,
      (unsigned int)a2,
      (__int64)a3);
  BYTE4(v5) = 0;
  WORD2(v4) = WORD2(v5);
  LODWORD(v5) = 0;
  LODWORD(v4) = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data,
    11148202LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4);
  return 0LL;
}
