/*
 * XREFs of _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$108 @ 0x18019DE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAV12@@Z @ 0x180024808 (--$_Unfancy@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIn.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025114 (-deallocate@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@Ag.c)
 *     ??$destroy@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@QEAAXPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EC510 (--$destroy@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$_Wrap_alloc@V-$allocator@V-$shared_ptr@UP.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch_108(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>(*(_QWORD *)(a2 + 128) + 16LL * *(_QWORD *)(a2 + 152));
  std::_Wrap_alloc<std::allocator<std::shared_ptr<PeoplePaneViewInfo>>>::destroy<std::shared_ptr<PeoplePaneViewInfo>>(
    v4,
    v3);
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(
    v5,
    *(char **)(a2 + 128),
    *(_QWORD *)(a2 + 144));
  throw;
}
