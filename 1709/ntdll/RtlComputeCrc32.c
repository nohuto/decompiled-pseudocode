/*
 * XREFs of RtlComputeCrc32 @ 0x180068D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~PartialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = *(_BYTE *)Buffer;
      Buffer = (char *)Buffer + 1;
      v4 = (v4 >> 8) ^ RtlCrc32Table[(unsigned __int8)(v6 ^ v4)];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
