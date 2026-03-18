/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x1801973B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(CResource *a1)
{
  unsigned int v1; // ebx

  v1 = a1 == 0LL ? 0x80070057 : 0;
  if ( a1 )
    CResource::InvalidateAnimationSources(a1, 57);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xEC9u);
  return v1;
}
