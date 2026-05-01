/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x18008D79C
 * Callers:
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x18019C0F7 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x18019C11B (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$7 @ 0x18019C13F (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$7.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$10 @ 0x18019C163 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$10.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$13 @ 0x18019C187 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$13.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$16 @ 0x18019C1AB (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$16.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x18019C4A1 (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x18019C59D (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18019C740 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x18019C764 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x18019C788 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$2 @ 0x18019C7D0 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$2.c)
 *     _PeoplePaneViewManager::GetRectFromContactIdWorker_::_1_::dtor$9 @ 0x18019DB56 (_PeoplePaneViewManager--GetRectFromContactIdWorker_--_1_--dtor$9.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$5 @ 0x18019DC9A (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$5.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$2 @ 0x1801A5515 (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
