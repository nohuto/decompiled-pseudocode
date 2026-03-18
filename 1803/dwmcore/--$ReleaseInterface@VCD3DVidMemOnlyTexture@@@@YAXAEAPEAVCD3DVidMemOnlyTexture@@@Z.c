/*
 * XREFs of ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801EE128
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801F0700 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801F77C0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180215F50 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CD3DVidMemOnlyTexture>(CMILPoolResource **a1)
{
  CMILPoolResource *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILPoolResource::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
