/*
 * XREFs of ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174980
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800704D8 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CNineGridBrush::SetProperty(CResource *a1, int a2, int a3)
{
  unsigned int v3; // ebx
  float *InsetFieldPointer; // rax
  CSpriteVisualContent *v6; // rcx
  float *v7; // r9

  v3 = 0;
  if ( a3 == 18 && (InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(a1, a2)) != 0LL )
  {
    if ( *InsetFieldPointer != *v7 )
    {
      *InsetFieldPointer = *v7;
      CSpriteVisualContent::ReleasePrimitiveCaches(v6);
      CResource::InvalidateAnimationSources(a1);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x120u);
  }
  return v3;
}
