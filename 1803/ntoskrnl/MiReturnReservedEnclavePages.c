/*
 * XREFs of MiReturnReservedEnclavePages @ 0x140752CD4
 * Callers:
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiDeleteEnclavePages @ 0x14075220C (MiDeleteEnclavePages.c)
 *     MiInitializeEnclave @ 0x1407523EC (MiInitializeEnclave.c)
 * Callees:
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     MiReturnEnclavePage @ 0x1402648EC (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a2 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 96);
      if ( !v3 )
        break;
      *(_QWORD *)(a1 + 96) = MiGetPfnLink(v3);
      MiReturnEnclavePage((v4 + 0x58000000000LL) / 48);
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
}
