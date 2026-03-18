/*
 * XREFs of _lambda_2ee6e74848a4ca29603542c81c185b92_::operator() @ 0x180188754
 * Callers:
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180188978 (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18016C460 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18016E628 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18016E6EC (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180188944 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x1801889B8 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

void __fastcall lambda_2ee6e74848a4ca29603542c81c185b92_::operator()(__int64 a1, int a2)
{
  __int64 v3; // r14
  float CurrentValue; // xmm0_4
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // ebp
  unsigned int v8; // r15d
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-20h]

  v3 = a2;
  CurrentValue = CInteractionTracker::GetCurrentValue(**(_QWORD **)a1, a2);
  v5 = CInteractionTracker::BoundaryFromValue(**(_QWORD **)a1, CurrentValue, v3);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v8 = v5;
  if ( *(int *)(v6 + 16) > 0 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v9 + v10) )
      {
        LOBYTE(v17) = CInteractionTracker::ShouldChainAllForAxis(v10, v3, *(_QWORD *)(v9 + *(_QWORD *)v6));
        LOBYTE(v16) = CInteractionTracker::ShouldChainForAxis(v11, v3, v12, 1u);
        CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
          *(_QWORD *)(a1 + 16),
          v13,
          (unsigned int)v3,
          v8,
          v16,
          v17);
        v14 = *(_QWORD *)(a1 + 16);
        v15 = 3 * v3;
        *(_BYTE *)(v14 + 4 * v15) &= ~4u;
        *(_DWORD *)(v14 + 4 * v15 + 8) = 0;
        *(_BYTE *)(v14 + 36) |= 2u;
        CChainingHelper::UpdateConfigurationIfDirty(
          *(CChainingHelper **)(a1 + 16),
          *(struct CInteraction **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + v9));
      }
      v6 = *(_QWORD *)(a1 + 8);
      ++v7;
      v9 += 8LL;
    }
    while ( v7 < *(_DWORD *)(v6 + 16) );
  }
}
