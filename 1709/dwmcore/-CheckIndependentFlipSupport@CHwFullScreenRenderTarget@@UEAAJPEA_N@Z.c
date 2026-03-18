/*
 * XREFs of ?CheckIndependentFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801B85C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckIndependentFlipSupport(CHwFullScreenRenderTarget *this, bool *a2)
{
  *a2 = *(_DWORD *)(*((_QWORD *)this + 3) + 248LL) >= 1300;
  return 0LL;
}
