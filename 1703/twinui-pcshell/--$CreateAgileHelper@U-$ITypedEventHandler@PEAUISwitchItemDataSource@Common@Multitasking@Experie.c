/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18015F9C8
 * Callers:
 *     ?add_SwitchItemCollectionChanged@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18015FAF0 (-add_SwitchItemCollectionChanged@SwitchItemDataSourceBase@Common@Multitasking@Experiences@Compos.c)
 * Callees:
 *     ??$Make@U?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@$01@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@$01@Details@WRL@Microsoft@@@12@XZ @ 0x18015F908 (--$Make@U-$AgileInvokeHelper@U-$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *>>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  signed int AgileReference; // edi
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::AgileInvokeHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *>,2>>(&v12);
  v5 = 0LL;
  if ( &v13 != v4 )
  {
    v5 = *(__int64 **)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  AgileReference = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v8 = v5 + 5;
    v9 = v5[5];
    v5[5] = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = *v8;
    AgileReference = 0;
    if ( a1 )
    {
      if ( v10 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      AgileReference = RoGetAgileReference(
                         0LL,
                         &_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__,
                         a1,
                         v5 + 5);
    }
    else
    {
      *v8 = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                         v5,
                         &_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__,
                         a2);
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  }
  return (unsigned int)AgileReference;
}
