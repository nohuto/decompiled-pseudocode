/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x1801695EC
 * Callers:
 *     _Object::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::[Platform::Object]::__abi_Release_::_1_::dtor$2 @ 0x1801F297C (_Object--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switche_ea_1801F297C.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1__::_1_::dtor$3 @ 0x1801F2AA3 (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1801F2AA3.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1__::_1_::dtor$4 @ 0x1801F2AB3 (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1801F2AB3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::[Platform::Object]::__abi_Release_::_1_::dtor$0 @ 0x1801F34A1 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--[Platform--Object]--_.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::[Platform::Object]::__abi_Release_::_1_::dtor$1 @ 0x1801F34B1 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--[Platfor_ea_1801F34B1.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1801F34F1 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1801F34F1.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x1801F3501 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1801F3501.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
