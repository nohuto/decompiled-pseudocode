/*
 * XREFs of ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x1801A2E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CHwLinearGradientColorSource *__fastcall CHwLinearGradientColorSource::`vector deleting destructor'(
        CHwLinearGradientColorSource *this,
        char a2)
{
  CMILPoolResource *v4; // rcx
  CMILPoolResource *v5; // rcx

  *(_QWORD *)this = &CHwLinearGradientColorSource::`vftable';
  v4 = (CMILPoolResource *)*((_QWORD *)this + 17);
  if ( v4 )
    CMILPoolResource::Release(v4);
  v5 = (CMILPoolResource *)*((_QWORD *)this + 18);
  if ( v5 )
    CMILPoolResource::Release(v5);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
