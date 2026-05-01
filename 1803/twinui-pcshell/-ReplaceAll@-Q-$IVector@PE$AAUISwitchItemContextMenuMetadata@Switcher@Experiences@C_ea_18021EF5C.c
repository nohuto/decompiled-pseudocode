/*
 * XREFs of ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x18021EF5C
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1800AB7F0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802212B0 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_1802212B0.c)
 * Callees:
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18020B8F4 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?ValidateSize@Details@Collections@Platform@@YAX_K@Z @ 0x1802108FC (-ValidateSize@Details@Collections@Platform@@YAX_K@Z.c)
 *     ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18021AD08 (--$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18021E834 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=6
_UNKNOWN **__fastcall _ReplaceAll__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_6__Z(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  _UNKNOWN **result; // rax
  void *Exception; // rax
  void *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+50h] [rbp+8h]

  v10[1] = -2LL;
  try
  {
    Platform::Collections::Details::IncrementCounter((_QWORD *)(a1 + 80));
    Platform::Collections::Details::ValidateSize((Platform::Collections::Details *)*(unsigned int *)(a2 + 72));
    v4 = *(_QWORD *)(a2 + 80);
    v5 = 0LL;
    if ( v4 )
      v5 = v4 + 8LL * *(unsigned int *)(a2 + 72);
    else
      v4 = 0LL;
    std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Assign_range<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc * *>(
      *(_QWORD *)(a1 + 96),
      v4,
      v5);
    result = Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Notify(
               a1,
               0,
               0);
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
