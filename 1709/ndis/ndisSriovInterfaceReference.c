/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C006DA00
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00F19D0 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1);
}
