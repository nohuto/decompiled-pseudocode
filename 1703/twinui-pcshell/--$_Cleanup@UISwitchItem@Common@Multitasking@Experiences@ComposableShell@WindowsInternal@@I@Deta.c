/*
 * XREFs of ??$_Cleanup@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x180162730
 * Callers:
 *     ?GetMany@?$IVector_impl@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x180160FE0 (-GetMany@-$IVector_impl@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     ?GetMany@?$IIterator_impl@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x180161930 (-GetMany@-$IIterator_impl@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
