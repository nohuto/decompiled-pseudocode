/*
 * XREFs of ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x18007EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007E9D8 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::ValidateVisual(CAnimatedGlassSheet *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CAnimatedGlassSheet::UpdateTransition(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x268u);
  return v3;
}
