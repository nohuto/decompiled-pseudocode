/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x1800F60A4
 * Callers:
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$5 @ 0x1800B21BC (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$5.c)
 *     _CortanaDesktopExperienceView::PositionCortanaWindow_::_1_::dtor$13 @ 0x1800B4E1C (_CortanaDesktopExperienceView--PositionCortanaWindow_--_1_--dtor$13.c)
 *     _CStartExperienceManager::PlayTransitionToCortana_::_1_::dtor$9 @ 0x1800B581F (_CStartExperienceManager--PlayTransitionToCortana_--_1_--dtor$9.c)
 *     _wil::details::RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64__::_1_::dtor$0 @ 0x1801455A0 (_wil--details--RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64__--_1_--dt.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
