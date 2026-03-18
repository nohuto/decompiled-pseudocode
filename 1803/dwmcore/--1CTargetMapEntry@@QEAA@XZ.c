/*
 * XREFs of ??1CTargetMapEntry@@QEAA@XZ @ 0x180038488
 * Callers:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003A920 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x18013FB40 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x18013FB88 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTarget.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTargetMapEntry::~CTargetMapEntry(CTargetMapEntry *this)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)v1[2];
    operator delete(v2, 0x18uLL);
  }
}
