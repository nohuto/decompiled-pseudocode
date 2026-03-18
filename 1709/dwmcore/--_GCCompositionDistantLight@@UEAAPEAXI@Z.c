/*
 * XREFs of ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x18015ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1800B1520 (--1CCompositionLight@@UEAA@XZ.c)
 */

struct CResource **__fastcall CCompositionDistantLight::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCompositionDistantLight::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CCompositionLight::~CCompositionLight((void **)this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
