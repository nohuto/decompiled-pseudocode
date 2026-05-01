/*
 * XREFs of ??1?$ComPtr@VAppViewSwitchItem@@@WRL@Microsoft@@QEAA@XZ @ 0x180164444
 * Callers:
 *     _AppViewSwitchItem_CreateInstance_::_1_::dtor$0 @ 0x1801A44AD (_AppViewSwitchItem_CreateInstance_--_1_--dtor$0.c)
 *     _AppViewSwitchItem_CreateInstance_::_1_::dtor$1 @ 0x1801A44B9 (_AppViewSwitchItem_CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164610 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@Composa.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppViewSwitchItem>::~ComPtr<AppViewSwitchItem>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
