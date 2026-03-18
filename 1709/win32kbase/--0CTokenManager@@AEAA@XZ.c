/*
 * XREFs of ??0CTokenManager@@AEAA@XZ @ 0x1C0036560
 * Callers:
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
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
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 136),
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    CTokenManager::TokenQueueTableEntry::Allocate,
    rimUserMemAllocNodeFree,
    0LL);
  return this;
}
