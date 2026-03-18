/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x14013B66C
 * Callers:
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1)
{
  unsigned __int64 v2; // r8
  char v3; // dl
  char v4; // al
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  v3 = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v4 = *(_BYTE *)(a1 + 35);
  *(_BYTE *)(a1 + 34) = v3;
  *(_BYTE *)(a1 + 34) = v3 & 0xC7;
  *(_BYTE *)(a1 + 35) = v4 & 0xDF;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
