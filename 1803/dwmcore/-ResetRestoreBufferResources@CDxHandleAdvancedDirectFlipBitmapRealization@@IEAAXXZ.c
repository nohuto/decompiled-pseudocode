/*
 * XREFs of ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x180214450
 * Callers:
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x180213C2C (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180214350 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 *     ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x180214430 (-ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 424);
  v3 = *((_QWORD *)this + 53);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 400LL))(v3, 0LL);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 52);
  ReleaseInterface<IRenderTargetBitmap>(v1);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 54);
  *((_BYTE *)this + 441) = 0;
}
