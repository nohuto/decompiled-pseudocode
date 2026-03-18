/*
 * XREFs of ?IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ @ 0x18008EED0
 * Callers:
 *     ?CompareTo@CCommonRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x18001F320 (-CompareTo@CCommonRenderingEffect@@UEBA-AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AE.c)
 * Callees:
 *     <none>
 */

char __fastcall CAtlasImageSource::IsWhitePixelInTopLeft(CAtlasImageSource *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 36) )
      return 1;
  }
  return result;
}
