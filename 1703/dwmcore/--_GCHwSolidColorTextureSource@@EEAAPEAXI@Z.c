/*
 * XREFs of ??_GCHwSolidColorTextureSource@@EEAAPEAXI@Z @ 0x18019C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CHwSolidColorTextureSource *__fastcall CHwSolidColorTextureSource::`scalar deleting destructor'(
        CHwSolidColorTextureSource *this,
        char a2)
{
  CMILPoolResource *v4; // rcx

  *(_QWORD *)this = &CHwSolidColorTextureSource::`vftable';
  v4 = (CMILPoolResource *)*((_QWORD *)this + 13);
  if ( v4 )
    CMILPoolResource::Release(v4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
