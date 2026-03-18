/*
 * XREFs of ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801F1758
 * Callers:
 *     ??1CHwStereoFullScreenRenderTarget@@MEAA@XZ @ 0x1801F0E60 (--1CHwStereoFullScreenRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801F16E0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(CHwStereoFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 77);
  if ( v1 && *((_QWORD *)this + 25) != v1 )
    *((_QWORD *)this + 25) = v1;
  *((_DWORD *)this + 152) = 0;
}
