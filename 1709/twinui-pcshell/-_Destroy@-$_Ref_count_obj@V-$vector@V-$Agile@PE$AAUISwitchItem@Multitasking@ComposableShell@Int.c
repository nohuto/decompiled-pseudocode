/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@std@@EEAAXXZ @ 0x1801644F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180164BC8 (-Release@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::_Destroy(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = (_QWORD *)a1[2];
  if ( v2 )
  {
    v3 = (_QWORD *)a1[3];
    while ( v2 != v3 )
    {
      Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(v2);
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
    v5 = a1[2];
    v6 = (__int64)(a1[4] - v5) >> 5;
    if ( v6 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( 32 * v6 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v5);
        a1[2] = 0LL;
        a1[3] = 0LL;
        a1[4] = 0LL;
        return;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_15;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
  }
}
