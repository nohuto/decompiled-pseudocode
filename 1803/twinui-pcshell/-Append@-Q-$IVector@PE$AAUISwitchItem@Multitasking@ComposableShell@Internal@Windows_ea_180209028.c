/*
 * XREFs of ?Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180209028
 * Callers:
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x1800A9DA0 (-Append@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collection.c)
 *     ?BindableAppend@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAXPE$AAVObject@8@@Z @ 0x180209194 (-BindableAppend@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchIt_ea_180209194.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180213B5C (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_180213B5C.c)
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchItemDataViewImpl@2345@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@5@XZ @ 0x180215AE4 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchI_ea_180215AE4.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAAXAEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180204B24 (--$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18020B8F4 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18020D73C (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?ValidateSize@Details@Collections@Platform@@YAX_K@Z @ 0x1802108FC (-ValidateSize@Details@Collections@Platform@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall _Append__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  void *Exception; // rax
  void *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h]
  __int64 v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v9[1] = -2LL;
  v12 = __abi_winrt_ptr_ctor(a2);
  try
  {
    Platform::Collections::Details::IncrementCounter(a1 + 80);
    v3 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) - **(_QWORD **)(a1 + 96)) >> 5;
    Platform::Collections::Details::ValidateSize((Platform::Collections::Details *)(v3 + 1), v4);
    std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::emplace_back<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
      *(__int64 **)(a1 + 96),
      &v12);
    Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
      a1,
      1LL,
      (unsigned int)v3);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v10 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v8 = __abi_winrt_ptr_ctor(v10);
    throw (Platform::OutOfMemoryException **)&v8;
  }
  catch ( std::exception )
  {
    v7 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::FailureException::FailureException(v7);
    v9[0] = __abi_winrt_ptr_ctor(v11);
    throw (Platform::FailureException **)v9;
  }
  return __abi_winrt_ptr_dtor(v12);
}
