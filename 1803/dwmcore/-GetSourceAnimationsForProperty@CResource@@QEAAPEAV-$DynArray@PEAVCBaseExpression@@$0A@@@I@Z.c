/*
 * XREFs of ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x180051794
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18003AA70 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800C17DC (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 */

__int64 __fastcall CResource::GetSourceAnimationsForProperty(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 Element; // rax

  v2 = *(_QWORD *)(a1 + 40);
  Element = 0LL;
  if ( v2 )
    Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v2, a2);
  return (Element + 8) & -(__int64)(Element != 0);
}
