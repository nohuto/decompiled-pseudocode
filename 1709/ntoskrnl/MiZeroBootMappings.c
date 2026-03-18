/*
 * XREFs of MiZeroBootMappings @ 0x14084A3F8
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     MxZeroBootMappings @ 0x14084A468 (MxZeroBootMappings.c)
 */

unsigned __int64 MiZeroBootMappings()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // r9

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
  return KeFlushCurrentTbOnly(1);
}
