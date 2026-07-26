/*
 * XREFs of ndisOidPreMediaInUse @ 0x1C00B4010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMediaInUse(__int64 *a1)
{
  __int64 v1; // r9
  char v2; // dl
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = a1[2];
  v2 = 0;
  v3 = a1[4];
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 32);
  }
  else
  {
    v4 = 0LL;
    if ( *a1 )
      v4 = *a1;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 4u )
    {
      *(_DWORD *)(v3 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v2 = 1;
      **(_DWORD **)(v3 + 40) = *(_DWORD *)(v4 + 464);
      *(_DWORD *)(v3 + 52) = 4;
    }
  }
  return v2;
}
