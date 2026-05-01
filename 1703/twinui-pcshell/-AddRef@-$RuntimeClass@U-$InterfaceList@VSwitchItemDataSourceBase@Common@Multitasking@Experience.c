/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18015E010
 * Callers:
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x18015ECB0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Multitaski_ea_18015ECB0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x18015ECE0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Multitaski_ea_18015ECE0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x18015ED10 (-AddRef@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Multitaski_ea_18015ED10.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x18015ED40 (-AddRef@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Multitaski_ea_18015ED40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItemDataSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 120);
  v3 = 0x7FFFFFFF;
  if ( v2 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v2 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v2 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v4 = v2 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 120), v2 + 1, v2);
      v5 = v2 == v6;
      v2 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
