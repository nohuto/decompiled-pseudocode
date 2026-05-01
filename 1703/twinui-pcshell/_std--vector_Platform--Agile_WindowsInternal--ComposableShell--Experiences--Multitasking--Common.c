/*
 * XREFs of _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64__::_1_::catch$110 @ 0x1801A23C6
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@0@Z @ 0x180139C08 (-_Destroy@-$vector@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Wi.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@_K@Z @ 0x180139C6C (-deallocate@-$_Wrap_alloc@V-$allocator@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experience.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_____ptr64__::_1_::catch_110(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>::_Destroy(
    a1,
    *(_QWORD **)(a2 + 208),
    *(_QWORD **)(a2 + 64));
  std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::deallocate(
    v3,
    *(char **)(a2 + 48),
    *(_QWORD *)(a2 + 224));
  throw;
}
