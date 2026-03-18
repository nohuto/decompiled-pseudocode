/*
 * XREFs of ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x1801BAB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapColorKey@@EEAA@XZ @ 0x1801BAA48 (--1CBitmapColorKey@@EEAA@XZ.c)
 */

CBitmapColorKey *__fastcall CBitmapColorKey::`scalar deleting destructor'(CBitmapColorKey *this, char a2)
{
  CBitmapColorKey::~CBitmapColorKey(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
