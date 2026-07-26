/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00420A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // r11
  KIRQL v4; // r12
  unsigned int v5; // ebx
  bool IsCompartmentAccessibleByClient; // al
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  bool v9; // cf
  __int64 v10; // r15
  _OWORD *v11; // rbp
  unsigned int v12; // ebx
  _LIST_ENTRY *v13; // r11
  unsigned int v14; // esi
  __int64 v15; // r11
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  KIRQL v21; // [rsp+20h] [rbp-58h]
  _BYTE v22[24]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x7Au, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((__int64)v22);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfNetworkList.Flink;
  v4 = v2;
  v21 = v2;
  v5 = 0;
  if ( ndisIfNetworkList.Flink != &ndisIfNetworkList )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient((__int64)Flink[3].Flink, (__int64)v22, 0);
      v7 = v5 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v7 = v5;
      v5 = v7;
    }
    while ( Flink != &ndisIfNetworkList );
    v4 = v21;
  }
  v8 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v8 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = (_OWORD *)*((_QWORD *)a1 + 5);
    if ( v10 && *((_DWORD *)a1 + 6) != 16 || v11 && *((_DWORD *)a1 + 12) < 0x210u )
    {
      v12 = -1073741306;
      goto LABEL_29;
    }
    v13 = ndisIfNetworkList.Flink;
    v14 = 0;
    do
    {
      if ( v13 == &ndisIfNetworkList )
        break;
      if ( ndisIsCompartmentAccessibleByClient((__int64)v13[3].Flink, (__int64)v22, 0) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_OWORD *)(v10 + 16LL * v14) = *(_OWORD *)(v15 + 32);
        if ( *((_QWORD *)a1 + 5) )
        {
          v16 = 4LL;
          v17 = (_OWORD *)(v15 + 80);
          v18 = v11;
          do
          {
            *v18 = *v17;
            v18[1] = v17[1];
            v18[2] = v17[2];
            v18[3] = v17[3];
            v18[4] = v17[4];
            v18[5] = v17[5];
            v18[6] = v17[6];
            v18 += 8;
            v19 = v17[7];
            v17 += 8;
            *(v18 - 1) = v19;
            --v16;
          }
          while ( v16 );
          *v18 = *v17;
          v11 = (_OWORD *)((char *)v11 + *((unsigned int *)a1 + 12));
        }
        ++v14;
      }
      v13 = *(_LIST_ENTRY **)v15;
    }
    while ( v14 < v8 );
    v4 = v21;
    v9 = v14 < v5;
  }
  else
  {
    v9 = v5 != 0;
  }
  v12 = v9 ? 0x105 : 0;
LABEL_29:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0x7Bu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, v12);
  return v12;
}
