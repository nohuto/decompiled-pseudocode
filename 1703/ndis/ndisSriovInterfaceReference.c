/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C006C490
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00E8458 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x44u);
}
