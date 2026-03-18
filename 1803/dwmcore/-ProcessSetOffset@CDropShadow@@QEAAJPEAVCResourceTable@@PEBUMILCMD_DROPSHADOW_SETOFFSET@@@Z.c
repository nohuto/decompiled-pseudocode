/*
 * XREFs of ?ProcessSetOffset@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETOFFSET@@@Z @ 0x18018A8A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CDropShadow::ProcessSetOffset(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETOFFSET *a3)
{
  D3DVALUE v3; // xmm1_4
  struct _D3DCOLORVALUE v5; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((float *)a3 + 3);
  v5.r = *((D3DVALUE *)a3 + 2);
  v5.b = *((D3DVALUE *)a3 + 4);
  v5.g = v3;
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CDropShadow::sc_Offset,
           &v5);
}
