/*
 * XREFs of ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18016366C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18016222C (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_18016222C.c)
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180162510 (-InsertAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAXIPE$AAVObject@8@@Z @ 0x1801637A4 (-BindableInsertAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18016338C (--$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-$Agil.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18016483C (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180165DE8 (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall _InsertAt__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXIPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 pExceptionObject; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF
  void *Exception; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v12[1] = -2LL;
  v4 = a2;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v14 = a3;
  try
  {
    Platform::Collections::Details::IncrementCounter(a1 + 80);
    v6 = *(__int64 **)(a1 + 96);
    v7 = (v6[1] - *v6) >> 5;
    if ( v4 > v7 )
    {
      Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
      Exception = (void *)Platform::OutOfBoundsException::OutOfBoundsException(Exception);
      pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
      throw (Platform::OutOfBoundsException **)&pExceptionObject;
    }
    if ( v7 + 1 > 0x7FFFFFFF )
    {
      Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
      Exception = (void *)Platform::OutOfMemoryException::OutOfMemoryException(Exception);
      v10 = __abi_winrt_ptr_ctor((__int64)Exception);
      throw (Platform::OutOfMemoryException **)&v10;
    }
    std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::emplace<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
      v6,
      &Exception,
      *v6 + 32 * v4,
      &v14);
    result = Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
               a1,
               1LL,
               (unsigned int)v4);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v11 = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfMemoryException **)&v11;
  }
  catch ( std::exception )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::FailureException::FailureException(Exception);
    v12[0] = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::FailureException **)v12;
  }
  if ( v14 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return result;
}
