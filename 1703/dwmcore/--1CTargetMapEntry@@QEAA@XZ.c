/*
 * XREFs of ??1CTargetMapEntry@@QEAA@XZ @ 0x18002AAF0
 * Callers:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18002CCE0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180133AB4 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x180133AFC (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTarget.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
    WPF::ProcessHeapImpl::Free(v2);
  }
}
