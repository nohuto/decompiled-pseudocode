/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140150B54
 * Callers:
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiFreeBootPageTable @ 0x14084A574 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x14086C238 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
