/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@WRL@Microsoft@@UEAA@XZ @ 0x1801175C4
 * Callers:
 *     _PeoplePaneViewManager::_PeoplePaneViewManager_::_1_::dtor$0 @ 0x1801EE02E (_PeoplePaneViewManager--_PeoplePaneViewManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>(
        CImmersiveShellComponentWithSite *a1)
{
  *((_DWORD *)a1 + 31) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(a1);
}
