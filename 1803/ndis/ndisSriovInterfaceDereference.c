/*
 * XREFs of ndisSriovInterfaceDereference @ 0x1C006E230
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 */

void __fastcall ndisSriovInterfaceDereference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ndisDereferenceMiniport(a1, 0x44u, a3, a4);
}
