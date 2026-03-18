/*
 * XREFs of MiZeroBootMappings @ 0x1408BBF64
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     MxZeroBootMappings @ 0x1408BBFD4 (MxZeroBootMappings.c)
 */

__int64 MiZeroBootMappings()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8

  v0 = 0xFFFFF68000000000uLL;
  v1 = 0xFFFFF6C000000000uLL;
  v2 = 3LL;
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  MxZeroBootMappings(v0, v1);
  return KeFlushCurrentTbOnly(1LL, v3, v4);
}
