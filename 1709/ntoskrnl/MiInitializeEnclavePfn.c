/*
 * XREFs of MiInitializeEnclavePfn @ 0x1402298F0
 * Callers:
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1406E8318 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // r9

  v5 = 48 * a1 - 0x58000000000LL;
  MiLockPageInline(v5);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
  v6 = *(_QWORD *)(v5 + 24) & 0xC000000000000000uLL | 1;
  *(_WORD *)(v5 + 32) = 1;
  *(_QWORD *)(v5 + 24) = v6;
  *(_BYTE *)(v5 + 34) |= 0x10u;
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 16) = MiMakeDemandZeroPte(a3);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  return result;
}
