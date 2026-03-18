/*
 * XREFs of PspJobHasChildren @ 0x14077BA58
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140620658 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140779130 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1056) != a1 + 1056 )
    return 1;
  return v1;
}
