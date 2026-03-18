/*
 * XREFs of MiReturnReservedEnclavePages @ 0x1406E9118
 * Callers:
 *     MiDeleteEnclavePages @ 0x1406E87CC (MiDeleteEnclavePages.c)
 *     MiInitializeEnclave @ 0x1406E8970 (MiInitializeEnclave.c)
 * Callees:
 *     MiGetPfnLink @ 0x14012FE20 (MiGetPfnLink.c)
 *     MiReturnEnclavePage @ 0x140229AD8 (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1)
{
  __int64 v2; // rcx

  while ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = MiGetPfnLink(*(_QWORD *)(a1 + 80));
    MiReturnEnclavePage((v2 + 0x58000000000LL) / 48);
  }
  *(_QWORD *)(a1 + 88) = 0LL;
}
