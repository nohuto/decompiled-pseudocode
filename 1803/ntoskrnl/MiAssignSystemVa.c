/*
 * XREFs of MiAssignSystemVa @ 0x1408BB7D8
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToClear, unsigned int a2)
{
  ULONG v4; // edi
  int v5; // ebx
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rbp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)&unk_1403CBA60;
  if ( NumberToClear <= 2 )
    v4 = (unsigned __int8)ExGenRandom(1);
  else
    v4 = dword_1403CBA80;
  v5 = 16;
  if ( NumberToClear <= 2 )
    v5 = 8;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v4);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet == v4 || !v5 )
    {
      dword_1403CBA80 = (unsigned __int8)(NumberToClear + ClearBitsAndSet + (unsigned int)ExGenRandom(1) % a2);
      return (v7 - 256) << 39;
    }
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToClear);
    v4 = (unsigned __int8)ExGenRandom(1);
  }
  return 0LL;
}
