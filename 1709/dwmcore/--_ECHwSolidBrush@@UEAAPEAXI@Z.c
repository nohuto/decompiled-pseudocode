/*
 * XREFs of ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800859C4
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18007BC8C (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 *     ??_ECHwSolidBrush@@WBA@EAAPEAXI@Z @ 0x1800C6E20 (--_ECHwSolidBrush@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x180086700 (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CHwSolidBrush *__fastcall CHwSolidBrush::`vector deleting destructor'(CHwSolidBrush *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CHwSolidBrush::`vftable'{for `CHwBrush'};
  *((_QWORD *)this + 2) = &CHwSolidBrush::`vftable'{for `CHwConstantMilColorFColorSource'};
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CHwConstantColorSource::~CHwConstantColorSource((CHwSolidBrush *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
