/*
 * XREFs of RtlClearBit @ 0x14002F8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _bittestandreset((signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
