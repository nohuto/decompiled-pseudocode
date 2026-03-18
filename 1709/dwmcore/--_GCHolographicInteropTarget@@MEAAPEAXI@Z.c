/*
 * XREFs of ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x1801C1610
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801C15A4 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::`scalar deleting destructor'(
        CHolographicInteropTarget *this,
        char a2)
{
  CHolographicInteropTarget::~CHolographicInteropTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
