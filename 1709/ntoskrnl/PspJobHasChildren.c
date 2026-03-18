/*
 * XREFs of PspJobHasChildren @ 0x140717A38
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x1405BFEB8 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140714F44 (PspCreateSilo.c)
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
