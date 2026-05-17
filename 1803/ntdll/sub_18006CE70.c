/*
 * XREFs of sub_18006CE70 @ 0x18006CE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006CE70(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
