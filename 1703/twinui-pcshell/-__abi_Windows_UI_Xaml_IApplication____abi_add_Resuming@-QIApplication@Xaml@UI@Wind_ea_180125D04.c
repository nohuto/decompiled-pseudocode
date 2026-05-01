/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplication____abi_add_Resuming@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAV?$EventHandler@PE$AAVObject@Platform@@@Foundation@4@PEAVEventRegistrationToken@Foundation@4@@Z @ 0x180125D04
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplication____abi_add_Resuming@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPE$AAV?$EventHandler@PE$AAVObject@Platform@@@Foundation@4@PEAVEventRegistrationToken@Foundation@4@@Z @ 0x180124D70 (-__abi_Windows_UI_Xaml_IApplication____abi_add_Resuming@-QIApplication@Xaml@UI@Windows@@XamlExpl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_IApplication____abi_add_Resuming__QIApplication_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPE_AAV__EventHandler_PE_AAVObject_Platform___Foundation_4_PEAVEventRegistrationToken_Foundation_4__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v8 = 0LL;
  v5 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplication_Xaml_UI_Windows__,
         &v8);
  if ( !v5 )
  {
    v6 = v8;
    v9 = v8;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 120LL))(v8, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
