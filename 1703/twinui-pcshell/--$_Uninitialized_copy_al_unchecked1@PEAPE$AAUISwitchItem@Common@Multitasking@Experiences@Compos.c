/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked1@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@0PEAV12@AEAU?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18013734C
 * Callers:
 *     ??$_Assign_range@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18013749C (--$_Assign_range@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ??0?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801397D0 (--0-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$0.c)
 */

__int64 __fastcall std::_Uninitialized_copy_al_unchecked1<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * *,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>(
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
        if ( v3 )
          Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
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
    std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *>(
      a3,
      v8);
    throw;
  }
  return v3;
}
