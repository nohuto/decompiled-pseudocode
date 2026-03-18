/*
 * XREFs of ??0CTokenManager@@AEAA@XZ @ 0x1C004A00C
 * Callers:
 *     ?CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z @ 0x1C004A3C4 (-CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z.c)
 * Callees:
 *     <none>
 */

CTokenManager *__fastcall CTokenManager::CTokenManager(CTokenManager *this)
{
  *(_QWORD *)this = &CTokenManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 13) = 1LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 39) = (char *)this + 304;
  *((_QWORD *)this + 38) = (char *)this + 304;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 34) = (char *)this + 264;
  *((_QWORD *)this + 33) = (char *)this + 264;
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 36) = (char *)this + 288;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 192),
    (PRTL_GENERIC_COMPARE_ROUTINE)CTokenManager::TokenQueueTableEntry::Compare,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CTokenManager::TokenQueueTableEntry::Allocate,
    (PRTL_GENERIC_FREE_ROUTINE)CTokenManager::TokenQueueTableEntry::Free,
    0LL);
  return this;
}
