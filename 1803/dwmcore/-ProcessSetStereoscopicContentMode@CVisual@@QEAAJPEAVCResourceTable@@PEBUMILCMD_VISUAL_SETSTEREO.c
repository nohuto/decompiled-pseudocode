/*
 * XREFs of ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801A86AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18014AB2C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 */

__int64 __fastcall CVisual::ProcessSetStereoscopicContentMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE *a3)
{
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(
    (__int64)this,
    (unsigned int)a2,
    (__int64)a3);
  return 0LL;
}
