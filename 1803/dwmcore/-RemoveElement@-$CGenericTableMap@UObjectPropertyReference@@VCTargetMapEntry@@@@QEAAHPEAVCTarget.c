/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x18013FB88
 * Callers:
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18017ED68 (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180038488 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  return RtlDeleteElementGenericTable(Table, this);
}
