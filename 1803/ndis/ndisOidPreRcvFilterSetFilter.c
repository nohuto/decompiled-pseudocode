/*
 * XREFs of ndisOidPreRcvFilterSetFilter @ 0x1C00DC260
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025040 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 */

char __fastcall ndisOidPreRcvFilterSetFilter(__int64 a1)
{
  __int64 v1; // rdx
  char v3; // di
  _DWORD *v4; // r10
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v3;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v5 = 36;
  if ( *(_DWORD *)(v1 + 48) < 0x24u )
  {
LABEL_4:
    *(_DWORD *)(v1 + 68) = v5;
    *(_DWORD *)(a1 + 40) = -1073676268;
    return v3;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x24u )
    goto LABEL_6;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) >= 2u )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v5 = 44;
    if ( *(_DWORD *)(v1 + 48) < 0x2Cu )
      goto LABEL_4;
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
LABEL_6:
      *(_DWORD *)(v1 + 68) = v5;
      *(_DWORD *)(a1 + 40) = -1073676266;
      return v3;
    }
  }
  v6 = (unsigned int)v4[6] * (unsigned __int64)(unsigned int)v4[7];
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = -1073741675;
LABEL_12:
    *(_DWORD *)(a1 + 40) = NdisConvertNtStatusToNdisStatus(v7);
    return v3;
  }
  v8 = v4[5];
  v9 = v8 + v6;
  if ( v8 + v4[6] * v4[7] < v8 )
  {
    v7 = v9 < v8 ? 0xC0000095 : 0;
    goto LABEL_12;
  }
  v10 = v9;
  if ( v9 <= v5 )
    v10 = v5;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= v9 )
  {
    if ( *(_DWORD *)(v1 + 52) >= v5 )
    {
      if ( *(_QWORD *)a1 )
        return ndisSetReceiveFilter(a1);
      else
        return 0;
    }
    else
    {
      *(_DWORD *)(v1 + 68) = v10;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = v10;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  return v3;
}
