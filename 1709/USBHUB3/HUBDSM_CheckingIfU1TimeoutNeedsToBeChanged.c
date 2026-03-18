/*
 * XREFs of HUBDSM_CheckingIfU1TimeoutNeedsToBeChanged @ 0x1C001E510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfU1TimeoutNeedsToBeChanged(__int64 a1)
{
  __int64 v1; // rax
  char v2; // cl
  char v3; // dl
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 2214);
  v3 = *(_BYTE *)(v1 + 2212);
  if ( v2 != v3 )
    *(_BYTE *)(v1 + 2212) = v2;
  result = 4089LL;
  if ( v2 == v3 )
    return 4061LL;
  return result;
}
