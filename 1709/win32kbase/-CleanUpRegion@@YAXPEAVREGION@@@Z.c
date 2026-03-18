/*
 * XREFs of ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00EF350
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CleanUpRegion(struct REGION *a1)
{
  REGION::vDeleteREGION(a1);
}
