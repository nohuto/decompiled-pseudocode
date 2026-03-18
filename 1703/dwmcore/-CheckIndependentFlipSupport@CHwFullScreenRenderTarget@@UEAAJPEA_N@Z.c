/*
 * XREFs of ?CheckIndependentFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801A09F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckIndependentFlipSupport(CHwFullScreenRenderTarget *this, bool *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 3) + 244LL) >= 1300;
  return result;
}
