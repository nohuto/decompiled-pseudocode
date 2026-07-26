/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C006E250
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00F4520 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x44u);
}
