/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C00202F0 (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C002030C (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
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
  unsigned int v11; // ebx
  _OWORD *v12; // rbp
  _LIST_ENTRY *v13; // r11
  unsigned int v14; // esi
  __int64 v15; // r11
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  KIRQL v21; // [rsp+20h] [rbp-58h]
  unsigned int v22[6]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(0x7Au, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo(v22);
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
    if ( v10 && *((_DWORD *)a1 + 6) != 16
      || (v12 = (_OWORD *)*((_QWORD *)a1 + 5)) != 0LL && *((_DWORD *)a1 + 12) < 0x210u )
    {
      v11 = -1073741306;
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
          v18 = v12;
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
          v12 = (_OWORD *)((char *)v12 + *((unsigned int *)a1 + 12));
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
  v11 = v9 ? 0x105 : 0;
LABEL_29:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(0x7Bu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1, v11);
  return v11;
}
