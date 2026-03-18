/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x18016F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(CResource *a1)
{
  DWORD v1; // ebx

  v1 = a1 == 0LL ? 0x80070057 : 0;
  if ( a1 )
    CResource::InvalidateAnimationSources(a1);
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x10BFu);
  return v1;
}
