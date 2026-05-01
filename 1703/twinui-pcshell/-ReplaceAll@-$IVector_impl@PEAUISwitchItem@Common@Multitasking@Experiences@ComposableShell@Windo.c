/*
 * XREFs of ?ReplaceAll@?$IVector_impl@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801610C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IVector_impl<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,1>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // esi
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
