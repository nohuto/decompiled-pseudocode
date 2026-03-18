/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x140132264
 * Callers:
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  *(_QWORD *)(a1 + 8) |= 4uLL;
}
