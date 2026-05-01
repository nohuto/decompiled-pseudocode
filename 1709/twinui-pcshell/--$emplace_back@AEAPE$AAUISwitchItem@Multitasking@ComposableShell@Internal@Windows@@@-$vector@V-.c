/*
 * XREFs of ??$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAAXAEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180164EC0
 * Callers:
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180165F48 (-Append@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows_ea_180165F48.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801738C4 (-Append@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801648D4 (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAV12@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180164B48 (--$_Uninitialized_move_al_unchecked@PEAV-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@I.c)
 *     ?_Change_array@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXQEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@_K1@Z @ 0x180164DC4 (-_Change_array@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compo.c)
 */

void __fastcall std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::emplace_back<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
        __int64 a1,
        unsigned int (__fastcall ****a2)(__int64, GUID *, __int64 *))
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  unsigned __int64 v12; // r14
  unsigned int (__fastcall ****v13)(__int64, GUID *, __int64 *); // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = (v5 - *(_QWORD *)a1) >> 5;
    if ( v6 == 0x7FFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *(_QWORD *)a1) >> 5;
    v9 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = std::_Allocate(v10, 0x20uLL);
    v12 = (unsigned __int64)v11;
    v17 = v11;
    try
    {
      v13 = (unsigned int (__fastcall ****)(__int64, GUID *, __int64 *))&v11[4 * v6];
      if ( v13 )
        Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
          v13,
          *a2);
      std::_Uninitialized_move_al_unchecked<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
        *(char **)a1,
        *(char **)(a1 + 8),
        v12);
    }
    catch ( ... )
    {
      v14 = (_QWORD *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v17[4 * v6]);
      std::_Wrap_alloc<std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::destroy<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>(
        v15,
        v14);
      std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>::deallocate(
        v16,
        v17,
        v10);
      throw;
    }
    std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Change_array(
      (unsigned __int64 *)a1,
      v12,
      v7,
      v10);
  }
  else
  {
    if ( v5 )
      Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
        *(unsigned int (__fastcall *****)(__int64, GUID *, __int64 *))(a1 + 8),
        *a2);
    *(_QWORD *)(a1 + 8) += 32LL;
  }
}
