/*
 * XREFs of RtlInterlockedClearBitRun @ 0x1800808F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInterlockedClearBitRun(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  ULONG v3; // r9d
  char v4; // r11
  volatile signed __int32 *v5; // r10
  ULONG v6; // edx
  unsigned __int64 v7; // rax

  v3 = NumberToClear;
  v4 = StartingIndex;
  v5 = (volatile signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5];
  if ( NumberToClear + (unsigned __int64)(StartingIndex & 0x1F) > 0x20 )
  {
    v6 = StartingIndex & 0x1F;
    if ( v6 )
    {
      _InterlockedAnd(v5, ~(((1 << (32 - v6)) - 1) << (v4 & 0x1F)));
      v3 = NumberToClear - (32 - v6);
      ++v5;
    }
    if ( v3 >= 0x20 )
    {
      v7 = (unsigned __int64)v3 >> 5;
      do
      {
        *v5 = 0;
        v3 -= 32;
        ++v5;
        --v7;
      }
      while ( v7 );
    }
    if ( v3 )
      _InterlockedAnd(v5, ~((1 << v3) - 1));
  }
  else if ( NumberToClear == 32 )
  {
    *v5 = 0;
  }
  else
  {
    _InterlockedAnd(v5, ~(((1 << NumberToClear) - 1) << (StartingIndex & 0x1F)));
  }
}
