/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00418F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // r11
  KIRQL v4; // r12
  unsigned int v5; // ebx
  bool IsCompartmentAccessibleByClient; // al
  struct _LIST_ENTRY **v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  bool v10; // cf
  __int64 v11; // r15
  _OWORD *v12; // r14
  unsigned int v13; // ebx
  struct _LIST_ENTRY *v14; // r11
  unsigned int v15; // esi
  __int64 v16; // r11
  __int64 v17; // rdx
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  KIRQL v22; // [rsp+20h] [rbp-58h]
  _BYTE v23[24]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x88u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((__int64)v23);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v4 = v2;
  v22 = v2;
  v5 = 0;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient((__int64)Flink, (__int64)v23, 1);
      Flink = *v7;
      v8 = v5 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v5;
      v5 = v8;
    }
    while ( Flink != &ndisIfCompartmentList );
    v4 = v22;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v9 )
  {
    v11 = *((_QWORD *)a1 + 2);
    v12 = (_OWORD *)*((_QWORD *)a1 + 5);
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
      if ( ndisIsCompartmentAccessibleByClient((__int64)v14, (__int64)v23, 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_DWORD *)(v11 + 4LL * v15) = *(_DWORD *)(v16 + 16);
        if ( *((_QWORD *)a1 + 5) )
        {
          v17 = 12LL;
          v18 = (_OWORD *)(v16 + 64);
          v19 = v12;
          do
          {
            *v19 = *v18;
            v19[1] = v18[1];
            v19[2] = v18[2];
            v19[3] = v18[3];
            v19[4] = v18[4];
            v19[5] = v18[5];
            v19[6] = v18[6];
            v19 += 8;
            v20 = v18[7];
            v18 += 8;
            *(v19 - 1) = v20;
            --v17;
          }
          while ( v17 );
          *v19 = *v18;
          v19[1] = v18[1];
          v19[2] = v18[2];
          v19[3] = v18[3];
          v19[4] = v18[4];
          v19[5] = v18[5];
          *((_QWORD *)v19 + 12) = *((_QWORD *)v18 + 12);
          v12 = (_OWORD *)((char *)v12 + *((unsigned int *)a1 + 12));
        }
        ++v15;
      }
      v14 = *(struct _LIST_ENTRY **)v16;
    }
    while ( v15 < v9 );
    v4 = v22;
    v10 = v15 < v5;
  }
  else
  {
    v10 = v5 != 0;
  }
  v13 = v10 ? 0x105 : 0;
LABEL_29:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0x89u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, v13);
  return v13;
}
