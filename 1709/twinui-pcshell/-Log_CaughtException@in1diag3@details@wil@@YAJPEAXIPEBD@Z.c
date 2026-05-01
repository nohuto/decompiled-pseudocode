/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180073C98
 * Callers:
 *     _CSplashScreen::OnViewAdded_::_1_::catch$3 @ 0x1801E94B4 (_CSplashScreen--OnViewAdded_--_1_--catch$3.c)
 *     _CSplashScreen::OnViewRemoved_::_1_::catch$31 @ 0x1801E94F1 (_CSplashScreen--OnViewRemoved_--_1_--catch$31.c)
 *     __lambda_188a207fec6f48f56ea356ceda17ab16_::operator()_::_1_::catch$2 @ 0x1801EA109 (__lambda_188a207fec6f48f56ea356ceda17ab16_--operator()_--_1_--catch$2.c)
 *     _PenWorkspace::Discover::ObjectArray::AddObject_::_1_::catch$3 @ 0x1801EC438 (_PenWorkspace--Discover--ObjectArray--AddObject_--_1_--catch$3.c)
 *     _PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged_::_1_::catch$50 @ 0x1801EC52A (_PenWorkspace--Discover--RecentAppsCache--OnForegroundProcessChanged_--_1_--catch$50.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::catch$28 @ 0x1801EC573 (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--catch$28.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::catch$31 @ 0x1801EC5B3 (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--catch$31.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::catch$84 @ 0x1801EC698 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--catch$84.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::catch$63 @ 0x1801ECF30 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--catch$63.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$25 @ 0x1801EE2FB (_ViewEventDispatcher--ViewNavigationRequested_--_1_--catch$25.c)
 *     _ViewEventDispatcher::OverrideNavigationLevelForView_::_1_::catch$5 @ 0x1801EE9D8 (_ViewEventDispatcher--OverrideNavigationLevelForView_--_1_--catch$5.c)
 *     __lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()_::_1_::catch$74 @ 0x1801EF2D0 (__lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator()_--_1_--catch$74.c)
 *     _XamlTaskbarManager::CreateInitialTaskbars_::_1_::catch$16 @ 0x1801F0069 (_XamlTaskbarManager--CreateInitialTaskbars_--_1_--catch$16.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::catch$11 @ 0x1801F5C4C (_AppViewDataSourceAdapter--InitializeItems_--_1_--catch$11.c)
 *     _AppViewSwitchItemZOrderSort::SortItems_::_1_::catch$127 @ 0x1801F5FA5 (_AppViewSwitchItemZOrderSort--SortItems_--_1_--catch$127.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::CheckRequest_::_1_::catch$1 @ 0x1801F6A8A (_KeyboardHosting--TabTipAdapterPolicy--CheckRequest_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800276EC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
