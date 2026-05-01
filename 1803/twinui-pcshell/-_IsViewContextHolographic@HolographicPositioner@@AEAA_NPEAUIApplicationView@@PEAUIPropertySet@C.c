/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020958
 * Callers:
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1800213D0 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 * Callees:
 *     ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18001BA50 (-GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180020848 (-_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020A04 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020BD0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@@Z @ 0x1801AB154 (--$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4Hol.c)
 */

char __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, CWinRTApplicationView **),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 (__fastcall **v6)(struct IApplicationView *, GUID *, CWinRTApplicationView **); // rax
  __int64 (__fastcall *v7)(CWinRTApplicationView *, enum FRAMEWORK_VIEW_TYPE *); // rax
  int FrameworkViewType; // eax
  int IsPropertySetContextHolographic; // eax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  if ( !HolographicPositioner::_IsViewTypeHolographicCompatible(this, a2) )
    return 0;
  v6 = *a2;
  v12 = 6;
  v7 = (__int64 (__fastcall *)(CWinRTApplicationView *, enum FRAMEWORK_VIEW_TYPE *))v6[50];
  if ( v7 == CWinRTApplicationView::GetFrameworkViewType )
    FrameworkViewType = CWinRTApplicationView::GetFrameworkViewType(
                          (CWinRTApplicationView *)a2,
                          (enum FRAMEWORK_VIEW_TYPE *)&v12);
  else
    FrameworkViewType = v7((CWinRTApplicationView *)a2, (enum FRAMEWORK_VIEW_TYPE *)&v12);
  if ( FrameworkViewType >= 0 && (unsigned int)(v12 - 1) <= 3 )
  {
    v11[0] = 1;
  }
  else
  {
    IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(this, a3);
    if ( IsPropertySetContextHolographic == 2 )
    {
      v11[0] = 0;
    }
    else
    {
      if ( IsPropertySetContextHolographic == 1 || !HolographicPositioner::_IsPropertySetHeuristicHolographic(this, a3) )
        return 0;
      v11[0] = 2;
    }
  }
  HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason>(v11);
  return 1;
}
