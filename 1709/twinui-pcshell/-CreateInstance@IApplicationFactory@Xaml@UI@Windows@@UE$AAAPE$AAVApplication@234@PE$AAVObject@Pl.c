/*
 * XREFs of ?CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Platform@@PEAPE$AAV67@@Z @ 0x1801525D8
 * Callers:
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18014C6CC (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Xaml::IApplicationFactory::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a3 && *a3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, a3, &v10);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = v10;
  v8 = v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v7 = v10;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
