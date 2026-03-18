/*
 * XREFs of ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x1801C5030
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801C4FF4 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
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
