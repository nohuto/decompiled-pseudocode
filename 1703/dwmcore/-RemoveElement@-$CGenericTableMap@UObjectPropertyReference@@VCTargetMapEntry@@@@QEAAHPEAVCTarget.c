/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x180133AFC
 * Callers:
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18015FD10 (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x18002AAF0 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  return RtlDeleteElementGenericTable(Table, this);
}
