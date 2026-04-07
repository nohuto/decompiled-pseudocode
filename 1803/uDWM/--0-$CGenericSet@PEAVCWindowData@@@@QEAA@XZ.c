/*
 * XREFs of ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x18003FD20
 * Callers:
 *     ??0CWindowList@@QEAA@XZ @ 0x18003E3CC (--0CWindowList@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_GENERIC_TABLE *__fastcall CGenericSet<CWindowData *>::CGenericSet<CWindowData *>(
        struct _RTL_GENERIC_TABLE *a1)
{
  RtlInitializeGenericTable(
    a1,
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)WPF::Free,
    0LL);
  return a1;
}
