/*
 * XREFs of ??$destroy@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@Z @ 0x180139B5C
 * Callers:
 *     _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64__::_1_::catch$69 @ 0x1801A2AB4 (_std--vector_Platform--Agile_WindowsInternal--ComposableShell--Experiences--Multita_ea_1801A2AB4.c)
 * Callees:
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::destroy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release((__int64)a2);
  v3 = a2[1];
  if ( v3 )
  {
    a2[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
}
