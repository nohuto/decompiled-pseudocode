/*
 * XREFs of ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C01A53B8
 * Callers:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01A67F8 (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NumberOfLeadingZeros(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = HIDWORD(a1);
  if ( HIDWORD(a1) )
    a1 >>= 32;
  v2 = (-(__int64)(v1 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 64;
  if ( a1 >> 16 )
  {
    v2 = (-(__int64)(v1 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 48;
    a1 >>= 16;
  }
  if ( a1 >> 8 )
  {
    v2 -= 8LL;
    a1 >>= 8;
  }
  if ( a1 >> 4 )
  {
    v2 -= 4LL;
    a1 >>= 4;
  }
  if ( a1 >> 2 )
  {
    v2 -= 2LL;
    a1 >>= 2;
  }
  if ( a1 < 2 )
    return (unsigned int)(v2 - a1);
  else
    return v2 - 2;
}
