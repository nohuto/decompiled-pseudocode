/*
 * XREFs of MiSwitchKstackPages @ 0x1400027AC
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwitchKstackPages(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline();
  MiCopyPfnEntry(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
