/*
 * XREFs of ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800061E0
 * Callers:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800061F4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::_AtlRaiseException(DWORD a1)
{
  RaiseException(a1, 1u, 0, 0LL);
}
