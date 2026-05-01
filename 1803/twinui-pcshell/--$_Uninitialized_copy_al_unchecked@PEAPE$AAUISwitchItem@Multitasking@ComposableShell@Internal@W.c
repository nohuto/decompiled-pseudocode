/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0PEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180204784
 * Callers:
 *     ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18021AD08 (--$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18020545C (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 */

__int64 __fastcall std::_Uninitialized_copy_al_unchecked<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *,Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v3 = a3;
  v4 = a1;
  try
  {
    v5 = 0LL;
    v6 = (a2 - (unsigned __int64)a1 + 7) >> 3;
    if ( (unsigned __int64)a1 > a2 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
          v3,
          *v4);
        v3 += 32LL;
        v8 = v3;
        ++v4;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
      a3,
      v8);
    throw;
  }
  return v3;
}
