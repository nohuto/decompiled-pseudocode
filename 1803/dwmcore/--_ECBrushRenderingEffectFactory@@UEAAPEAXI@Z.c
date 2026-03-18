/*
 * XREFs of ??_ECBrushRenderingEffectFactory@@UEAAPEAXI@Z @ 0x180218520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CBrushRenderingEffectFactory *__fastcall CBrushRenderingEffectFactory::`vector deleting destructor'(
        CBrushRenderingEffectFactory *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
