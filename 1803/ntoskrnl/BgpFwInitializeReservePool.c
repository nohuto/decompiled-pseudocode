/*
 * XREFs of BgpFwInitializeReservePool @ 0x14083C66C
 * Callers:
 *     BgpFwReservePoolSwap @ 0x14083B12C (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x14083CFC4 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_1403CDC38 = 0;
  qword_1403CDC30 = a1;
  dword_1403CDC50 = a2;
  stru_1403CDC40.SizeOfBitMap = a2;
  stru_1403CDC40.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_1403CDC40);
}
