/*
 * XREFs of ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800C3C50
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18004AA0C (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 *     ??_ECHwSolidBrush@@WBA@EAAPEAXI@Z @ 0x1800D65D0 (--_ECHwSolidBrush@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800C3E54 (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
