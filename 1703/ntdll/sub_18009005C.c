/*
 * XREFs of sub_18009005C @ 0x18009005C
 * Callers:
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009005C(__int64 a1)
{
  __int64 result; // rax
  int v2; // r8d
  int v3; // edx
  int *v4; // rcx
  __int64 v5; // r10

  result = 0LL;
  v2 = 0x7FFFFFFF;
  v3 = 0;
  if ( dword_18015BFF0 )
  {
    v4 = *(int **)(a1 + 40);
    v5 = (unsigned int)dword_18015BFF0;
    do
    {
      if ( v3 < *v4 )
        v3 = *v4;
      if ( v2 > *v4 )
        v2 = *v4;
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 > 0 && v3 - v2 < 4 )
    return 1LL;
  return result;
}
