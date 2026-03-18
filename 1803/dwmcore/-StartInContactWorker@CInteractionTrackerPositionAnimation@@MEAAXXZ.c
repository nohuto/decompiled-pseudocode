/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1801BF670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x180196AF0 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ @ 0x1801CAAA8 (-TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  char ShouldChainForAxis; // bl
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 *v5; // rcx
  int v6; // xmm6_4
  struct CManipulation *ActiveManipulation; // rbp
  InteractionSourceManager *v8; // r9
  __int64 v9; // rcx
  float CurrentValue; // xmm0_4

  ShouldChainForAxis = 0;
  v2 = *((_QWORD *)this + 37);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 8);
  else
    v4 = 0LL;
  v5 = (__int64 *)((char *)this + 544);
  if ( *v5 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v5);
  v6 = *(_DWORD *)(v4 + 664);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v4 + 352));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v8) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                           v9,
                           *((_DWORD *)this + 73),
                           (__int64)ActiveManipulation,
                           0);
  CurrentValue = CInteractionTracker::GetCurrentValue(v4, *((_DWORD *)this + 73));
  *((float *)this + 113) = CurrentValue;
  *((float *)this + 148) = CurrentValue;
  *((_DWORD *)this + 149) = v6;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 408), ShouldChainForAxis);
}
