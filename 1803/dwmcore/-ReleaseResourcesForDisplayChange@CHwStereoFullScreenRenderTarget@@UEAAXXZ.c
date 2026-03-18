/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801F16E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801F1758 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState((CHwStereoFullScreenRenderTarget *)((char *)this - 216));
  *((_QWORD *)this + 50) = 0LL;
  v2 = *((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 52);
  v3 = *((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
