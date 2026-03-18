/*
 * XREFs of ??_ECHoverPointerSource@@UEAAPEAXI@Z @ 0x18017BE40
 * Callers:
 *     ??_ECHoverPointerSource@@W7EAAPEAXI@Z @ 0x1800D5E90 (--_ECHoverPointerSource@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CHoverPointerSource *__fastcall CHoverPointerSource::`vector deleting destructor'(CHoverPointerSource *this, char a2)
{
  CResource::~CResource((CHoverPointerSource *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
