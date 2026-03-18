/*
 * XREFs of ?ProcessSetOffset@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETOFFSET@@@Z @ 0x180186220
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetOffset(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETOFFSET *a3)
{
  D3DVALUE v3; // xmm0_4
  D3DVALUE v4; // xmm1_4
  D3DVALUE v5; // xmm0_4
  struct _D3DCOLORVALUE v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((double *)a3 + 1);
  v4 = *((double *)a3 + 2);
  v7.r = v3;
  v5 = *((double *)a3 + 3);
  v7.g = v4;
  v7.b = v5;
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CCompositionSkyBoxBrush::sc_Offset,
           &v7);
}
