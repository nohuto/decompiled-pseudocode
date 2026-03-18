/*
 * XREFs of ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x1801A9F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801A9F20 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 */

CBitmapLockUnaligned *__fastcall CBitmapLockUnaligned::`scalar deleting destructor'(
        CBitmapLockUnaligned *this,
        char a2)
{
  CBitmapLockUnaligned::~CBitmapLockUnaligned(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
