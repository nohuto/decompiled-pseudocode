/*
 * XREFs of MiAssignSystemVa @ 0x14081142C
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1408111C0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToClear, unsigned int a2)
{
  ULONG v4; // ebx
  int v5; // edi
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)&unk_14036C4D8;
  if ( NumberToClear <= 2 )
  {
    v8 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_7;
  }
  v4 = dword_14036C4F8;
  v5 = 16;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v4);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet == v4 || !v5 )
    {
      dword_14036C4F8 = (unsigned __int8)(NumberToClear + ClearBitsAndSet + (unsigned int)ExGenRandom(1) % a2);
      return (v7 - 256) << 39;
    }
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToClear);
    v8 = ExGenRandom(1);
LABEL_7:
    v4 = v8;
  }
  return 0LL;
}
