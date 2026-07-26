/*
 * XREFs of ndisOidPreLinkSpeedAndMediaState @ 0x1C00DC3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreLinkSpeedAndMediaState(__int64 *a1)
{
  __int64 v1; // r8
  char v2; // r9
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  int v5; // r11d
  unsigned int v6; // r10d
  unsigned __int64 v8; // rcx
  unsigned int v9; // r10d

  v1 = a1[4];
  v2 = 0;
  v3 = *a1;
  v4 = *(_DWORD **)(v1 + 40);
  v5 = *(_DWORD *)(v1 + 32);
  if ( *a1 )
  {
    v6 = 3 * *(_DWORD *)(v3 + 376);
    if ( *(_DWORD *)(v1 + 12) < v6 )
      *(_DWORD *)(v1 + 12) = v6;
    if ( *(_BYTE *)(v3 + 32) < 6u )
    {
      v9 = *(_DWORD *)(v3 + 376);
      if ( v9 )
        *(_WORD *)(*a1 + 1822) = *(_DWORD *)(v1 + 12) / v9;
    }
    else
    {
      if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      {
        *((_DWORD *)a1 + 10) = -1073741637;
        return 1;
      }
      if ( v5 == 65812 )
      {
        *((_DWORD *)a1 + 10) = 0;
        if ( *(_DWORD *)(v1 + 48) < 4u )
        {
          *(_DWORD *)(v1 + 56) = 4;
          *((_DWORD *)a1 + 10) = -1073676268;
        }
        if ( !*((_DWORD *)a1 + 10) )
          *v4 = (*(_DWORD *)(v3 + 120) & 0x20000000) == 0;
        *(_DWORD *)(v1 + 52) = 4;
        v2 = 1;
      }
      if ( v5 == 65799 )
      {
        *((_DWORD *)a1 + 10) = 0;
        if ( *(_DWORD *)(v1 + 48) < 4u )
        {
          *(_DWORD *)(v1 + 56) = 4;
          *((_DWORD *)a1 + 10) = -1073676268;
        }
        if ( !*((_DWORD *)a1 + 10) )
        {
          if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
            v8 = *(_QWORD *)(v3 + 792);
          else
            v8 = *(_QWORD *)(v3 + 3032);
          *v4 = v8 / 0x64;
        }
        *(_DWORD *)(v1 + 52) = 4;
        return 1;
      }
    }
  }
  return v2;
}
