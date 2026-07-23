/*
 * XREFs of RtlComputeCrc32 @ 0x180066940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // dl

  v4 = ~PartialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = *(_BYTE *)Buffer ^ v4;
      Buffer = (char *)Buffer + 1;
      v4 = (v4 >> 8) ^ dword_18011A1D0[v6];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
