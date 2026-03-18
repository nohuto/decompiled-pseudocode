/*
 * XREFs of ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C01C8C2C
 * Callers:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01CA0A4 (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumberOfLeadingZeros(unsigned __int64 a1)
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
    LODWORD(v2) = v2 - 8;
    a1 >>= 8;
  }
  if ( a1 >> 4 )
  {
    LODWORD(v2) = v2 - 4;
    a1 >>= 4;
  }
  if ( a1 >> 2 )
  {
    LODWORD(v2) = v2 - 2;
    a1 >>= 2;
  }
  if ( a1 < 2 )
    return (unsigned int)(v2 - a1);
  else
    return (unsigned int)(v2 - 2);
}
