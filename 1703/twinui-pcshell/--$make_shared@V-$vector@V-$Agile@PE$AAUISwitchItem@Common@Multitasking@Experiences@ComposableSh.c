/*
 * XREFs of ??$make_shared@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@$$V@std@@YA?AV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@0@XZ @ 0x18013933C
 * Callers:
 *     ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180139398 (--$Init@V-$vector@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>,>(
        _QWORD *a1)
{
  char *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *result; // rax

  v2 = (char *)operator new(0x28uLL);
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>::`vftable';
  if ( v2 != (char *)-16LL )
  {
    *v3 = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
  }
  a1[1] = v2;
  result = a1;
  *a1 = v3;
  return result;
}
