/*
 * XREFs of ??0CTokenManager@@AEAA@XZ @ 0x1C002A050
 * Callers:
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     <none>
 */

CTokenManager *__fastcall CTokenManager::CTokenManager(CTokenManager *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 128),
    (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CTokenManager::TokenQueueTableEntry::Allocate,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  return this;
}
