/*
 * XREFs of MiInitializeEnclavePfn @ 0x1402646F8
 * Callers:
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140751D24 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  char v6; // cl
  unsigned __int64 v7; // rcx
  char v8; // al
  __int64 result; // rax
  unsigned __int64 v10; // r9

  v5 = 48 * a1 - 0x58000000000LL;
  MiLockPageInline(v5);
  v6 = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
  *(_QWORD *)(v5 + 8) = a2;
  *(_BYTE *)(v5 + 34) = v6;
  v7 = *(_QWORD *)(v5 + 24) & 0xC000000000000000uLL | 1;
  *(_WORD *)(v5 + 32) = 1;
  v8 = *(_BYTE *)(v5 + 34);
  *(_QWORD *)(v5 + 24) = v7;
  *(_BYTE *)(v5 + 34) = v8 | 0x10;
  *(_QWORD *)(v5 + 16) = MiMakeDemandZeroPte(a3);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  return result;
}
