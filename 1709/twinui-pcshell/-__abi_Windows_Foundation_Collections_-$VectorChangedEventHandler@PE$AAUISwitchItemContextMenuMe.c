/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@2345@UE$AAAJPE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@345@PE$AAUIVectorChangedEventArgs@345@@Z @ 0x1801723F0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal_____abi_IDelegate____abi_Invoke__Q__abi_IDelegate___VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__2345_UE_AAAJPE_AAU__IObservableVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___345_PE_AAUIVectorChangedEventArgs_345__Z(
        _QWORD **a1)
{
  int v1; // eax

  try
  {
    if ( *a1 == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
    }
    else
    {
      v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
      if ( v1 < 0 )
        __abi_WinRTraiseException(v1);
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
