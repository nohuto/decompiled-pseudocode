/*
 * XREFs of MiShouldLockPteDirectly @ 0x14003E0E8
 * Callers:
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MiWalkVaCheckCommon @ 0x1400AD024 (MiWalkVaCheckCommon.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiShouldLockPteDirectly(__int64 a1, unsigned __int64 a2)
{
  return (*(_BYTE *)(a1 + 184) & 7) == 0 || a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL;
}
