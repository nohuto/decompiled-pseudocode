/*
 * XREFs of ??0CWindowManager@@QEAA@XZ @ 0x1801302B0
 * Callers:
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x180130578 (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CWindowManager *__fastcall CWindowManager::CWindowManager(CWindowManager *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWindowManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 48),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowManager::SPRITEENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  return this;
}
