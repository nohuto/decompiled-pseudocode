/*
 * XREFs of ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18002A6D8
 * Callers:
 *     _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultInterpolation__ @ 0x1800D6E10 (_dynamic_atexit_destructor_for__Components--Animations--Sequence--s_rpDefaultInterpolation__.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(_DWORD **a1)
{
  _DWORD *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v1);
  }
}
