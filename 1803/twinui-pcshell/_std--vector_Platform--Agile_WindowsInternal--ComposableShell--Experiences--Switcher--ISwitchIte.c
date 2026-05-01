/*
 * XREFs of _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_&___ptr64__::_1_::catch$91 @ 0x180204AE6
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAAXPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@0@Z @ 0x18021F5A4 (-_Destroy@-$vector@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00.c)
 */

void __fastcall __noreturn std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_____ptr64__::_1_::catch_91(
        __int64 a1,
        __int64 a2)
{
  std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 208),
    *(_QWORD *)(a2 + 56));
  std::_Deallocate(*(char **)(a2 + 64), *(_QWORD *)(a2 + 224), 0x20uLL);
  throw;
}
