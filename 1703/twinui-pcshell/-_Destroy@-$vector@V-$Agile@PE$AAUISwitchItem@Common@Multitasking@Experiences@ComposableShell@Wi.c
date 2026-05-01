/*
 * XREFs of ?_Destroy@?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@0@Z @ 0x180139C08
 * Callers:
 *     _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64__::_1_::catch$110 @ 0x1801A23C6 (_std--vector_Platform--Agile_WindowsInternal--ComposableShell--Experiences--Multitasking--Common.c)
 * Callees:
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>::_Destroy(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release((__int64)v4);
      v5 = v4[1];
      if ( v5 )
      {
        v4[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( *v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      v4 += 4;
    }
    while ( v4 != a3 );
  }
}
