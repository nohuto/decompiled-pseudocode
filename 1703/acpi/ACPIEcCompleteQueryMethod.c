/*
 * XREFs of ACPIEcCompleteQueryMethod @ 0x1C004CD20
 * Callers:
 *     ACPIEcRunQueryMethod @ 0x1C004CEE4 (ACPIEcRunQueryMethod.c)
 * Callees:
 *     ACPIEcDispatchQueries @ 0x1C004CD8C (ACPIEcDispatchQueries.c)
 */

void __fastcall ACPIEcCompleteQueryMethod(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  KIRQL v6; // al

  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 88));
  if ( *(_BYTE *)(a4 + 122) == 1 )
  {
    *(_BYTE *)(a4 + 122) = 3;
  }
  else if ( *(_BYTE *)(a4 + 122) == 2 )
  {
    *(_BYTE *)(a4 + 122) = 0;
    v5 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 88), v6);
  if ( v5 )
    ACPIEcDispatchQueries(a4);
}
