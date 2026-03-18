/*
 * XREFs of MiTradeBootImagePage @ 0x1408AE0E0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiTradeBootImagePage(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // r12
  __int64 v6; // rsi
  unsigned __int8 v7; // r13
  char v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-B9h] BYREF
  int v13; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v14; // [rsp+34h] [rbp-A5h]
  __int64 v15; // [rsp+38h] [rbp-A1h]
  __int64 v16; // [rsp+40h] [rbp-99h]
  __int64 v17; // [rsp+48h] [rbp-91h]

  v15 = 20LL;
  v13 = 0;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v12 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v12;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x58000000000LL);
  MiCopyPfnEntry(48 * a2 - 0x58000000000LL, v6);
  v8 = 4;
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    v8 = 6;
  MiCopyPage(a2, v5, 0LL, v8);
  v12 = v4 ^ (v4 ^ (a2 << 12)) & 0xFFFFFFFFF000LL;
  MiWriteValidPteNewPage(a1);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)&v13, (__int64)(a1 << 25) >> 16, 1LL, 0);
  MiFlushTbList((__int64)&v13, v9, v10);
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 3 )
    MiClearPfnImageVerified(48 * v5 - 0x58000000000LL, 12);
  MiDecrementShareCount(48 * v5 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v7;
  __writecr8(v7);
  return result;
}
