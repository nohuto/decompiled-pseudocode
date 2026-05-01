/*
 * XREFs of ??H?$VectorViewIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Platform@@QEBA?AV012@_J@Z @ 0x180133E44
 * Callers:
 *     ??$end@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@012@@Z @ 0x180133EA4 (--$end@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Colle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::Collections::VectorViewIterator<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::operator+(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax

  v3 = *a1;
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a1);
  *a2 = v3;
  result = a2;
  a2[1] = a3 + a1[1];
  return result;
}
