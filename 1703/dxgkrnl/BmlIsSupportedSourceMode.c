/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C01DF494
 * Callers:
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01DF248 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 */

char __fastcall BmlIsSupportedSourceMode(DMMVIDPNSOURCEMODE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  int PixelFormat; // eax

  v4 = 0;
  v5 = a2;
  if ( !a1 )
    return 0;
  if ( (_BYTE)a3 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 18) - 3) > 1 )
      return 0;
  }
  else if ( *((_DWORD *)a1 + 18) != 1 )
  {
    return 0;
  }
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1, a2, a3, a4);
  if ( !v5 )
    return 1;
  PixelFormat = GraphicsInfo->PixelFormat;
  if ( PixelFormat >= 20 && (PixelFormat <= 23 || PixelFormat == 32 || PixelFormat == 41) )
    return 1;
  return v4;
}
