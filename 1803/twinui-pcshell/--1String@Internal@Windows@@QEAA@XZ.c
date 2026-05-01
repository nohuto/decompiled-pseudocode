/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F755C
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x180035190 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::_FindMatchingViewEventRegistration_::_1_::dtor$0 @ 0x1800B2A18 (_ViewEventDispatcher--_FindMatchingViewEventRegistration_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$13 @ 0x1800B2B8C (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$13.c)
 *     _ViewEventDispatcher::ViewPropertyChanged_::_1_::dtor$6 @ 0x1800B2CD0 (_ViewEventDispatcher--ViewPropertyChanged_--_1_--dtor$6.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$223 @ 0x1800B30B1 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$223.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x1800B3770 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$6 @ 0x180197184 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$6.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$7 @ 0x180197190 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$7.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$9 @ 0x1801D39B6 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$9.c)
 *     _lambda_936e23cfbd06b3431a4bf0a072693b63_::operator() @ 0x18030B2C8 (_lambda_936e23cfbd06b3431a4bf0a072693b63_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
