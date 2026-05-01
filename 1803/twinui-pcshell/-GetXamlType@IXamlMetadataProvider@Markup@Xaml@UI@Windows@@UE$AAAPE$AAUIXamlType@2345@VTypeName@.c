/*
 * XREFs of ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x1801FDB6C
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x1801FDA60 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_1801FDA60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(__int64 a1, __int128 *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v5 = *a2;
  v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v5, &v6);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = __abi_winrt_ptr_ctor(v6);
  __abi_winrt_ptr_dtor(v6);
  return v3;
}
