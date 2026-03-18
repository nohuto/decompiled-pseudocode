/*
 * XREFs of BgpFwInitializeReservePool @ 0x140755FB0
 * Callers:
 *     BgpFwReservePoolSwap @ 0x14075512C (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_14036E368 = a1;
  dword_14036E388 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
