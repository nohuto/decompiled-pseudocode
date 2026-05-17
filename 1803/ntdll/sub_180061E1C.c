/*
 * XREFs of sub_180061E1C @ 0x180061E1C
 * Callers:
 *     sub_180061D14 @ 0x180061D14 (sub_180061D14.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180061E1C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a2 - *(_QWORD *)(a1 + 16);
  if ( *a2 == *(_QWORD *)(a1 + 16) )
    v2 = a2[1] - *(_QWORD *)(a1 + 24);
  return v2 == 0;
}
