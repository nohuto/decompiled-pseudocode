/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplication____abi_Exit@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJXZ @ 0x1801FF898
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplication____abi_Exit@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJXZ @ 0x1800A9BD0 (-__abi_Windows_UI_Xaml_IApplication____abi_Exit@-QIApplication@Xaml@UI@Windows@@XamlExplorerHost.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1__abi_dtor_helper@@QEAA@XZ @ 0x1801FCF30 (--1__abi_dtor_helper@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_IApplication____abi_Exit__QIApplication_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJXZ(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v3 = 0LL;
  v1 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplication_Xaml_UI_Windows__,
         &v3);
  if ( !v1 )
  {
    v4 = v3;
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 136LL))(v3);
    __abi_dtor_helper::~__abi_dtor_helper((__abi_dtor_helper *)&v4);
  }
  return v1;
}
