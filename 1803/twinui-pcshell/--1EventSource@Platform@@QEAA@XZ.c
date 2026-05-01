/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x18020753C
 * Callers:
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1__::_1_::dtor$3 @ 0x1802058FF (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802058FF.c)
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1__::_1_::dtor$4 @ 0x18020590F (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_18020590F.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x180206123 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_180206123.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x180206133 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_180206133.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$0 @ 0x1802076C9 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchItemDataViewIm.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802076D9 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchI_ea_1802076D9.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1__::_1_::dtor$3 @ 0x18021B23F (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_18021B23F.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1__::_1_::dtor$4 @ 0x18021B24F (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_18021B24F.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
