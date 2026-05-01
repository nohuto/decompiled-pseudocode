/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@PEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@0AEAU?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@0@@Z @ 0x180139BA4
 * Callers:
 *     _std::_Uninitialized_copy_al_unchecked1_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_____ptr64_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1______ptr64_std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1______::_1_::catch$3 @ 0x1801A1F87 (_std--_Uninitialized_copy_al_unchecked1_WindowsInternal--ComposableShell--Experiences--Multitask.c)
 *     _std::_Uninitialized_move_al_unchecked1_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1______ptr64_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1______ptr64_std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1______::_1_::catch$4 @ 0x1801A2A90 (_std--_Uninitialized_move_al_unchecked1_Platform--Agile_WindowsInternal--ComposableShell--Experi.c)
 * Callees:
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release((__int64)v3);
      v4 = v3[1];
      if ( v4 )
      {
        v3[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( *v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      v3 += 4;
    }
    while ( v3 != a2 );
  }
}
