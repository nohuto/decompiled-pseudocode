/*
 * XREFs of ContNum @ 0x1C02C8EE4
 * Callers:
 *     DoubleCheckLinkColor @ 0x1C02C8F20 (DoubleCheckLinkColor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContNum(__int64 a1, int a2)
{
  __int64 v2; // r10
  int v3; // r8d
  __int16 *v4; // rcx
  __int64 i; // r9
  __int64 result; // rax

  v2 = *(__int16 *)(a1 + 80);
  v3 = 0;
  if ( (int)v2 > 0 )
  {
    v4 = *(__int16 **)(a1 + 64);
    for ( i = 0LL; i < v2; ++i )
    {
      if ( a2 <= *v4 )
        break;
      ++v3;
      ++v4;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v3 < (int)v2 )
    return (unsigned int)v3;
  return result;
}
