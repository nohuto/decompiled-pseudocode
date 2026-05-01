/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$2 @ 0x1800B522C (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$2.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1800F9F18 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016EF20 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x18016F16D (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180170F80 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180171253 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$1 @ 0x180176C58 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$4 @ 0x180176C7C (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$4.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$7 @ 0x180176CA0 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$7.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177740 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180177913 (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017CA20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18017CF4C (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x18017CF70 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x18017CF94 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017F688 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$2 @ 0x18017F9E6 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$2.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1801C230C (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$5 @ 0x1801C26CF (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$5.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1801C2E50 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$5 @ 0x1801C3428 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( ((*((_DWORD *)this + 2) - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
