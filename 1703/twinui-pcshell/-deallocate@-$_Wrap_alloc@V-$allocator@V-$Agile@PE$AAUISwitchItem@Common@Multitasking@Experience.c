/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@_K@Z @ 0x180139C6C
 * Callers:
 *     _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64__::_1_::catch$110 @ 0x1801A23C6 (_std--vector_Platform--Agile_WindowsInternal--ComposableShell--Experiences--Multitasking--Common.c)
 *     _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64__::_1_::catch$69 @ 0x1801A2AB4 (_std--vector_Platform--Agile_WindowsInternal--ComposableShell--Experiences--Multita_ea_1801A2AB4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x20uLL);
}
