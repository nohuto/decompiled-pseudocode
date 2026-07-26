/*
 * XREFs of ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003F0B0
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0009F38 (ndisIfReferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0020520 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00DAA94 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00DAB24 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00DB4B0 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddress(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  _LIST_ENTRY *InterfaceByNetLuid; // rsi
  int IfRcvAddressRodInformation; // edi
  _LIST_ENTRY **v4; // rax
  _LIST_ENTRY *v5; // rbx
  unsigned __int8 *v6; // r14
  KIRQL v7; // al
  int v8; // ecx
  KIRQL v9; // r15
  int v10; // ecx
  _LIST_ENTRY *v11; // rax
  __int64 v12; // rax
  __int64 Flink; // rdx
  int v14; // ebx
  struct _NDIS_IF_RCV_ADDRESS *NextRcvAddress; // rax
  __int64 v16; // rax
  KIRQL v17; // bl

  InterfaceByNetLuid = 0LL;
  IfRcvAddressRodInformation = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(0x5Eu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 || !*((_QWORD *)a1 + 5) )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_42;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  v5 = *v4;
  v6 = (unsigned __int8 *)(v4 + 1);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *((_DWORD *)a1 + 14);
  v9 = v7;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_19;
      }
    }
    else if ( v5 == (_LIST_ENTRY *)-1LL )
    {
      do
      {
        v11 = ndisIfList.Flink - 77;
        if ( ndisIfList.Flink == &ndisIfList )
          v11 = InterfaceByNetLuid;
        InterfaceByNetLuid = v11;
      }
      while ( !v11 || !v11[80].Flink );
      goto LABEL_17;
    }
  }
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v5);
LABEL_17:
  if ( InterfaceByNetLuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[90].Flink, 8u);
    ++LODWORD(InterfaceByNetLuid[81].Blink);
    **((_QWORD **)a1 + 2) = InterfaceByNetLuid[82].Flink;
  }
LABEL_19:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( IfRcvAddressRodInformation < 0 )
    goto LABEL_40;
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_42;
  }
  v12 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid);
  if ( !v12 )
  {
    IfRcvAddressRodInformation = 0;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(v12 + 400) )
  {
    v14 = *((_DWORD *)a1 + 14);
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        Flink = (__int64)InterfaceByNetLuid[80].Flink;
        goto LABEL_34;
      }
      if ( v14 != 2 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_39;
      }
      NextRcvAddress = ndisIfFindNextRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    Flink = (__int64)NextRcvAddress;
LABEL_34:
    if ( Flink )
    {
      v16 = *((_QWORD *)a1 + 2);
      IfRcvAddressRodInformation = -1073741811;
      *(_OWORD *)(v16 + 8) = *(_OWORD *)(Flink + 8);
      *(_OWORD *)(v16 + 24) = *(_OWORD *)(Flink + 24);
      if ( *((_QWORD *)a1 + 1) == 3LL && *((_DWORD *)a1 + 8) == 1 )
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation(
                                       (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid,
                                       (struct _NDIS_IF_RCV_ADDRESS *)Flink,
                                       a1);
    }
    else
    {
      IfRcvAddressRodInformation = v14 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_39;
  }
  IfRcvAddressRodInformation = 0;
LABEL_39:
  ndisIfDereferenceMiniport((__int64)InterfaceByNetLuid, Flink, 4u);
LABEL_40:
  if ( InterfaceByNetLuid )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(InterfaceByNetLuid);
    KeReleaseSpinLock(&ndisIfListLock, v17);
  }
LABEL_42:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(0x5Fu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1, IfRcvAddressRodInformation);
  return (unsigned int)IfRcvAddressRodInformation;
}
