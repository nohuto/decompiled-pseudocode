/*
 * XREFs of ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00427D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00108F0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B9F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0027164 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetNetworkInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  __int64 v1; // rbp
  int v3; // edi
  const struct _GUID *v4; // r14
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // r15
  int v8; // ecx
  _LIST_ENTRY *Flink; // rbx
  __int64 NetworkBlock; // rax
  char *v11; // r13
  unsigned int v12; // ebx
  int v13; // r15d
  char v14; // r12
  KIRQL v15; // bl
  int v17; // eax
  int v18; // r14d
  unsigned int v19; // ebx
  char v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[24]; // [rsp+28h] [rbp-50h] BYREF

  v1 = 0LL;
  v3 = 0;
  v20 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x70u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 16 || !*((_DWORD *)a1 + 12) || !*((_QWORD *)a1 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_34;
  }
  v4 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  ndisGetNsiClientInfo((__int64)v21);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v6 = *((_DWORD *)a1 + 14);
  v7 = v5;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( !v8 )
    {
      *(_QWORD *)&v4->Data1 = 0LL;
      *(_QWORD *)v4->Data4 = 0LL;
      goto LABEL_12;
    }
    if ( v8 == 1 )
    {
LABEL_12:
      while ( 1 )
      {
        Flink = ndisIfNetworkList.Flink;
        v1 = 0LL;
        while ( Flink != &ndisIfNetworkList )
        {
          if ( (int)ndisCompareGuid((const struct _GUID *)&Flink[2], v4) > 0 )
          {
            v1 = (__int64)Flink;
            break;
          }
          Flink = Flink->Flink;
        }
        if ( !v1 )
          break;
        v4 = (const struct _GUID *)(v1 + 32);
        if ( ndisIsCompartmentAccessibleByClient(*(_QWORD *)(v1 + 48), (__int64)v21, 0) )
          goto LABEL_23;
      }
    }
    else
    {
      v3 = -1073741808;
    }
  }
  else
  {
    NetworkBlock = (__int64)ndisIfFindNetworkBlock(v4);
    v1 = NetworkBlock;
    if ( NetworkBlock )
    {
      v1 = -(__int64)ndisIsCompartmentAccessibleByClient(*(_QWORD *)(NetworkBlock + 48), (__int64)v21, 1) & NetworkBlock;
LABEL_23:
      if ( v1 )
      {
        ++*(_DWORD *)(v1 + 76);
        v20 = 1;
        *(_OWORD *)*((_QWORD *)a1 + 2) = *(_OWORD *)(v1 + 32);
      }
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( v3 < 0 )
    goto LABEL_32;
  if ( !v1 )
  {
    v3 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_32;
  }
  v11 = (char *)*((_QWORD *)a1 + 5);
  v12 = *((_DWORD *)a1 + 13);
  v13 = *((_DWORD *)a1 + 12);
  if ( !v11 )
  {
    *((_DWORD *)a1 + 12) = 0;
    goto LABEL_32;
  }
  v14 = 0;
  if ( *((_DWORD *)a1 + 8) )
  {
    v3 = -1073741808;
    goto LABEL_32;
  }
  while ( v13 > 0 && !v14 )
  {
    switch ( v12 )
    {
      case 0u:
        v18 = 4;
        goto LABEL_46;
      case 4u:
        v18 = 8;
        goto LABEL_46;
      case 8u:
        v18 = 12;
LABEL_46:
        v17 = 4;
        goto LABEL_47;
    }
    if ( v12 != 12 )
      goto LABEL_49;
    v17 = 516;
    v14 = 1;
    v18 = 528;
LABEL_47:
    if ( v13 < v17 )
    {
LABEL_49:
      v14 = 1;
    }
    else
    {
      memmove(v11, (const void *)(v1 + v12 + 80LL), (unsigned int)v17);
      v11 += v18 - v12;
      v13 += v12 - v18;
      v12 = v18;
    }
  }
  v19 = v12 - *((_DWORD *)a1 + 13);
  *((_DWORD *)a1 + 12) = v19;
  if ( !v19 )
    v3 = -1073741811;
LABEL_32:
  if ( v20 )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NETWORKBLOCK_DECREMENT_REF(v1);
    KeReleaseSpinLock(&ndisIfListLock, v15);
  }
LABEL_34:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0x71u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, v3);
  return (unsigned int)v3;
}
