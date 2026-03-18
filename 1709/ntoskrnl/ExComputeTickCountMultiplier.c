/*
 * XREFs of ExComputeTickCountMultiplier @ 0x140853034
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExComputeTickCountMultiplier()
{
  ULONG v0; // ecx
  int v1; // eax
  __int64 v2; // r8

  v0 = KeMaximumIncrement % 0x2710;
  v1 = 0;
  v2 = 24LL;
  do
  {
    v1 *= 2;
    v0 *= 2;
    if ( v0 >= 0x2710 )
    {
      v0 -= 10000;
      v1 |= 1u;
    }
    --v2;
  }
  while ( v2 );
  return ((KeMaximumIncrement / 0x2710) << 24) | v1;
}
