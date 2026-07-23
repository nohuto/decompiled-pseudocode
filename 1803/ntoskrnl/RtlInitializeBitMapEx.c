/*
 * XREFs of RtlInitializeBitMapEx @ 0x140288690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeBitMapEx(PRTL_BITMAP_EX BitMapHeader, PULONG64 BitMapBuffer, ULONG64 SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
