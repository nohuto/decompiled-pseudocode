/*
 * XREFs of ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801B82F8
 * Callers:
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801ADF90 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801B82C0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(CHwStereoFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 72);
  if ( v1 && *((_QWORD *)this + 23) != v1 )
    *((_QWORD *)this + 23) = v1;
  *((_DWORD *)this + 142) = 0;
}
