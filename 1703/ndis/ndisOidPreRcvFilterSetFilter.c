/*
 * XREFs of ndisOidPreRcvFilterSetFilter @ 0x1C00CFD10
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0023880 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 */

char __fastcall ndisOidPreRcvFilterSetFilter(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  _DWORD *v4; // r10
  unsigned int v5; // edx
  unsigned __int64 v6; // r9
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // eax

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD **)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 12 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v2;
  }
  v5 = 36;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x24u )
  {
    if ( *(_DWORD *)(v3 + 52) < 0x24u )
    {
      *(_DWORD *)(v3 + 68) = 36;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 68) = 36;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) < 2u )
      goto LABEL_14;
    v5 = 44;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x2Cu )
    {
      if ( *(_DWORD *)(v3 + 52) < 0x2Cu )
      {
        *(_DWORD *)(v3 + 68) = 44;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 68) = 44;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
LABEL_14:
      v6 = (unsigned int)v4[6] * (unsigned __int64)(unsigned int)v4[7];
      if ( v6 > 0xFFFFFFFF )
      {
        v7 = -1073741675;
LABEL_16:
        *(_DWORD *)(a1 + 40) = NdisConvertNtStatusToNdisStatus(v7);
        return v2;
      }
      v8 = v4[5];
      v9 = v6 + v8;
      if ( (unsigned int)v6 + v8 < v8 )
      {
        v7 = v9 < v8 ? 0xC0000095 : 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a1 + 40) = 0;
      v10 = v5;
      if ( v9 > v5 )
        v10 = v9;
      if ( *(_DWORD *)(v3 + 48) >= v9 )
      {
        if ( *(_DWORD *)(v3 + 52) < v5 )
        {
          *(_DWORD *)(v3 + 68) = v10;
          *(_DWORD *)(a1 + 40) = -1073676266;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 68) = v10;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( !*(_DWORD *)(a1 + 40) )
      {
        if ( *(_QWORD *)a1 )
          return ndisSetReceiveFilter(a1);
        else
          return 0;
      }
    }
  }
  return v2;
}
