/*
 * XREFs of ?Invoke@?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@$01@Details@WRL@Microsoft@@UEAAJPEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@6789WindowsInternal@@@Z @ 0x18015F870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::AgileInvokeHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__,
           &v10);
    if ( v7 < 0 )
      goto LABEL_5;
    v6 = v10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
LABEL_5:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
