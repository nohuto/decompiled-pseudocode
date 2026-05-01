/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplication____abi_get_Resources@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAPE$AAVResourceDictionary@234@@Z @ 0x1801FFC1C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplication____abi_get_Resources@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPEAPE$AAVResourceDictionary@234@@Z @ 0x1800A9C30 (-__abi_Windows_UI_Xaml_IApplication____abi_get_Resources@-QIApplication@Xaml@UI@Windows@@XamlExp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1__abi_dtor_helper@@QEAA@XZ @ 0x1801FCF30 (--1__abi_dtor_helper@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_IApplication____abi_get_Resources__QIApplication_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPEAPE_AAVResourceDictionary_234__Z(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v5 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplication_Xaml_UI_Windows__,
         &v5);
  if ( !v3 )
  {
    v6 = v5;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, a2);
    __abi_dtor_helper::~__abi_dtor_helper((__abi_dtor_helper *)&v6);
  }
  return v3;
}
