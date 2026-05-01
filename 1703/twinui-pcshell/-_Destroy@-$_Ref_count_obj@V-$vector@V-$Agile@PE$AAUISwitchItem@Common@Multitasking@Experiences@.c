/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@std@@EEAAXXZ @ 0x180139290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::_Destroy(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 24);
    while ( v2 != v3 )
    {
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release(v2);
      v4 = v2[1];
      if ( v4 )
      {
        v2[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
      v2 += 4;
    }
    std::_Deallocate(*(char **)(a1 + 16), (__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 5, 0x20uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
