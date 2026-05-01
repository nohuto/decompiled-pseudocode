/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@UE$AAAJPEAPE$AAVObject@9@@Z @ 0x180167ACC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@WBA@E$AAAJPEAPE$AAVObject@9@@Z @ 0x180167B60 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@-QIBindableIter_ea_180167B60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current__QIBindableIterator_Interop_Xaml_UI_Windows____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_Platform__UE_AAAJPEAPE_AAVObject_9__Z(
        _BYTE *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  if ( a1[104] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    v3 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 80LL))(a1);
    v4 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *a2 = v4;
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
