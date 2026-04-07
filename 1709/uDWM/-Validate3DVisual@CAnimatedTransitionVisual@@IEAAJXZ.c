/*
 * XREFs of ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B7B0
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18002EAC0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B88C (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008BD2C (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C110 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate3DVisual(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int updated; // eax
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( (*((_DWORD *)this + 22) & 0x1000) != 0 )
  {
    updated = CAnimatedTransitionVisual::_UpdateAnimated3DResources(this);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x627u);
      return v1;
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
  }
  if ( (*((_DWORD *)this + 22) & 0x2000) != 0 )
  {
    v4 = CAnimatedTransitionVisual::_Ensure3DRenderData(this);
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = CAnimatedTransitionVisual::_Update3DResources(this);
      v1 = v5;
      if ( v5 >= 0 )
        *((_DWORD *)this + 22) &= ~0x2000u;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x630u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x62Fu);
    }
  }
  return v1;
}
