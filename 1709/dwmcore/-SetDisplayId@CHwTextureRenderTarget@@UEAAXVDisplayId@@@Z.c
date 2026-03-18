/*
 * XREFs of ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x18008FC00
 * Callers:
 *     ?SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z @ 0x1800C6B30 (-SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800BE1B8 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetDisplayId(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 - 76) )
  {
    *(_DWORD *)(a1 - 76) = a2;
    return ReleaseInterface<CSwRenderTargetGetBounds>(a1 + 64);
  }
  return result;
}
