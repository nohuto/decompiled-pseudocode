/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAV12@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180164B48
 * Callers:
 *     ??$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18016338C (--$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-$Agil.c)
 *     ??$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAAXAEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180164EC0 (--$emplace_back@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-.c)
 * Callees:
 *     ?Swap@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAXAEAV12@@Z @ 0x180164A00 (-Swap@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEA.c)
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
        char *a1,
        char *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  char *v5; // rdi
  __int64 v7; // [rsp+50h] [rbp+18h]

  v7 = a3;
  v3 = a3;
  v5 = a1;
  try
  {
    if ( a1 != a2 )
    {
      do
      {
        if ( v3 )
        {
          *(_QWORD *)v3 = 0LL;
          *(_QWORD *)(v3 + 8) = 0LL;
          *(_QWORD *)(v3 + 16) = 0LL;
          *(_DWORD *)(v3 + 24) = 2;
          Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Swap(
            (__int64 *)v3,
            v5);
        }
        v3 += 32LL;
        v7 = v3;
        v5 += 32;
      }
      while ( v5 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1> *>(
      a3,
      v7);
    throw;
  }
  return v3;
}
