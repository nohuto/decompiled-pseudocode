/*
 * XREFs of _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch$63 @ 0x18019BEA1
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAV12@@Z @ 0x180024808 (--$_Unfancy@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIn.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@_K@Z @ 0x18008C760 (-deallocate@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarL.c)
 *     ??$destroy@UParsedTaskbarLayout@@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@@Z @ 0x18008D0F4 (--$destroy@UParsedTaskbarLayout@@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Q.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch_63(
        __int64 a1,
        __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = *(char **)(a2 + 128);
  if ( *(_BYTE *)(a2 + 112) )
  {
    v4 = std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v3[104 * *(_QWORD *)(a2 + 48)]);
    std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::destroy<ParsedTaskbarLayout>(v5, v4);
  }
  std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(a1, v3, *(_QWORD *)(a2 + 136));
  throw;
}
