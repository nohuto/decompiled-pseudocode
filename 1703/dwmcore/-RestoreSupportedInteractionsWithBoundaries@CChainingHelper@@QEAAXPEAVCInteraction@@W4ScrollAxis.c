/*
 * XREFs of ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180188944
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801824AC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     _lambda_2ee6e74848a4ca29603542c81c185b92_::operator() @ 0x180188754 (_lambda_2ee6e74848a4ca29603542c81c185b92_--operator().c)
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
