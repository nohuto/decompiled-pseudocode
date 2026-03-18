/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x180171ED8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172070 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z @ 0x180171D9C (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z.c)
 */

void __fastcall CDropShadow::SetBlurRadius(CDropShadow *this, float a2)
{
  if ( *((float *)this + 24) != a2 )
  {
    *((float *)this + 24) = a2;
    if ( a2 > 750.0 )
      *((_DWORD *)this + 24) = 1144750080;
    CDropShadow::InvalidateShadowIntermediate(this, 0);
    CResource::InvalidateAnimationSources(this, 0LL);
  }
}
