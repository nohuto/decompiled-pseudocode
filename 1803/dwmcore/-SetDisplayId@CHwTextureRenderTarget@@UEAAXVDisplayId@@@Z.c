/*
 * XREFs of ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x180078410
 * Callers:
 *     ?SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z @ 0x1800DE1B0 (-SetDisplayId@CHwTextureRenderTarget@@W7EAAXVDisplayId@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800C3D4C (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetDisplayId(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 - 100) )
  {
    *(_DWORD *)(a1 - 100) = a2;
    return ReleaseInterface<CSwRenderTargetGetBounds>(a1 + 64);
  }
  return result;
}
