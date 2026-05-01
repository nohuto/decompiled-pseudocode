/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnCachedFileUpdaterActivated@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVCachedFileUpdaterActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180150814
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnCachedFileUpdaterActivated@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJPE$AAVCachedFileUpdaterActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18014ED00 (-__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnCachedFileUpdaterActivated@-QIApplicationO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnCachedFileUpdaterActivated__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPE_AAVCachedFileUpdaterActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__,
         &v6);
  if ( !v3 )
  {
    v4 = v6;
    v7 = v6;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
