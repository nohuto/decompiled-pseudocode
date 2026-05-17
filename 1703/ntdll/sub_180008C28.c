/*
 * XREFs of sub_180008C28 @ 0x180008C28
 * Callers:
 *     sub_180008B20 @ 0x180008B20 (sub_180008B20.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180008C28(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a2 - *(_QWORD *)(a1 + 16);
  if ( *a2 == *(_QWORD *)(a1 + 16) )
    v2 = a2[1] - *(_QWORD *)(a1 + 24);
  return v2 == 0;
}
