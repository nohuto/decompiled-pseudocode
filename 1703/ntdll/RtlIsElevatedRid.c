/*
 * XREFs of RtlIsElevatedRid @ 0x1800876B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsElevatedRid(_BYTE *a1)
{
  int v1; // edx
  __int64 v2; // r8
  int v3; // ecx
  _DWORD *i; // rax

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (a1[8] & 0x30) != 0 )
    return 0;
  v2 = *(_QWORD *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 1LL) || (unsigned int)(*(_DWORD *)(v2 + 8) - 80) <= 0x1F )
    return 0;
  if ( *(_BYTE *)(v2 + 1) )
    v3 = *(_DWORD *)(v2 + 4LL * ((unsigned int)*(unsigned __int8 *)(v2 + 1) - 1) + 8);
  else
    v3 = 0;
  for ( i = &unk_180120FB0; v3 != *i; ++i )
  {
    if ( (unsigned int)++v1 >= 0x13 )
      return 0;
  }
  return 1;
}
