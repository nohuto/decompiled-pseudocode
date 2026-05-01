/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x18013E36C
 * Callers:
 *     _Object::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::[Platform::Object]::__abi_Release_::_1_::dtor$2 @ 0x1801A2934 (_Object--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multita_ea_1801A2934.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1__::_1_::dtor$3 @ 0x1801A2A6D (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multi_ea_1801A2A6D.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1__::_1_::dtor$4 @ 0x1801A2A7D (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Multi_ea_1801A2A7D.c)
 *     _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::[Platform::Object]::__abi_Release_::_1_::dtor$0 @ 0x1801A347F (_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchItemDat_ea_1801A347F.c)
 *     _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::[Platform::Object]::__abi_Release_::_1_::dtor$1 @ 0x1801A348F (_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchItemDat_ea_1801A348F.c)
 *     _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1801A34CF (_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchItemDat_ea_1801A34CF.c)
 *     _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x1801A34DF (_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchItemDat_ea_1801A34DF.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
