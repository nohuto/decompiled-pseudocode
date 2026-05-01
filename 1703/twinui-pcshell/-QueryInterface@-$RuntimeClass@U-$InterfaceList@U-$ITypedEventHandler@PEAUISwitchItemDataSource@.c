/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015F3D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015F480 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAUISwitchIt_ea_18015F480.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *(_DWORD *)a2 == -463582409
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__.Data4[4] )
    {
      *a3 = (void *)a1;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
