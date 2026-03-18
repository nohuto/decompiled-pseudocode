/*
 * XREFs of ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x180027DC0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18007820C (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007AF90 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B53B0 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CPrimitiveGroup::ShouldUseDrawListRenderPath(CPrimitiveGroup *this, struct CDrawingContext *a2)
{
  __int64 (__fastcall *v2)(CPrimitiveGroup *, __int64); // rax
  char v3; // al
  bool v4; // bl
  int v6; // [rsp+60h] [rbp+10h] BYREF
  __int16 v7; // [rsp+64h] [rbp+14h]
  int v8; // [rsp+70h] [rbp+20h] BYREF
  __int16 v9; // [rsp+74h] [rbp+24h]

  v2 = *(__int64 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 48LL);
  if ( (char *)v2 == (char *)CPrimitiveGroupLayerClip::IsOfType )
    v3 = CPrimitiveGroupLayerClip::IsOfType(this, 99LL);
  else
    v3 = v2(this, 99LL);
  v4 = v3 == 0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ForceNRE>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ForceNRE>::GetCachedFeatureEnabledState();
  LOBYTE(v7) = 0;
  v8 = 0;
  v9 = v7;
  v6 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_ForceNRE>::GetFeaturePropertyCache'::`2'::data,
                       12756137LL,
                       6LL)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xC2A4A9u,
      (const struct FEATURE_LOGGED_TRAITS *)&v8,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v6,
      0LL,
      0,
      1uLL);
  }
  return v4;
}
