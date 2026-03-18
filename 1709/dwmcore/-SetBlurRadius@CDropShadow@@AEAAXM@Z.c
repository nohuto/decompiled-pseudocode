/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18016103C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180161250 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z @ 0x180160D38 (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z.c)
 */

void __fastcall CDropShadow::SetBlurRadius(CDropShadow *this, float a2)
{
  __int64 **v3; // rsi
  __int64 **i; // rbx

  if ( *((float *)this + 40) != a2 )
  {
    *((float *)this + 40) = a2;
    if ( a2 > 750.0 )
      *((_DWORD *)this + 40) = 1144750080;
    CDropShadow::InvalidateShadowIntermediate(this, 0, (CDropShadow *)((char *)this + 200));
    v3 = (__int64 **)*((_QWORD *)this + 10);
    for ( i = (__int64 **)*v3; i != v3; i = (__int64 **)*i )
      CDropShadow::InvalidateShadowIntermediate(this, 0, (struct CDropShadow::ShadowIntermediates *)(i + 3));
    CResource::InvalidateAnimationSources(this);
  }
}
