/*
 * XREFs of StorEtwAdapterNeedsUpdate @ 0x1C00414A8
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C001B5D0 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

char __fastcall StorEtwAdapterNeedsUpdate(__int64 a1, char a2)
{
  __int64 v2; // rax
  char result; // al

  v2 = *(_QWORD *)(a1 + 528);
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 176) )
    return 0;
  result = 1;
  if ( (*(_BYTE *)(a1 + 110) & 1) == a2 )
    return 0;
  return result;
}
