/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x1801377BC
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WBA@E$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x180137860 (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItem@Common@Multitas_ea_180137860.c)
 * Callees:
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18013D29C (--0-$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterable_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_First__Q__IIterable_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJPEAPE_AAU__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___234__Z(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi

  v4 = 0;
  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    v5 = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
    v6 = Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>(
           v5,
           a1 + 80,
           a1 + 96);
    v7 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *a2 = v7;
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v4;
}
