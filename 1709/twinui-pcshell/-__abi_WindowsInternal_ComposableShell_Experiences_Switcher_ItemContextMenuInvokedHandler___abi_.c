/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemContextMenuInvokedHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@3456@@Z @ 0x18015B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemContextMenuInvokedHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_ItemContextMenuInvokedHandler_Switcher_Experiences_ComposableShell_WindowsInternal__23456_UE_AAAJPE_AAUISwitchItem_Multitasking_5Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_3456__Z(
        _QWORD **a1)
{
  int v1; // eax

  try
  {
    if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::`vftable'{for `__abi_IUnknown'} )
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
