/*
 * XREFs of ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x180196788
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x180194ED0 (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180196500 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetScaleInertiaDecayRate(CInteractionTracker *this, float a2)
{
  float v2; // xmm2_4

  v2 = fminf(1.0, fmaxf(1.0 - a2, 0.0));
  if ( *((float *)this + 37) != v2 )
    *((float *)this + 37) = v2;
  CResource::InvalidateAnimationSources(this, 61);
}
