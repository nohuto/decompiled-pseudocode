/*
 * XREFs of MiAssignSystemVa @ 0x140839F54
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140839D10 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
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
  BitMapHeader.Buffer = (unsigned int *)&unk_140388860;
  if ( NumberToClear <= 2 )
  {
    v8 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_7;
  }
  v4 = dword_140388880;
  v5 = 16;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v4);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet == v4 || !v5 )
    {
      dword_140388880 = (unsigned __int8)(NumberToClear + ClearBitsAndSet + (unsigned int)ExGenRandom(1) % a2);
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
