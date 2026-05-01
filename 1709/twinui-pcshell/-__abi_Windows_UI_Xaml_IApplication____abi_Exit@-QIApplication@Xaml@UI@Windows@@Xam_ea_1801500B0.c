/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplication____abi_Exit@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJXZ @ 0x1801500B0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplication____abi_Exit@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJXZ @ 0x18014EFB0 (-__abi_Windows_UI_Xaml_IApplication____abi_Exit@-QIApplication@Xaml@UI@Windows@@XamlExplorerHost.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_IApplication____abi_Exit__QIApplication_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJXZ(
        __int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v4 = 0LL;
  v1 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplication_Xaml_UI_Windows__,
         &v4);
  if ( !v1 )
  {
    v2 = v4;
    v5 = v4;
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
