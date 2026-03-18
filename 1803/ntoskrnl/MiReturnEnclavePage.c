/*
 * XREFs of MiReturnEnclavePage @ 0x1402648EC
 * Callers:
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140752CD4 (MiReturnReservedEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1408E0A50 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v2 = 48 * a1 - 0x58000000000LL;
  v3 = (unsigned __int8)MiLockPageInline(v2);
  *(_QWORD *)(v2 + 24) &= 0xFFFFFFF000000000uLL;
  MiInsertPageInFreeOrZeroedList(a1, 256);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v3);
  return result;
}
