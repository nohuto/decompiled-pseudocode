/*
 * XREFs of ??1?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@QEAA@XZ @ 0x1800897B4
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$1 @ 0x18019BAE6 (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$3 @ 0x18019BD6B (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$4 @ 0x18019BD77 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$4.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$3 @ 0x18019D21A (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$3.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$4 @ 0x18019D226 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$4.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$1 @ 0x18019DA42 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$3 @ 0x18019DA5A (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$1 @ 0x18019DADE (_PeoplePaneViewManager--LaunchPeopleShare_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::PeoplePaneViewReady_::_1_::dtor$0 @ 0x18019DB86 (_PeoplePaneViewManager--PeoplePaneViewReady_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::PeopleShareViewReady_::_1_::dtor$0 @ 0x18019DB92 (_PeoplePaneViewManager--PeopleShareViewReady_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::OnApplicationViewChanged_::_1_::dtor$0 @ 0x18019DB9E (_PeoplePaneViewManager--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor$4 @ 0x1801A18BD (_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchItemDat_ea_1801A18BD.c)
 *     _Object::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::[Platform::Object]::__abi_Release_::_1_::dtor$0 @ 0x1801A2914 (_Object--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multitasking--Common.c)
 *     _Object::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::[Platform::Object]::__abi_Release_::_1_::dtor$1 @ 0x1801A2924 (_Object--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multita_ea_1801A2924.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1__::_1_::dtor$1 @ 0x1801A2A4D (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multi_ea_1801A2A4D.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1__::_1_::dtor$2 @ 0x1801A2A5D (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multi_ea_1801A2A5D.c)
 *     _StartLayout::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$1 @ 0x1801A51D0 (_StartLayout--SelectionDataParser--ParseSelectionAttributes_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$2 @ 0x1801A51DC (_StartLayout--SelectionDataParser--ParseSelectionAttributes_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$3 @ 0x1801A51E8 (_StartLayout--SelectionDataParser--ParseSelectionAttributes_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>::~shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
