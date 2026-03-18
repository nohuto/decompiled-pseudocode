/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015CE10
 * Callers:
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x18015CB34 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDE.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z @ 0x18015D1F0 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange(CRemoteAppRenderTarget *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      ((unsigned __int64)this + 16) & -(__int64)(this != (CRemoteAppRenderTarget *)64));
    ReleaseInterface<IBitmapLock>((__int64 *)this + 9);
  }
  *((_QWORD *)this + 15) = 0LL;
  ReleaseInterface<IBitmapLock>((__int64 *)this + 14);
}
