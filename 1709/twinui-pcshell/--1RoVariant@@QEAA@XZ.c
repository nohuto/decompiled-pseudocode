/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x18008FDEC
 * Callers:
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x1801EAB83 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x1801EABA7 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$7 @ 0x1801EABCB (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$7.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$10 @ 0x1801EABEF (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$10.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$13 @ 0x1801EAC13 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$13.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$16 @ 0x1801EAC37 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$16.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x1801EB26D (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x1801EB3B1 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$1 @ 0x1801EB7D1 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$4 @ 0x1801EB7F5 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$4.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$7 @ 0x1801EB819 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$7.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x1801EB9BB (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x1801EB9DF (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x1801EBA03 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$2 @ 0x1801EBA4B (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$2.c)
 *     _PeoplePaneViewManager::GetRectFromContactIdWorker_::_1_::dtor$9 @ 0x1801EDC31 (_PeoplePaneViewManager--GetRectFromContactIdWorker_--_1_--dtor$9.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$5 @ 0x1801EDDB1 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$5.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$2 @ 0x1801F7A0C (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
