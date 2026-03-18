/*
 * XREFs of MiSwitchKstackPages @ 0x14003BBDC
 * Callers:
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 */

__int64 __fastcall MiSwitchKstackPages(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1);
  MiCopyPfnEntry(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
