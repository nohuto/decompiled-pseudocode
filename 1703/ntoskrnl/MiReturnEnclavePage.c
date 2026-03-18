/*
 * XREFs of MiReturnEnclavePage @ 0x14021CC10
 * Callers:
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1406BBDE0 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
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
