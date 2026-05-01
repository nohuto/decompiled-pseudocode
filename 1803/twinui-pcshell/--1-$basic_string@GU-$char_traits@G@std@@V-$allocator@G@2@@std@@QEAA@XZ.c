/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18008C870
 * Callers:
 *     __dynamic_initializer_for__c_retailDemoHotspot___::_1_::dtor$0 @ 0x180001255 (__dynamic_initializer_for__c_retailDemoHotspot___--_1_--dtor$0.c)
 *     __dynamic_initializer_for__c_defaultAppIdAllowListRegex___::_1_::dtor$0 @ 0x180002415 (__dynamic_initializer_for__c_defaultAppIdAllowListRegex___--_1_--dtor$0.c)
 *     __dynamic_initializer_for__c_defaultAppIdAllowListRegex___::_1_::dtor$1 @ 0x180002421 (__dynamic_initializer_for__c_defaultAppIdAllowListRegex___--_1_--dtor$1.c)
 *     __dynamic_initializer_for__c_defaultAppIdAllowListRegex___::_1_::dtor$2 @ 0x18000242D (__dynamic_initializer_for__c_defaultAppIdAllowListRegex___--_1_--dtor$2.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle_::_1_::dtor$0 @ 0x1800B1800 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--GetAppViewTitle_--_.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange_::_1_::dtor$0 @ 0x1800B1830 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--TryUpdateAndReportT.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$1 @ 0x1800B1984 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged_::_1_::dtor$0 @ 0x1800B4D2C (_KeyboardHosting--TabTipAdapter--OnEditControlFocusChanged_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_2_::_dynamic_atexit_destructor_for__overrideAppId__ @ 0x1800B6720 (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_2_--_dynamic_atexit_destructor_for_.c)
 *     _CJumpViewExperienceManager::EnsureActivationArgs_::_1_::dtor$0 @ 0x1801767B5 (_CJumpViewExperienceManager--EnsureActivationArgs_--_1_--dtor$0.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023CC54 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::CreateModalExperienceAsync_::_1_::dtor$0 @ 0x18023CCFA (_TouchKeyboardExperienceManager--CreateModalExperienceAsync_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::CreateModalExperienceAsync_::_1_::dtor$1 @ 0x18023CD06 (_TouchKeyboardExperienceManager--CreateModalExperienceAsync_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$1 @ 0x18023F94B (_TouchKeyboardExperienceManager--OnInputAppChangeApproved_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$0 @ 0x180248DC4 (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$0 @ 0x18024ACB7 (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$1 @ 0x18024ACC3 (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::wstring::~wstring(void *a1)
{
  std::wstring::_Tidy_deallocate(a1);
}
