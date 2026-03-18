/*
 * XREFs of ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x180173370
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1801722BC (--1CCompositionLight@@UEAA@XZ.c)
 */

struct CResource **__fastcall CCompositionDistantLight::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCompositionDistantLight::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CCompositionLight::~CCompositionLight((void **)this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
