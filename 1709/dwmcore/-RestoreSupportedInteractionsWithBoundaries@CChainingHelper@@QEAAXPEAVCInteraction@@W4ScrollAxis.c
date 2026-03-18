/*
 * XREFs of ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180192628
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     _lambda_8380e597ab6a1cbcc934487904c94e86_::operator() @ 0x180192434 (_lambda_8380e597ab6a1cbcc934487904c94e86_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  __int64 result; // rax
  __int64 v8; // rcx

  if ( a4 && a5 )
    return CChainingHelper::ChainToParent(a1, a1, a3, a4, a6);
  result = a3;
  v8 = 3LL * a3;
  *(_BYTE *)(a1 + 4 * v8) &= ~2u;
  *(_DWORD *)(a1 + 4 * v8 + 4) = 0;
  *(_BYTE *)(a1 + 36) |= 1u;
  return result;
}
