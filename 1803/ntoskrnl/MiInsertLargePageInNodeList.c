/*
 * XREFs of MiInsertLargePageInNodeList @ 0x140136628
 * Callers:
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiEnableNewPfns @ 0x140252650 (MiEnableNewPfns.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 */

void __fastcall MiInsertLargePageInNodeList(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  MiInsertLargePageInNodeListHelper(a1, a2, a3, 0);
}
