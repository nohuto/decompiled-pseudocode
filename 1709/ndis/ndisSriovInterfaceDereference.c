/*
 * XREFs of ndisSriovInterfaceDereference @ 0x1C006D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 */

void __fastcall ndisSriovInterfaceDereference(__int64 a1)
{
  ndisDereferenceMiniport(a1, 0x44u);
}
