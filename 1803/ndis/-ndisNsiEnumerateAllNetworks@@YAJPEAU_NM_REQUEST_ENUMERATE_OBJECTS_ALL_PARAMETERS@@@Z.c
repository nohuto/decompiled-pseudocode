/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0013720
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C002243C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C0022458 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v4; // r12
  unsigned int v5; // r11d
  char IsCompartmentAccessibleByClient; // al
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // r15
  _LIST_ENTRY *v11; // rbp
  _LIST_ENTRY *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY v17; // xmm1
  bool v18; // cf
  unsigned int v19; // ebx
  KIRQL v21; // [rsp+20h] [rbp-58h]
  unsigned int v22[6]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(122LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
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
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(Flink[3].Flink, v22, 0LL);
      Flink = Flink->Flink;
      v8 = v7 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v7;
      v5 = v8;
    }
    while ( Flink != &ndisIfNetworkList );
    v4 = v21;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( !v9 )
  {
    v18 = v5 != 0;
LABEL_26:
    v19 = v18 ? 0x105 : 0;
    goto LABEL_27;
  }
  v10 = *((_QWORD *)a1 + 2);
  v11 = (_LIST_ENTRY *)*((_QWORD *)a1 + 5);
  if ( (!v10 || *((_DWORD *)a1 + 6) == 16) && (!v11 || *((_DWORD *)a1 + 12) >= 0x210u) )
  {
    v12 = ndisIfNetworkList.Flink;
    v13 = 0;
    do
    {
      if ( v12 == &ndisIfNetworkList )
        break;
      if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(v12[3].Flink, v22, 0LL) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_LIST_ENTRY *)(v10 + 16LL * v13) = v12[2];
        if ( *((_QWORD *)a1 + 5) )
        {
          v14 = 4LL;
          v15 = v12 + 5;
          v16 = v11;
          do
          {
            *v16 = *v15;
            v16[1] = v15[1];
            v16[2] = v15[2];
            v16[3] = v15[3];
            v16[4] = v15[4];
            v16[5] = v15[5];
            v16[6] = v15[6];
            v16 += 8;
            v17 = v15[7];
            v15 += 8;
            v16[-1] = v17;
            --v14;
          }
          while ( v14 );
          *v16 = *v15;
          v11 = (_LIST_ENTRY *)((char *)v11 + *((unsigned int *)a1 + 12));
        }
        ++v13;
      }
      v12 = v12->Flink;
    }
    while ( v13 < v9 );
    v4 = v21;
    v18 = v13 < v5;
    goto LABEL_26;
  }
  v19 = -1073741306;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(123LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v19);
  return v19;
}
