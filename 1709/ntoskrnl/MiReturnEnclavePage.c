/*
 * XREFs of MiReturnEnclavePage @ 0x140229AD8
 * Callers:
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1406E9118 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiReturnEnclavePage(__int64 a1)
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
