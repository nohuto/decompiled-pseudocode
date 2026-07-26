/*
 * XREFs of ndisOidPreGetPMProtocolOffload @ 0x1C00DF9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreGetPMProtocolOffload(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // r8
  char v4; // cl
  unsigned __int8 v5; // r9
  int v6; // r9d
  __int64 *v7; // rax
  __int64 *v8; // r8

  v1 = a1[4];
  v3 = *a1;
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_BYTE *)(v3 + 32);
    if ( v5 <= 6u && (v5 != 6 || *(_BYTE *)(v3 + 33) < 0x14u) )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      return 1;
    }
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 68) = 4;
      return 1;
    }
    if ( *(_DWORD *)(v1 + 52) < 0xF0u )
    {
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 68) = 240;
      return 1;
    }
    v6 = **(_DWORD **)(v1 + 40);
    v7 = *(__int64 **)(v3 + 976);
    if ( !v7 )
      goto LABEL_16;
    do
    {
      v8 = v7;
      if ( *((_DWORD *)v7 + 49) == v6 )
        break;
      v7 = (__int64 *)*v7;
      v8 = 0LL;
    }
    while ( v7 );
    if ( !v8 )
    {
LABEL_16:
      *((_DWORD *)a1 + 10) = -1073676267;
      return 1;
    }
  }
  return v4;
}
