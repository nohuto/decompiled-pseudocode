/*
 * XREFs of ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B8B0
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C0041710 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C0118 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001BE18 (IFBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BFA4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_Llq @ 0x1C0041A5C (WPP_SF_Llq.c)
 *     WPP_SF_qllq @ 0x1C00421E0 (WPP_SF_qllq.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     NdisAllocateRefCount @ 0x1C00C08B0 (NdisAllocateRefCount.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C0D64 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        union _NET_LUID_LH a2,
        _QWORD *a3,
        struct _NET_IF_INFORMATION *a4,
        enum NdisIfBlockSource a5,
        unsigned int *a6)
{
  unsigned __int16 v7; // r14
  __int64 v8; // rcx
  ULONG64 v9; // rbp
  union _NET_LUID_LH v12; // rbx
  char *v13; // rdi
  unsigned int v14; // r15d
  char *PoolWithTag; // rax
  unsigned __int16 FriendlyNameLength; // ax
  __int64 v17; // rcx
  _OWORD *v18; // rax
  struct _NET_IF_INFORMATION *v19; // rsi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  KIRQL v22; // si
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v24; // rbp
  _LIST_ENTRY *i; // r14
  _LIST_ENTRY *Flink; // rax
  unsigned int v27; // r9d
  __int64 v28; // rdx
  char v29; // cl
  char v30; // al
  int v31; // r8d
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v34; // r8
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _LIST_ENTRY *p_InterfaceLink; // rcx
  _LIST_ENTRY *v39; // rdx
  _LIST_ENTRY *v40; // rax
  KIRQL v41; // bl
  unsigned int v42; // ebx
  PVOID v44; // rax
  void *v45; // rbx
  unsigned int v46; // ecx
  PVOID v47; // r12
  _GUID NetworkGuid; // xmm0
  unsigned __int16 PhysAddressLength; // ax
  unsigned __int16 v50; // ax
  unsigned __int16 PermanentPhysAddressOffset; // ax
  _LIST_ENTRY *CompartmentBlock; // rax
  char v53; // al
  _QWORD *v54; // [rsp+30h] [rbp-48h]
  unsigned int v55; // [rsp+88h] [rbp+10h] BYREF

  v7 = *((_WORD *)&a2.Info + 3);
  v8 = 0LL;
  v9 = (a2.Value >> 24) & 0xFFFFFF;
  v54 = 0LL;
  v55 = (a2.Value >> 24) & 0xFFFFFF;
  v12.Value = a2.Value;
  v13 = 0LL;
  v14 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))WPP_SF_qllq)(
      0LL,
      (union _NET_LUID_LH)a2.Value,
      a1,
      *((unsigned __int16 *)&a2.Info + 3),
      (a2.Value >> 24) & 0xFFFFFF,
      a4);
  if ( ndisNsiInitialized != 1 )
  {
    v42 = -1073741823;
    goto LABEL_45;
  }
  if ( !a4 )
    goto LABEL_72;
  if ( a4->Header.Revision != 1 )
  {
    v42 = -1073741637;
    goto LABEL_45;
  }
  if ( a4->Header.Size < 0x60u )
  {
    v42 = -1073741811;
    goto LABEL_45;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5E0uLL, 0x6669444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v42 = -1073741670;
    goto LABEL_45;
  }
  memset(PoolWithTag, 0, 0x5E0uLL);
  *(_DWORD *)v13 = 98566419;
  if ( (unsigned int)(v9 - 32512) > 0x4100 )
  {
    if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v55, 0, 0) )
      goto LABEL_72;
  }
  *((union _NET_LUID_LH *)v13 + 164) = v12;
  LOBYTE(a2.Value) = 2;
  LOBYTE(v8) = 15;
  *((_DWORD *)v13 + 334) = a4->Flags;
  *((_DWORD *)v13 + 140) = a4->Flags;
  *(_QWORD *)(v13 + 1340) = *(_QWORD *)&a4->PhysicalLocation.BusNumber;
  *((_DWORD *)v13 + 337) = a4->PhysicalLocation.FunctionNumber;
  *((_DWORD *)v13 + 338) = a4->WanTunnelType;
  *((_DWORD *)v13 + 339) = a4->PortNumber;
  *((_DWORD *)v13 + 356) = a4->SupportedStatistics;
  *((_DWORD *)v13 + 352) = a5;
  *((_DWORD *)v13 + 326) = 1;
  *((_QWORD *)v13 + 180) = ((__int64 (__fastcall *)(_QWORD, _QWORD))NdisAllocateRefCount)(
                             v8,
                             (union _NET_LUID_LH)a2.Value);
  v8 = 512LL;
  FriendlyNameLength = a4->FriendlyNameLength;
  if ( FriendlyNameLength > 0x200u )
    FriendlyNameLength = 512;
  *((_WORD *)v13 + 4) = FriendlyNameLength;
  if ( FriendlyNameLength )
    memmove(v13 + 10, &a4->Header.Type + a4->FriendlyNameOffset, FriendlyNameLength);
  *((_WORD *)v13 + 262) = *((_WORD *)&v12.Info + 3);
  *((_DWORD *)v13 + 132) = a4->AccessType;
  *((_DWORD *)v13 + 133) = a4->DirectionType;
  *((_DWORD *)v13 + 134) = a4->ConnectionType;
  v13[556] = a4->ifConnectorPresent;
  *(_GUID *)(v13 + 540) = a4->InterfaceGuid;
  *((_DWORD *)v13 + 141) = a4->MediaType;
  *((_DWORD *)v13 + 142) = a4->PhysicalMediumType;
  *((_QWORD *)v13 + 166) = a1;
  if ( a1 != ndisIfProviderHandle && a1 != ndisIfLoopbackProviderHandle )
  {
    NetworkGuid = a4->NetworkGuid;
    *((_QWORD *)v13 + 165) = a3;
    *(_GUID *)(v13 + 580) = NetworkGuid;
    PhysAddressLength = a4->PhysAddressLength;
    if ( PhysAddressLength <= 0x20u )
    {
      *((_WORD *)v13 + 562) = PhysAddressLength;
      *((_WORD *)v13 + 579) = a4->PhysAddressLength;
      v50 = a4->PhysAddressLength;
      if ( v50 )
      {
        memmove(v13 + 1126, &a4->Header.Type + a4->PhysAddressOffset, v50);
        PermanentPhysAddressOffset = a4->PermanentPhysAddressOffset;
        if ( PermanentPhysAddressOffset )
          memmove(v13 + 1160, &a4->Header.Type + PermanentPhysAddressOffset, a4->PhysAddressLength);
      }
      goto LABEL_19;
    }
LABEL_72:
    v42 = -1073741811;
LABEL_73:
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      v13 = 0LL;
    }
    goto LABEL_45;
  }
  v17 = 5LL;
  v18 = v13 + 576;
  v19 = a4 + 1;
  do
  {
    *v18 = *(_OWORD *)&v19->Header.Type;
    v18[1] = *(_OWORD *)&v19->PhysicalLocation.FunctionNumber;
    v18[2] = *(_OWORD *)&v19->DirectionType;
    v18[3] = *(_OWORD *)&v19->FriendlyNameLength;
    v18[4] = *(_OWORD *)&v19->InterfaceGuid.Data4[4];
    v18[5] = *(_OWORD *)&v19->NetworkGuid.Data4[4];
    v18[6] = *(_OWORD *)&v19[1].Header.Type;
    v18 += 8;
    v20 = *(_OWORD *)&v19[1].PhysicalLocation.FunctionNumber;
    v19 = (struct _NET_IF_INFORMATION *)((char *)v19 + 128);
    *(v18 - 1) = v20;
    --v17;
  }
  while ( v17 );
  v21 = *(_OWORD *)&v19->Header.Type;
  v13[1401] = 1;
  *((_QWORD *)v13 + 165) = v13;
  *v18 = v21;
  if ( a3 )
  {
    v54 = a3;
    *((_QWORD *)v13 + 177) = a3;
    v13[1402] = 1;
  }
LABEL_19:
  v22 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)(v13 + 580), &ndisDefaultNetworkGuid) )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
    {
LABEL_67:
      v42 = -1073741811;
LABEL_69:
      KeReleaseSpinLock(&ndisIfListLock, v22);
      goto LABEL_73;
    }
    *(_LIST_ENTRY *)(v13 + 580) = CompartmentBlock[3].Blink[2];
  }
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v13 + 580));
  v24 = NetworkBlock;
  if ( !NetworkBlock || (NetworkBlock->Flags & 3) != 0 )
    goto LABEL_67;
  for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
  {
    Flink = i[5].Flink;
    if ( (unsigned __int64)Flink > v12.Value )
      break;
    if ( Flink == (_LIST_ENTRY *)v12.Value )
    {
      v42 = -1073741270;
      goto LABEL_69;
    }
  }
  v14 = 1;
  v27 = 0;
  if ( !IfUsedIfIndicesLength )
    goto LABEL_51;
  v28 = 0LL;
  while ( 1 )
  {
    v29 = *((_BYTE *)IfUsedIfIndicesData + v28);
    if ( v29 != -1 )
      break;
LABEL_30:
    v14 += 8;
    ++v27;
    ++v28;
    if ( v27 >= IfUsedIfIndicesLength )
    {
      v53 = 0;
      goto LABEL_37;
    }
  }
  v30 = 1;
  v31 = 0;
  while ( (*((_BYTE *)IfUsedIfIndicesData + v28) & (unsigned __int8)v30) != 0 )
  {
    v30 *= 2;
    if ( (unsigned int)++v31 >= 8 )
      goto LABEL_30;
  }
  v14 += v31;
  *((_BYTE *)IfUsedIfIndicesData + v28) = v30 | v29;
  v53 = 1;
LABEL_37:
  if ( v14 == 0xFFFF )
  {
LABEL_70:
    v42 = -1073741670;
    goto LABEL_69;
  }
  if ( !v53 )
  {
LABEL_51:
    IfUsedIfIndicesLength += 4;
    v44 = ExAllocatePoolWithTag(NonPagedPoolNx, IfUsedIfIndicesLength, 0x6669444Eu);
    v45 = v44;
    if ( v44 )
    {
      v46 = IfUsedIfIndicesLength;
      *((_DWORD *)v44 + (IfUsedIfIndicesLength >> 2) - 1) = 0;
      v47 = IfUsedIfIndicesData;
      *((_BYTE *)v44 + v46 - 4) = 1;
      if ( v47 )
      {
        memmove(v44, v47, v46 - 4);
        ExFreePoolWithTag(v47, 0);
      }
      IfUsedIfIndicesData = v45;
      goto LABEL_39;
    }
    goto LABEL_70;
  }
LABEL_39:
  *((_DWORD *)v13 + 1) = v14;
  v32 = (_LIST_ENTRY *)(v13 + 1232);
  Blink = i->Blink;
  v34 = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  *((_QWORD *)v13 + 155) = Blink;
  v35 = a1 + 3;
  v32->Flink = v34;
  v34->Blink = v32;
  Blink->Flink = v32;
  v36 = v13 + 1248;
  v37 = a1[3];
  if ( *(_QWORD **)(v37 + 8) != a1 + 3 )
    __fastfail(3u);
  *((_QWORD *)v13 + 157) = v35;
  *v36 = v37;
  *(_QWORD *)(v37 + 8) = v36;
  *v35 = v36;
  p_InterfaceLink = &v24->InterfaceLink;
  v39 = v24->InterfaceLink.Flink;
  v40 = (_LIST_ENTRY *)(v13 + 1264);
  if ( v39->Blink != &v24->InterfaceLink )
    __fastfail(3u);
  ++ndisInterfaceCount;
  v40->Flink = v39;
  *((_QWORD *)v13 + 159) = p_InterfaceLink;
  v39->Blink = v40;
  p_InterfaceLink->Flink = v40;
  *((_DWORD *)v13 + 144) = v24->Compartment->CompartmentId;
  *((_QWORD *)v13 + 172) = v24;
  *((_QWORD *)v13 + 173) = v24->Compartment;
  ++v24->Ref;
  if ( v54 )
  {
    v54[105] = v13;
    *((_DWORD *)v54 + 208) = v14;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v13 + 180), 0);
  ++*((_DWORD *)v13 + 326);
  KeReleaseSpinLock(&ndisIfListLock, v22);
  ndisNsiNotifyClientInterfaceChange(v13, 1LL, 0LL);
  v41 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v13);
  KeReleaseSpinLock(&ndisIfListLock, v41);
  v42 = 0;
  *a6 = v14;
LABEL_45:
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WPP_SF_Llq)(
      v8,
      (union _NET_LUID_LH)a2.Value,
      v42,
      v14,
      v13);
  return v42;
}
