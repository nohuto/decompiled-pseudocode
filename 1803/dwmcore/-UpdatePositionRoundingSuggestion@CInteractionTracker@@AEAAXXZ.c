/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180197178
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x180192FF0 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CA07C (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::UpdatePositionRoundingSuggestion(CInteractionTracker *this)
{
  int v1; // eax
  bool IsPositionRoundingSuggestedForActiveManipulation; // dl

  v1 = *((_DWORD *)this + 38);
  IsPositionRoundingSuggestedForActiveManipulation = 0;
  if ( v1 )
  {
    if ( v1 == 1 )
      IsPositionRoundingSuggestedForActiveManipulation = InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation((CInteractionTracker *)((char *)this + 352));
  }
  else
  {
    IsPositionRoundingSuggestedForActiveManipulation = 1;
  }
  if ( (*((_BYTE *)this + 676) & 1) != IsPositionRoundingSuggestedForActiveManipulation )
  {
    *((_BYTE *)this + 676) = IsPositionRoundingSuggestedForActiveManipulation | *((_BYTE *)this + 676) & 0xFE;
    CResource::InvalidateAnimationSources(this, 57);
  }
}
