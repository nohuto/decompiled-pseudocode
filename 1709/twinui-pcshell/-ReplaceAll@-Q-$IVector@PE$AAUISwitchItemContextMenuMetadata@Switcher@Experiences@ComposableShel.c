/*
 * XREFs of ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x180173508
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180172AD4 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_180172AD4.c)
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x180177770 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C_ea_180177770.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18016272C (--$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18016483C (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180174EF0 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _ReplaceAll__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_6__Z(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rdx
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
    Platform::Collections::Details::IncrementCounter((__int64 *)(a1 + 80));
    if ( *(_DWORD *)(a2 + 72) > 0x7FFFFFFFu )
    {
      Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
      v14 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
      pExceptionObject = __abi_winrt_ptr_ctor(v14);
      throw (Platform::OutOfMemoryException **)&pExceptionObject;
    }
    v5 = *(_QWORD *)(a2 + 80);
    v6 = 0LL;
    if ( v5 )
    {
      v6 = v5 + 8LL * *(unsigned int *)(a2 + 72);
      v7 = *(_QWORD **)(a2 + 80);
    }
    else
    {
      v7 = 0LL;
    }
    std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Assign_range<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc * *>(
      *(unsigned __int64 **)(a1 + 96),
      v7,
      v6);
    result = Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Notify(
               a1,
               0LL,
               0LL);
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
