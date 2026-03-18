/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x1800B9ED0
 * Callers:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800A0E50 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x180155D80 (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1800B9F04 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  return RtlDeleteElementGenericTable(Table, this);
}
