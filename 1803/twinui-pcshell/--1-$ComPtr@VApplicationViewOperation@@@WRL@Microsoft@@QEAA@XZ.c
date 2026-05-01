/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9D80
 * Callers:
 *     _CDesktopPositioner::ControlGainedForActivation_::_1_::dtor$3 @ 0x1800B2108 (_CDesktopPositioner--ControlGainedForActivation_--_1_--dtor$3.c)
 *     _CDesktopPositioner::_RestorePosition_::_1_::dtor$1 @ 0x1800B2258 (_CDesktopPositioner--_RestorePosition_--_1_--dtor$1.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$0 @ 0x18014DCDB (_FullScreenPositioner--PositionView_--_1_--dtor$0.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$1 @ 0x1801B3A01 (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewToHolographic_::_1_::dtor$3 @ 0x1801B3C3F (_HolographicPositioner--_TransitionViewToHolographic_--_1_--dtor$3.c)
 *     _HolographicPositioner::_UpdateViewStateDataForView_::_1_::dtor$1 @ 0x1801B3E43 (_HolographicPositioner--_UpdateViewStateDataForView_--_1_--dtor$1.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x1801BE75E (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1802BDA43 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1802BDD0E (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x1802BF60C (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionView_::_1_::dtor$6 @ 0x1802BFD14 (_CDesktopPositioner--PositionView_--_1_--dtor$6.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x1802BFFB1 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_ControlGainedHelper_::_1_::dtor$0 @ 0x1802C0C67 (_CDesktopPositioner--_ControlGainedHelper_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x1802C18D4 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x1802C1B08 (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
