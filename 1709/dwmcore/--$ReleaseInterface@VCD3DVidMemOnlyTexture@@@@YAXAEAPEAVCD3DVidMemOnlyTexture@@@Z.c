/*
 * XREFs of ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801B4444
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801B6160 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801BCC98 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1801D4020 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
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
