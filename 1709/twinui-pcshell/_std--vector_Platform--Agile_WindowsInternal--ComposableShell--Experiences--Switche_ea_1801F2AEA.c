/*
 * XREFs of _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_&___ptr64__::_1_::catch$73 @ 0x1801F2AEA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800250AC (--$_Unfancy@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@UIDiscoverRecen.c)
 *     ??$destroy@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@Z @ 0x180164C60 (--$destroy@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@_K@Z @ 0x180164D70 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Ex.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_____ptr64__::_1_::catch_73(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (_QWORD *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(a2[17] + 32 * a2[16]);
  std::_Wrap_alloc<std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::destroy<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>(
    v4,
    v3);
  std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>::deallocate(
    v5,
    (_QWORD *)a2[17],
    a2[14]);
  throw;
}
