/*
 * XREFs of ?RemoveAt@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXI@Z @ 0x1801385EC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_RemoveAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJI@Z @ 0x180136FDC (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_RemoveAt@-QIBindableVector@Interop@Xaml@UI.c)
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXI@Z @ 0x180137290 (-RemoveAt@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WCI@E$AAAXI@Z @ 0x180138780 (-RemoveAt@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableS_ea_180138780.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1801396E8 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Swap@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXAEAV12@@Z @ 0x1801398FC (-Swap@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18013AB4C (-Notify@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _RemoveAt__Q__IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXI_Z(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int64 v2; // r15
  _QWORD *v4; // rdi
  void *Exception; // rax
  __int64 v6; // r12
  __int64 i; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  void *v12; // rax
  void *v13; // rax
  __int64 pExceptionObject; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+80h] [rbp+8h]
  __int64 v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+80h] [rbp+8h]

  v16[1] = -2LL;
  v2 = a2;
  try
  {
    Platform::Collections::Details::IncrementCounter(a1 + 80);
    v4 = *(_QWORD **)(a1 + 96);
    if ( v2 >= (__int64)(v4[1] - *v4) >> 5 )
    {
      Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
      v20 = Platform::OutOfBoundsException::OutOfBoundsException(Exception);
      pExceptionObject = __abi_winrt_ptr_ctor(v20);
      throw (Platform::OutOfBoundsException **)&pExceptionObject;
    }
    v6 = v4[1];
    for ( i = *v4 + 32LL * (unsigned int)v2 + 32; i != v6; i += 32LL )
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = 2;
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Swap(
        &v17,
        i);
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Swap(
        &v17,
        i - 32);
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release(&v17);
      if ( *((_QWORD *)&v17 + 1) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 16LL))(*((_QWORD *)&v17 + 1));
      if ( (_QWORD)v17 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v8 = v4[1];
    Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release(v8 - 32);
    v9 = *(_QWORD *)(v8 - 24);
    if ( v9 )
    {
      *(_QWORD *)(v8 - 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = *(_QWORD *)(v8 - 32);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v4[1] -= 32LL;
    result = Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>,1>::Notify(
               a1,
               2LL,
               (unsigned int)v2);
  }
  catch ( std::bad_alloc )
  {
    v12 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v21 = Platform::OutOfMemoryException::OutOfMemoryException(v12);
    v15 = __abi_winrt_ptr_ctor(v21);
    throw (Platform::OutOfMemoryException **)&v15;
  }
  catch ( std::exception )
  {
    v13 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v22 = Platform::FailureException::FailureException(v13);
    v16[0] = __abi_winrt_ptr_ctor(v22);
    throw (Platform::FailureException **)v16;
  }
  return result;
}
