/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x14007F288
 * Callers:
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  *(_QWORD *)(a1 + 8) |= 4uLL;
}
