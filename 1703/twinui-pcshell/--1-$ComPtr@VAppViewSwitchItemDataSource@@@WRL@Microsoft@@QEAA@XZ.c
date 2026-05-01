/*
 * XREFs of ??1?$ComPtr@VAppViewSwitchItemDataSource@@@WRL@Microsoft@@QEAA@XZ @ 0x18015DD28
 * Callers:
 *     _AppViewDataSource_CreateInstance_::_1_::dtor$0 @ 0x1801A4112 (_AppViewDataSource_CreateInstance_--_1_--dtor$0.c)
 *     _AppViewDataSource_CreateInstance_::_1_::dtor$1 @ 0x1801A411E (_AppViewDataSource_CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18015DF70 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experienc.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppViewSwitchItemDataSource>::~ComPtr<AppViewSwitchItemDataSource>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItemDataSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
