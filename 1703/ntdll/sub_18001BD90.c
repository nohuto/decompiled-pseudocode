/*
 * XREFs of sub_18001BD90 @ 0x18001BD90
 * Callers:
 *     sub_18001BB44 @ 0x18001BB44 (sub_18001BB44.c)
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001BD90(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v5; // ecx

  v2 = *(_DWORD *)(a2 - 96);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > v2 )
    return 1LL;
  v5 = *(_DWORD *)(a2 - 160);
  if ( a1[1] >= v5 )
    return a1[1] > v5;
  else
    return 0xFFFFFFFFLL;
}
