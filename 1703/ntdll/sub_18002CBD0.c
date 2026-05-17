/*
 * XREFs of sub_18002CBD0 @ 0x18002CBD0
 * Callers:
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002CBD0(unsigned int a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = (a2 - 8) ^ qword_18015BFA8 ^ *(_DWORD *)(a2 - 8);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
