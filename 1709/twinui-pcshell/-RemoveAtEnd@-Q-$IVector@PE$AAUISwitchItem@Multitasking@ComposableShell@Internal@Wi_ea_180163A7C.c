/*
 * XREFs of ?RemoveAtEnd@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x180163A7C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_RemoveAtEnd@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJXZ @ 0x1801622EC (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_RemoveAtEnd@-QIBindableVector@Interop@Xaml.c)
 *     ?RemoveAtEnd@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXXZ @ 0x180162540 (-RemoveAtEnd@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Colle.c)
 *     ?RemoveAtEnd@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@WCI@E$AAAXXZ @ 0x180163B60 (-RemoveAtEnd@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Wi_ea_180163B60.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18016483C (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180164BC8 (-Release@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180165DE8 (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _RemoveAtEnd__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXXZ(
        __int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  void *Exception; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  void *v9; // rax
  void *v10; // rax
  __int64 pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h]
  __int64 v15; // [rsp+50h] [rbp+8h]
  __int64 v16; // [rsp+50h] [rbp+8h]

  v13[1] = -2LL;
  try
  {
    Platform::Collections::Details::IncrementCounter(a1 + 80);
    v2 = *(_QWORD **)(a1 + 96);
    v3 = v2[1];
    if ( *v2 == v3 )
    {
      Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
      v14 = Platform::OutOfBoundsException::OutOfBoundsException(Exception);
      pExceptionObject = __abi_winrt_ptr_ctor(v14);
      throw (Platform::OutOfBoundsException **)&pExceptionObject;
    }
    v5 = v2[1];
    Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(v3 - 32);
    v6 = *(_QWORD *)(v5 - 24);
    if ( v6 )
    {
      *(_QWORD *)(v5 - 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *(_QWORD *)(v5 - 32);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v2[1] -= 32LL;
    result = Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
               a1,
               2LL,
               (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) - **(_QWORD **)(a1 + 96)) >> 5);
  }
  catch ( std::bad_alloc )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v15 = Platform::OutOfMemoryException::OutOfMemoryException(v9);
    v12 = __abi_winrt_ptr_ctor(v15);
    throw (Platform::OutOfMemoryException **)&v12;
  }
  catch ( std::exception )
  {
    v10 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v16 = Platform::FailureException::FailureException(v10);
    v13[0] = __abi_winrt_ptr_ctor(v16);
    throw (Platform::FailureException **)v13;
  }
  return result;
}
