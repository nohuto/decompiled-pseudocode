/*
 * XREFs of ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800938F4
 * Callers:
 *     ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x180093AF4 (-Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z.c)
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x180093ED0 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCubicBezierInterpolator::Cleanup(CCubicBezierInterpolator *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 8) = 0LL;
  }
}
