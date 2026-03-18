/*
 * XREFs of ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x1801A6690
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801A6624 (--1CHolographicInteropTarget@@MEAA@XZ.c)
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
