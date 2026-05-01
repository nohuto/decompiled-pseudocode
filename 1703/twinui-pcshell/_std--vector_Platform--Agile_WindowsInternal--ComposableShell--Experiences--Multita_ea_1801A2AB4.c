/*
 * XREFs of _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64__::_1_::catch$69 @ 0x1801A2AB4
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAV12@@Z @ 0x180024808 (--$_Unfancy@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIn.c)
 *     ??$destroy@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@Z @ 0x180139B5C (--$destroy@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@_K@Z @ 0x180139C6C (-deallocate@-$_Wrap_alloc@V-$allocator@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experience.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_____ptr64__::_1_::catch_69(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (_QWORD *)std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>(*(_QWORD *)(a2 + 112) + 32LL * *(_QWORD *)(a2 + 136));
  std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::destroy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>(
    v4,
    v3);
  std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::deallocate(
    v5,
    *(char **)(a2 + 112),
    *(_QWORD *)(a2 + 128));
  throw;
}
