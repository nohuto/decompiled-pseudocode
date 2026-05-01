/*
 * XREFs of ??1?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180160D3C
 * Callers:
 *     _wil::MakeOrThrow_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType_&___ptr64__::_1_::dtor$0 @ 0x1801A4394 (_wil--MakeOrThrow_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchIte.c)
 *     _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::RaiseCollectionChangedEvent_::_1_::dtor$0 @ 0x1801A43BA (_WindowsInternal--ComposableShell--Experiences--Multitasking--Common--SwitchItemDataSourceBase--.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E36D0 (-Release@-$RuntimeClass@U-$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitask.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs>::~ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
