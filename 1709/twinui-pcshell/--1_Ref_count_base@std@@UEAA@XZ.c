/*
 * XREFs of ??1_Ref_count_base@std@@UEAA@XZ @ 0x1800E793C
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$27 @ 0x1801EDABA (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$27.c)
 *     _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$11 @ 0x1801EDB81 (_PeoplePaneViewManager--LaunchPeopleShare_--_1_--dtor$11.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor$54 @ 0x1801F39E4 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--AddSwitc_ea_1801F39E4.c)
 *     _StartLayout::GetStringAttributeValue_::_1_::dtor$24 @ 0x1801F75D2 (_StartLayout--GetStringAttributeValue_--_1_--dtor$24.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_base::~_Ref_count_base(std::_Ref_count_base *this)
{
  *(_QWORD *)this = &std::_Ref_count_base::`vftable';
}
