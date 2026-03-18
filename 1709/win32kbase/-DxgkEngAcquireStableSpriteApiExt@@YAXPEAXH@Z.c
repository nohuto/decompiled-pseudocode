/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00F2C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( (int)IsDxgkEngAcquireStableSpriteSupported() >= 0 )
    DxgkEngAcquireStableSprite(a1, a2);
}
