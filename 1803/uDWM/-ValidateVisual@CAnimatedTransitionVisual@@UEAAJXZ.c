/*
 * XREFs of ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180011860
 * Callers:
 *     <none>
 * Callees:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011698 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011780 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009487C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800957D4 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ValidateVisual(CAnimatedTransitionVisual *this)
{
  CAnimatedTransitionVisual *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // eax
  int v9; // eax

  v1 = (CAnimatedTransitionVisual *)((char *)this - 8);
  v3 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)((char *)this - 8));
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3C2u);
  }
  else
  {
    if ( *((_BYTE *)this + 976) )
    {
      v8 = CAnimatedTransitionVisual::Validate3DVisual(v1);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3C6u);
        return v4;
      }
    }
    else if ( *((_BYTE *)this + 968) )
    {
      v9 = CAnimatedTransitionVisual::_ValidateDCompVisual(v1);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3CAu);
        return v4;
      }
    }
    else
    {
      v5 = CAnimatedTransitionVisual::Validate2DVisual((CVisual ***)v1);
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3CEu);
        return v4;
      }
    }
    v6 = CRenderDataVisual::ValidateVisual(this);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3D1u);
  }
  return v4;
}
