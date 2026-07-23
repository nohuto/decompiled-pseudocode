/*
 * XREFs of BgpFwInitializeReservePool @ 0x1407D0848
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x1407D39C4 (BgpFwReservePoolSwap.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_14038D028 = 0;
  qword_14038D020 = a1;
  dword_14038D040 = a2;
  stru_14038D030.SizeOfBitMap = a2;
  stru_14038D030.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_14038D030);
}
