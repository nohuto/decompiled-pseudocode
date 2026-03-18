/*
 * XREFs of ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1800975A0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180097670 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BACC4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CPrimitiveGroup::ShouldUseDrawListRenderPath(CPrimitiveGroup *this, struct CDrawingContext *a2)
{
  __int64 (__fastcall *v2)(CPrimitiveGroup *, __int64); // rax
  char v3; // al
  char v4; // bl

  v2 = *(__int64 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 48LL);
  if ( (char *)v2 == (char *)CPrimitiveGroup::IsOfType )
    v3 = CPrimitiveGroup::IsOfType(this, 107LL);
  else
    v3 = v2(this, 107LL);
  v4 = v3;
  wil::Feature<__WilFeatureTraits_Feature_ForceNRE>::ReportUsageToService();
  return v4 == 0;
}
