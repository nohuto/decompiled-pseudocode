/*
 * XREFs of PspJobHasChildren @ 0x1406E1704
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x1405A3A00 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1406DEAE8 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 216) || *(_QWORD *)(a1 + 1056) != a1 + 1056 )
    return 1;
  return v1;
}
