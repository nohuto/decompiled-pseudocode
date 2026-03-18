/*
 * XREFs of ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180173C00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1801722BC (--1CCompositionLight@@UEAA@XZ.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::`scalar deleting destructor'(
        CCompositionSpotLight *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionSpotLight::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 25);
  CCompositionLight::~CCompositionLight((void **)this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
