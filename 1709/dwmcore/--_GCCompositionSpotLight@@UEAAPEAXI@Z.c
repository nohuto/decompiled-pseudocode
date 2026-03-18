/*
 * XREFs of ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x1800A0670
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1800B1520 (--1CCompositionLight@@UEAA@XZ.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::`scalar deleting destructor'(
        CCompositionSpotLight *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionSpotLight::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
