/*
 * XREFs of _lambda_d6c37b20fdd219b27fc7355a9d04263e_::operator() @ 0x180193484
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019484C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18013E8A0 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 */

void __fastcall lambda_d6c37b20fdd219b27fc7355a9d04263e_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 i; // rbx

  v2 = *a2;
  for ( i = 0LL; i != v2; ++i )
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 240LL),
      **(_QWORD **)(a1 + 8),
      **(_QWORD **)(a1 + 16),
      *(_DWORD *)(a2[1] + 4 * i));
}
