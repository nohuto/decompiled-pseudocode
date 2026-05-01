/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_ButtonClickedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@2345@UE$AAAJXZ @ 0x180129090
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_ButtonClickedEventHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_ButtonClickedEventHandler_Desktop_ComposableShell_WindowsInternal__2345_UE_AAAJXZ(
        _QWORD **a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  try
  {
    if ( *a1 == &WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::`vftable'{for `__abi_IUnknown'} )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
    }
    else
    {
      v2 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
      if ( v2 < 0 )
        __abi_WinRTraiseException(v2);
    }
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
