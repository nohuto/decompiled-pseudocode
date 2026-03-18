/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x14017EC2C
 * Callers:
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiFreeBootPageTable @ 0x1408BC09C (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x1408E0F5C (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
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
