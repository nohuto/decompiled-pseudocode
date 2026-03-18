/*
 * XREFs of _lambda_33703150b5e965453f86618a52381b33_::operator() @ 0x18016AAAC
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18016BFF4 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18011BD2C (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 */

void __fastcall lambda_33703150b5e965453f86618a52381b33_::operator()(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx

  v2 = *(int **)a2;
  v3 = 0LL;
  v5 = 4LL * *(_QWORD *)(a2 + 8);
  v6 = v5 + *(_QWORD *)a2;
  v7 = v5 >> 2;
  if ( *(_QWORD *)a2 > v6 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      CExpressionManager::InsertExpressionsInOrderForTarget(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 216LL),
        **(_QWORD **)(a1 + 8),
        **(_QWORD **)(a1 + 16),
        *v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v7 );
  }
}
