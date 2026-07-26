/*
 * XREFs of ndisIfEnumerateNsiObjects @ 0x1C00DBA90
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     NdisIfGetNetLuidFromInterfaceIndex @ 0x1C00405B0 (NdisIfGetNetLuidFromInterfaceIndex.c)
 */

__int64 __fastcall ndisIfEnumerateNsiObjects(NET_LUID *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  NDIS_STATUS NetLuidFromInterfaceIndex; // edi
  NET_LUID *v7; // r14
  int Value; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  int v22; // ebx
  NET_IFINDEX v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // eax
  _QWORD v32[14]; // [rsp+28h] [rbp-29h] BYREF
  NET_LUID pNetLuid; // [rsp+C8h] [rbp+77h] BYREF

  v3 = 0;
  NetLuidFromInterfaceIndex = 0;
  *a3 = 0;
  if ( a2 < 0x30 )
    return (unsigned int)-1073741789;
  if ( *((_DWORD *)&a1[3].Info + 1) > a2 - 32 )
    return (unsigned int)-1073741811;
  v7 = a1 + 4;
  memset(v32, 0, sizeof(v32));
  Value = a1->Value;
  LODWORD(v32[1]) = 0;
  v32[2] = &NPI_MS_NDIS_MODULEID;
  v32[4] = 0x100000001LL;
  v9 = Value - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v23 = *((_DWORD *)&a1->Info + 1);
      LODWORD(v32[3]) = 3;
      NetLuidFromInterfaceIndex = NdisIfGetNetLuidFromInterfaceIndex(v23, &pNetLuid);
      if ( NetLuidFromInterfaceIndex < 0 )
        goto LABEL_44;
      v24 = 40;
      v7->Value = pNetLuid.Value;
      LODWORD(v32[6]) = 40;
      v32[5] = v7;
      while ( 1 )
      {
        v25 = v32[13];
        v26 = LODWORD(v32[13]) * v24;
        *((_DWORD *)&a1[1].Info + 1) = v32[13];
        v27 = (v26 + 7) & 0xFFFFFFF8;
        *((_DWORD *)&a1[2].Info + 1) = v27;
        v3 = v27 + 8 * v25;
        if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
          break;
        LODWORD(v32[10]) = 8;
        v32[9] = (char *)v7 + v27;
        NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
        if ( NetLuidFromInterfaceIndex != 261 )
          break;
        v24 = v32[6];
      }
      goto LABEL_43;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v20 = *((_DWORD *)&a1->Info + 1);
      v21 = 8;
      LODWORD(v32[6]) = 8;
      LODWORD(v32[3]) = 4;
      LODWORD(v7->Value) = v20;
      v32[5] = v7;
      while ( 1 )
      {
        v22 = LODWORD(v32[13]) * v21;
        *((_DWORD *)&a1[1].Info + 1) = v32[13];
        v3 = (v22 + 7) & 0xFFFFFFF8;
        if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
          break;
        NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
        if ( NetLuidFromInterfaceIndex != 261 )
          break;
        v21 = v32[6];
      }
      goto LABEL_43;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v17 = *((_DWORD *)&a1->Info + 1);
      v18 = 8;
      LODWORD(v32[6]) = 8;
      LODWORD(v32[3]) = 5;
      LODWORD(v7->Value) = v17;
      v32[5] = v7;
      while ( 1 )
      {
        v19 = LODWORD(v32[13]) * v18;
        *((_DWORD *)&a1[1].Info + 1) = v32[13];
        v3 = (v19 + 7) & 0xFFFFFFF8;
        if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
          break;
        NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
        if ( NetLuidFromInterfaceIndex != 261 )
          break;
        v18 = v32[6];
      }
      goto LABEL_43;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return (unsigned int)-1073741811;
      LODWORD(v32[3]) = 7;
      NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
      if ( NetLuidFromInterfaceIndex >= 0 )
      {
        v14 = v32[13];
        if ( LODWORD(v32[13]) )
        {
          v32[5] = v7;
          LODWORD(v32[6]) = 4;
          while ( 1 )
          {
            v15 = (4 * v14 + 7) & 0xFFFFFFF8;
            *((_DWORD *)&a1[1].Info + 1) = v14;
            LODWORD(a1[2].Value) = v15;
            v3 = v15 + 1640 * v14;
            if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
              break;
            LODWORD(v32[8]) = 1640;
            v32[7] = (char *)v7 + v15;
            NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
            if ( NetLuidFromInterfaceIndex != 261 )
              break;
            v14 = v32[13];
          }
LABEL_43:
          *((_DWORD *)&a1[3].Info + 1) = v3;
        }
      }
    }
    else
    {
      LODWORD(v32[3]) = 6;
      NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
      if ( NetLuidFromInterfaceIndex >= 0 )
      {
        v16 = v32[13];
        if ( LODWORD(v32[13]) )
        {
          v32[5] = v7;
          LODWORD(v32[6]) = 16;
          while ( 1 )
          {
            *((_DWORD *)&a1[1].Info + 1) = v16;
            LODWORD(a1[2].Value) = 16 * v16;
            v3 = 544 * v16;
            if ( *((_DWORD *)&a1[3].Info + 1) < (unsigned int)(544 * v16) )
              break;
            LODWORD(v32[8]) = 528;
            v32[7] = (char *)v7 + (unsigned int)(16 * v16);
            NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
            if ( NetLuidFromInterfaceIndex != 261 )
              break;
            v16 = v32[13];
          }
          goto LABEL_43;
        }
      }
    }
  }
  else
  {
    LODWORD(v32[3]) = 1;
    NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
    if ( NetLuidFromInterfaceIndex >= 0 )
    {
      v28 = v32[13];
      if ( LODWORD(v32[13]) )
      {
        v32[5] = v7;
        LODWORD(v32[6]) = 8;
        while ( 1 )
        {
          v29 = 8 * v28;
          *((_DWORD *)&a1[1].Info + 1) = v28;
          if ( 8 * v28 + 568LL * v28 + ((656 * v28 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) > 0xFFFFFFFF )
            break;
          LODWORD(a1[2].Value) = 0;
          v30 = (656 * v28 + 7) & 0xFFFFFFF8;
          *((_DWORD *)&a1[2].Info + 1) = v29;
          LODWORD(a1[3].Value) = v30 + v29;
          v3 = v29 + v30 + 568 * v28;
          if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
            break;
          LODWORD(v32[10]) = 656;
          v32[9] = &v7[v29 / 8];
          LODWORD(v32[12]) = 568;
          v32[11] = (char *)v7 + v30 + v29;
          NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v32);
          if ( NetLuidFromInterfaceIndex != 261 )
            break;
          v28 = v32[13];
        }
        goto LABEL_43;
      }
    }
  }
LABEL_44:
  if ( !NetLuidFromInterfaceIndex )
    *a3 = v3 + 32;
  return (unsigned int)NetLuidFromInterfaceIndex;
}
