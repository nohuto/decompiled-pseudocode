/*
 * XREFs of ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x18003CF4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003D240 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  if ( *((float *)this + 115) != a2 )
  {
    *((_BYTE *)this + 508) |= 4u;
    *((float *)this + 115) = fminf(1.0, fmaxf(a2, 0.0));
    CResource::InvalidateAnimationSources(this, 0x21u);
  }
}
