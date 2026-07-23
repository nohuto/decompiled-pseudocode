/*
 * XREFs of RtlSetAllBits @ 0x1800815D0
 * Callers:
 *     sub_180007A70 @ 0x180007A70 (sub_180007A70.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  PULONG Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
