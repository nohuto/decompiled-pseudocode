/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801B82C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801B82F8 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState((CHwStereoFullScreenRenderTarget *)((char *)this - 192));
  *((_QWORD *)this + 48) = 0LL;
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 49);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
