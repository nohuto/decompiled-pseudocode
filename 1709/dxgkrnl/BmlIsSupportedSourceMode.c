/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C01F8574
 * Callers:
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01F8330 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 */

char __fastcall BmlIsSupportedSourceMode(DMMVIDPNSOURCEMODE *a1, char a2, int a3)
{
  char v3; // bl
  int v6; // edx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  int PixelFormat; // eax

  v3 = 0;
  if ( !a1 )
    return 0;
  if ( a3 == 2 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 18) - 3) > 1 )
      return 0;
  }
  else if ( a3 == 1 )
  {
    if ( *((_DWORD *)a1 + 18) != 1 )
      return 0;
  }
  else
  {
    v6 = *((_DWORD *)a1 + 18);
    if ( ((v6 - 1) & 0xFFFFFFFC) != 0 || v6 == 2 )
      return 0;
  }
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1);
  if ( !a2 )
    return 1;
  PixelFormat = GraphicsInfo->PixelFormat;
  if ( PixelFormat >= 20 && (PixelFormat <= 23 || PixelFormat == 32 || PixelFormat == 41) )
    return 1;
  return v3;
}
