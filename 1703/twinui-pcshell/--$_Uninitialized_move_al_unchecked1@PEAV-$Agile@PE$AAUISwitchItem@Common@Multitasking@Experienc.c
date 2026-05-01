/*
 * XREFs of ??$_Uninitialized_move_al_unchecked1@PEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAV12@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180139A44
 * Callers:
 *     ??$emplace@AEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@1@AEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801380DC (--$emplace@AEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 *     ??$emplace_back@AEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXAEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180139D40 (--$emplace_back@AEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ?Swap@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXAEAV12@@Z @ 0x1801398FC (-Swap@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked1<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>(
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
          Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Swap(
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
    std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *>(
      a3,
      v7);
    throw;
  }
  return v3;
}
