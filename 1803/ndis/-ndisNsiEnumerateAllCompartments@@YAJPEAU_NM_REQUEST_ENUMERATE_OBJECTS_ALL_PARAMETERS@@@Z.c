/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003F780
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C002243C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C0022458 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v4; // r12
  unsigned int v5; // r11d
  bool IsCompartmentAccessibleByClient; // al
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  bool v10; // cf
  __int64 v11; // r15
  _LIST_ENTRY *v12; // r14
  unsigned int v13; // ebx
  _LIST_ENTRY *v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rdx
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY v19; // xmm1
  KIRQL v21; // [rsp+20h] [rbp-58h]
  unsigned int v22[6]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x88u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo(v22);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v4 = v2;
  v21 = v2;
  v5 = 0;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient((__int64)Flink, (__int64)v22, 1);
      Flink = Flink->Flink;
      v8 = v7 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v7;
      v5 = v8;
    }
    while ( Flink != &ndisIfCompartmentList );
    v4 = v21;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v9 )
  {
    v11 = *((_QWORD *)a1 + 2);
    v12 = (_LIST_ENTRY *)*((_QWORD *)a1 + 5);
    if ( v11 && *((_DWORD *)a1 + 6) != 4 || v12 && *((_DWORD *)a1 + 12) < 0x668u )
    {
      v13 = -1073741306;
      goto LABEL_29;
    }
    v14 = ndisIfCompartmentList.Flink;
    v15 = 0;
    do
    {
      if ( v14 == &ndisIfCompartmentList )
        break;
      if ( ndisIsCompartmentAccessibleByClient((__int64)v14, (__int64)v22, 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_DWORD *)(v11 + 4LL * v15) = v14[1].Flink;
        if ( *((_QWORD *)a1 + 5) )
        {
          v16 = 12LL;
          v17 = v14 + 4;
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
            v18[-1] = v19;
            --v16;
          }
          while ( v16 );
          *v18 = *v17;
          v18[1] = v17[1];
          v18[2] = v17[2];
          v18[3] = v17[3];
          v18[4] = v17[4];
          v18[5] = v17[5];
          v18[6].Flink = v17[6].Flink;
          v12 = (_LIST_ENTRY *)((char *)v12 + *((unsigned int *)a1 + 12));
        }
        ++v15;
      }
      v14 = v14->Flink;
    }
    while ( v15 < v9 );
    v4 = v21;
    v10 = v15 < v5;
  }
  else
  {
    v10 = v5 != 0;
  }
  v13 = v10 ? 0x105 : 0;
LABEL_29:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(0x89u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, v13);
  return v13;
}
