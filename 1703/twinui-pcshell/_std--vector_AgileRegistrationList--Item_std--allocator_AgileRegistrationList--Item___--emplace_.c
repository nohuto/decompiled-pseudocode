/*
 * XREFs of _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$102 @ 0x180198EF9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAV12@@Z @ 0x180024808 (--$_Unfancy@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIn.c)
 *     ??$destroy@UItem@AgileRegistrationList@@@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@@Z @ 0x180025040 (--$destroy@UItem@AgileRegistrationList@@@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025114 (-deallocate@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@Ag.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch_102(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>(*(_QWORD *)(a2 + 112) + 16LL * *(_QWORD *)(a2 + 136));
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(v4, v3);
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(
    v5,
    *(char **)(a2 + 112),
    *(_QWORD *)(a2 + 128));
  throw;
}
