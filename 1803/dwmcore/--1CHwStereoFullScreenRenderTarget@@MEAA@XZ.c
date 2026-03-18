/*
 * XREFs of ??1CHwStereoFullScreenRenderTarget@@MEAA@XZ @ 0x1801F0E60
 * Callers:
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801E7340 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801F1758 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::~CHwStereoFullScreenRenderTarget(
        CHwStereoFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *((_QWORD *)this + 75) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(this);
  ReleaseInterfaceNoNULL<CD3DSurface>(*(_QWORD *)(v2 + 632));
  v3 = *((_QWORD *)this + 80);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 78);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
}
