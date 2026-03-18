/*
 * XREFs of _lambda_b08b79b307586b4cb04ea7780a7f8202_::operator() @ 0x1801CBB88
 * Callers:
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1801CA84C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180193948 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180196A38 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x180196AF0 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x1801CBD30 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

void __fastcall lambda_b08b79b307586b4cb04ea7780a7f8202_::operator()(__int64 a1, int a2)
{
  __int64 v3; // rdi
  float CurrentValue; // xmm0_4
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r9
  char v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // [rsp+20h] [rbp-18h]

  v3 = a2;
  CurrentValue = CInteractionTracker::GetCurrentValue(**(_QWORD **)a1, a2);
  v5 = CInteractionTracker::BoundaryFromValue(**(_QWORD **)a1, CurrentValue, v3);
  CInteractionTracker::ShouldChainAllForAxis(v6, v3, **(_QWORD **)(a1 + 16));
  LOBYTE(v9) = CInteractionTracker::ShouldChainForAxis(v7, v3, v8, 1u);
  v13 = v10;
  CChainingHelper::RestoreSupportedInteractionsWithBoundaries(*(_QWORD *)(a1 + 8), (unsigned int)v3, v5, v9, v13);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 3 * v3;
  *(_BYTE *)(v11 + 4 * v12) &= ~4u;
  *(_DWORD *)(v11 + 4 * v12 + 8) = 0;
  *(_BYTE *)(v11 + 36) |= 2u;
  CChainingHelper::UpdateConfigurationIfDirty(*(CChainingHelper **)(a1 + 8));
}
