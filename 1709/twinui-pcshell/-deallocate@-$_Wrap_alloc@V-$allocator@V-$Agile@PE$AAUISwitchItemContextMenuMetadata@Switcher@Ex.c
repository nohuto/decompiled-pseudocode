/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@QEAAXPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@_K@Z @ 0x180164D70
 * Callers:
 *     _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1_____::emplace_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_&___ptr64__::_1_::catch$115 @ 0x1801F2410 (_std--vector_Platform--Agile_WindowsInternal--ComposableShell--Experiences--Switcher--ISwitchIte.c)
 *     _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_1_____::emplace_back_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_&___ptr64__::_1_::catch$73 @ 0x1801F2AEA (_std--vector_Platform--Agile_WindowsInternal--ComposableShell--Experiences--Switche_ea_1801F2AEA.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 32 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x180164DC0LL);
  }
LABEL_7:
  operator delete(a2);
}
