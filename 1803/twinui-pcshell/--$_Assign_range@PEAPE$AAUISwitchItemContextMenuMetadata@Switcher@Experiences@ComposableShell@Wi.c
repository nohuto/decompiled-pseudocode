/*
 * XREFs of ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18021AD08
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x18020E94C (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Win_ea_18020E94C.c)
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x18021EF5C (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C_ea_18021EF5C.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0PEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180204784 (--$_Uninitialized_copy_al_unchecked@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@W.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180207B44 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x18021B7FC (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ?_Buy@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAA_N_K@Z @ 0x18021F48C (-_Buy@-$vector@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18021F4F8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 */

unsigned __int64 __fastcall std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Assign_range<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc * *>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v5; // r15
  char *v6; // rbx
  char *v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // rsi
  unsigned __int64 v17; // r12
  char *v18; // rsi
  char *i; // rbx

  v5 = (_QWORD *)a2;
  v6 = *(char **)a1;
  v7 = *(char **)(a1 + 8);
  v8 = (__int64)(a3 - a2) >> 3;
  result = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5;
  if ( v8 > v10 )
  {
    if ( v8 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v11 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
            a1,
            (__int64)(a3 - a2) >> 3);
    if ( v6 )
    {
      if ( v6 != v7 )
      {
        do
        {
          Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v6);
          v6 += 32;
        }
        while ( v6 != v7 );
        v6 = *(char **)a1;
      }
      std::_Deallocate(v6, v10, 0x20uLL);
    }
    std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Buy(a1, v11);
    v12 = *(_QWORD *)a1;
    v13 = v5;
LABEL_17:
    result = std::_Uninitialized_copy_al_unchecked<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
               v13,
               a3,
               v12);
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  v14 = 0LL;
  if ( v8 > result )
  {
    v15 = (_QWORD *)(8 * result + a2);
    v16 = result & 0x1FFFFFFFFFFFFFFFLL;
    if ( a2 > (unsigned __int64)v15 )
      v16 = 0LL;
    if ( v16 )
    {
      do
      {
        Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=((__int64)v6);
        v6 += 32;
        ++v5;
        ++v14;
      }
      while ( v14 != v16 );
      v7 = *(char **)(a1 + 8);
    }
    v12 = (__int64)v7;
    v13 = v15;
    goto LABEL_17;
  }
  v17 = (a3 - a2 + 7) >> 3;
  v18 = &v6[32 * v8];
  if ( a2 > a3 )
    v17 = 0LL;
  if ( v17 )
  {
    do
    {
      result = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=((__int64)v6);
      v6 += 32;
      ++v5;
      ++v14;
    }
    while ( v14 != v17 );
    v7 = *(char **)(a1 + 8);
  }
  for ( i = v18; i != v7; i += 32 )
    result = Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(i);
  *(_QWORD *)(a1 + 8) = v18;
  return result;
}
