/*
 * XREFs of ??$make_shared@IH@std@@YA?AV?$shared_ptr@I@0@$$QEAH@Z @ 0x18013968C
 * Callers:
 *     ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180139398 (--$Init@V-$vector@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Win.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1801396E8 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<unsigned int,int>(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdx
  _QWORD *result; // rax

  v4 = operator new(0x18uLL);
  v4[2] = 1;
  v5 = v4 + 4;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj<unsigned int>::`vftable';
  if ( v4 != (_DWORD *)-16LL )
    *v5 = *a2;
  a1[1] = v4;
  result = a1;
  *a1 = v5;
  return result;
}
