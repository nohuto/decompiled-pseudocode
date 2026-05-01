/*
 * XREFs of ?Clear@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x18013890C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Clear@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJXZ @ 0x18013709C (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Clear@-QIBindableVector@Interop@Xaml@UI@Wi.c)
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXXZ @ 0x1801372C0 (-Clear@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WCI@E$AAAXXZ @ 0x1801389B0 (-Clear@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShel_ea_1801389B0.c)
 * Callees:
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1801396E8 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18013AB4C (-Notify@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _Clear__Q__IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXXZ(
        __int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rcx
  _QWORD *i; // rbx
  __int64 result; // rax
  void *Exception; // rax
  void *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+50h] [rbp+8h]

  v10[1] = -2LL;
  try
  {
    Platform::Collections::Details::IncrementCounter(a1 + 80);
    v2 = *(_QWORD *)(a1 + 96);
    v3 = *(_QWORD **)(v2 + 8);
    for ( i = *(_QWORD **)v2; i != v3; i += 4 )
    {
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release(i);
      v4 = i[1];
      if ( v4 )
      {
        i[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( *i )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
    }
    *(_QWORD *)(v2 + 8) = *(_QWORD *)v2;
    result = Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>,1>::Notify(
               a1,
               0LL,
               0LL);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v9 = __abi_winrt_ptr_ctor(v11);
    throw (Platform::OutOfMemoryException **)&v9;
  }
  catch ( std::exception )
  {
    v8 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v12 = Platform::FailureException::FailureException(v8);
    v10[0] = __abi_winrt_ptr_ctor(v12);
    throw (Platform::FailureException **)v10;
  }
  return result;
}
