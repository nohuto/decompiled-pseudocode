/*
 * XREFs of ?RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXI@Z @ 0x18017373C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJI@Z @ 0x180172794 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_180172794.c)
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXI@Z @ 0x180177EC0 (-RemoveAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Com_ea_180177EC0.c)
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WCI@E$AAAXI@Z @ 0x180177EF0 (-RemoveAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Com_ea_180177EF0.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18016483C (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Swap@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAXAEAV12@@Z @ 0x180164A00 (-Swap@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEA.c)
 *     ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180164BC8 (-Release@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180174EF0 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _RemoveAt__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXI_Z(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v4; // rsi
  char *v5; // r15
  void *Exception; // rax
  char *i; // rdi
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
    Platform::Collections::Details::IncrementCounter((__int64 *)(a1 + 80));
    v4 = *(_QWORD **)(a1 + 96);
    v5 = (char *)v4[1];
    if ( v2 >= (__int64)&v5[-*v4] >> 5 )
    {
      Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
      v20 = Platform::OutOfBoundsException::OutOfBoundsException(Exception);
      pExceptionObject = __abi_winrt_ptr_ctor(v20);
      throw (Platform::OutOfBoundsException **)&pExceptionObject;
    }
    for ( i = (char *)(*v4 + 32LL * (unsigned int)v2 + 32); i != v5; i += 32 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = 2;
      Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Swap((__int64 *)&v17, i);
      Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Swap(
        (__int64 *)&v17,
        i - 32);
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release((__int64)&v17);
      if ( *((_QWORD *)&v17 + 1) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 16LL))(*((_QWORD *)&v17 + 1));
      if ( (_QWORD)v17 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v8 = v4[1];
    Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(v8 - 32);
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
    result = Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Notify(
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
