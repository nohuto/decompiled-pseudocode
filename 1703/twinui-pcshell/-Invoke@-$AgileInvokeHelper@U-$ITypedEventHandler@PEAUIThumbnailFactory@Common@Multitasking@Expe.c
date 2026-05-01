/*
 * XREFs of ?Invoke@?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUIThumbnailSourceEventArgs@23456@@Foundation@Windows@@$01@Details@WRL@Microsoft@@UEAAJPEAUIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUIThumbnailSourceEventArgs@6789WindowsInternal@@@Z @ 0x1801686B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::AgileInvokeHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>,2>::Invoke(
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
           &GUID_74772271_1438_5bde_bb61_cf39859e8591,
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
