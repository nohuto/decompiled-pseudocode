/*
 * XREFs of ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C0043870 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00B673C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000CFB0 (ndisIfFindCompartmentBlock.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00108F0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B9F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_Llq @ 0x1C0043E4C (WPP_SF_Llq.c)
 *     WPP_SF_qllq @ 0x1C004451C (WPP_SF_qllq.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     NdisAllocateRefCount @ 0x1C00B6E90 (NdisAllocateRefCount.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B7034 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
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
  unsigned int v14; // r12d
  char *PoolWithTag; // rax
  unsigned __int16 FriendlyNameLength; // ax
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  _OWORD *v19; // rax
  struct _NET_IF_INFORMATION *v20; // rsi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  KIRQL v23; // si
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v25; // rbp
  _LIST_ENTRY *i; // r14
  _LIST_ENTRY *Flink; // rax
  unsigned int v28; // eax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  char v31; // dl
  int v32; // r8d
  _LIST_ENTRY *v33; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v35; // r8
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _LIST_ENTRY *p_InterfaceLink; // rcx
  _LIST_ENTRY *v40; // rdx
  _LIST_ENTRY *v41; // rax
  KIRQL v42; // bl
  unsigned int v43; // ebx
  PVOID v45; // rax
  void *v46; // rbx
  unsigned int v47; // ecx
  PVOID v48; // r15
  _GUID NetworkGuid; // xmm0
  unsigned __int16 PhysAddressLength; // ax
  unsigned __int16 v51; // ax
  unsigned __int16 PermanentPhysAddressOffset; // ax
  _LIST_ENTRY *CompartmentBlock; // rax
  char v54; // cl
  _QWORD *v55; // [rsp+30h] [rbp-48h]
  unsigned int v56; // [rsp+88h] [rbp+10h] BYREF

  v7 = *((_WORD *)&a2.Info + 3);
  v8 = 0LL;
  v9 = (a2.Value >> 24) & 0xFFFFFF;
  v55 = 0LL;
  v56 = (a2.Value >> 24) & 0xFFFFFF;
  v12.Value = a2.Value;
  v13 = 0LL;
  v14 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))WPP_SF_qllq)(
      0LL,
      (union _NET_LUID_LH)a2.Value,
      a1,
      *((unsigned __int16 *)&a2.Info + 3),
      (a2.Value >> 24) & 0xFFFFFF,
      a4);
  if ( ndisNsiInitialized != 1 )
  {
    v43 = -1073741823;
    goto LABEL_44;
  }
  if ( !a4 )
    goto LABEL_72;
  if ( a4->Header.Revision != 1 )
  {
    v43 = -1073741637;
    goto LABEL_44;
  }
  if ( a4->Header.Size < 0x60u )
  {
    v43 = -1073741811;
    goto LABEL_44;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5E0uLL, 0x6669444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v43 = -1073741670;
    goto LABEL_44;
  }
  memset(PoolWithTag, 0, 0x5E0uLL);
  *(_DWORD *)v13 = 98566419;
  if ( (unsigned int)(v9 - 0x8000) > 0x4000 )
  {
    if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v56, 0, 0) )
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
    *((_WORD *)v13 + 4) = 512;
  else
    *((_WORD *)v13 + 4) = FriendlyNameLength;
  v17 = *((_WORD *)v13 + 4);
  if ( v17 )
    memmove(v13 + 10, &a4->Header.Type + a4->FriendlyNameOffset, v17);
  *((_WORD *)v13 + 262) = v7;
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
      v51 = a4->PhysAddressLength;
      if ( v51 )
      {
        memmove(v13 + 1126, &a4->Header.Type + a4->PhysAddressOffset, v51);
        PermanentPhysAddressOffset = a4->PermanentPhysAddressOffset;
        if ( PermanentPhysAddressOffset )
          memmove(v13 + 1160, &a4->Header.Type + PermanentPhysAddressOffset, a4->PhysAddressLength);
      }
      goto LABEL_19;
    }
LABEL_72:
    v43 = -1073741811;
LABEL_73:
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      v13 = 0LL;
    }
    goto LABEL_44;
  }
  v18 = 5LL;
  v19 = v13 + 576;
  v20 = a4 + 1;
  do
  {
    *v19 = *(_OWORD *)&v20->Header.Type;
    v19[1] = *(_OWORD *)&v20->PhysicalLocation.FunctionNumber;
    v19[2] = *(_OWORD *)&v20->DirectionType;
    v19[3] = *(_OWORD *)&v20->FriendlyNameLength;
    v19[4] = *(_OWORD *)&v20->InterfaceGuid.Data4[4];
    v19[5] = *(_OWORD *)&v20->NetworkGuid.Data4[4];
    v19[6] = *(_OWORD *)&v20[1].Header.Type;
    v19 += 8;
    v21 = *(_OWORD *)&v20[1].PhysicalLocation.FunctionNumber;
    v20 = (struct _NET_IF_INFORMATION *)((char *)v20 + 128);
    *(v19 - 1) = v21;
    --v18;
  }
  while ( v18 );
  v22 = *(_OWORD *)&v20->Header.Type;
  v13[1401] = 1;
  *((_QWORD *)v13 + 165) = v13;
  *v19 = v22;
  if ( a3 )
  {
    v55 = a3;
    *((_QWORD *)v13 + 177) = a3;
    v13[1402] = 1;
  }
LABEL_19:
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)(v13 + 580), &ndisDefaultNetworkGuid) )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
    {
LABEL_64:
      v43 = -1073741811;
LABEL_66:
      KeReleaseSpinLock(&ndisIfListLock, v23);
      goto LABEL_73;
    }
    *(_LIST_ENTRY *)(v13 + 580) = CompartmentBlock[3].Blink[2];
  }
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v13 + 580));
  v25 = NetworkBlock;
  if ( !NetworkBlock || (NetworkBlock->Flags & 3) != 0 )
    goto LABEL_64;
  for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
  {
    Flink = i[5].Flink;
    if ( (unsigned __int64)Flink > v12.Value )
      break;
    if ( Flink == (_LIST_ENTRY *)v12.Value )
    {
      v43 = -1073741270;
      goto LABEL_66;
    }
  }
  v28 = IfUsedIfIndicesLength;
  v14 = 1;
  v29 = 0;
  if ( !IfUsedIfIndicesLength )
    goto LABEL_50;
  v30 = 0LL;
  while ( *((_BYTE *)IfUsedIfIndicesData + v30) == 0xFF )
  {
LABEL_33:
    v14 += 8;
    ++v29;
    ++v30;
    if ( v29 >= IfUsedIfIndicesLength )
    {
      v54 = 0;
      goto LABEL_36;
    }
  }
  v31 = 1;
  v32 = 0;
  while ( (*((_BYTE *)IfUsedIfIndicesData + v30) & (unsigned __int8)v31) != 0 )
  {
    v31 *= 2;
    if ( (unsigned int)++v32 >= 8 )
      goto LABEL_33;
  }
  *((_BYTE *)IfUsedIfIndicesData + v30) |= v31;
  v54 = 1;
  v14 += v32;
LABEL_36:
  if ( v14 == 0xFFFF )
  {
LABEL_67:
    v43 = -1073741670;
    goto LABEL_66;
  }
  if ( !v54 )
  {
LABEL_50:
    IfUsedIfIndicesLength = v28 + 4;
    v45 = ExAllocatePoolWithTag(NonPagedPoolNx, v28 + 4, 0x6669444Eu);
    v46 = v45;
    if ( v45 )
    {
      v47 = IfUsedIfIndicesLength;
      *((_DWORD *)v45 + (IfUsedIfIndicesLength >> 2) - 1) = 0;
      v48 = IfUsedIfIndicesData;
      *((_BYTE *)v45 + v47 - 4) = 1;
      if ( v48 )
      {
        memmove(v45, v48, v47 - 4);
        ExFreePoolWithTag(v48, 0);
      }
      IfUsedIfIndicesData = v46;
      goto LABEL_38;
    }
    goto LABEL_67;
  }
LABEL_38:
  *((_DWORD *)v13 + 1) = v14;
  v33 = (_LIST_ENTRY *)(v13 + 1232);
  Blink = i->Blink;
  v35 = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  *((_QWORD *)v13 + 155) = Blink;
  v36 = a1 + 3;
  v33->Flink = v35;
  v35->Blink = v33;
  Blink->Flink = v33;
  v37 = v13 + 1248;
  v38 = a1[3];
  if ( *(_QWORD **)(v38 + 8) != a1 + 3 )
    __fastfail(3u);
  *((_QWORD *)v13 + 157) = v36;
  *v37 = v38;
  *(_QWORD *)(v38 + 8) = v37;
  *v36 = v37;
  p_InterfaceLink = &v25->InterfaceLink;
  v40 = v25->InterfaceLink.Flink;
  v41 = (_LIST_ENTRY *)(v13 + 1264);
  if ( v40->Blink != &v25->InterfaceLink )
    __fastfail(3u);
  ++ndisInterfaceCount;
  v41->Flink = v40;
  *((_QWORD *)v13 + 159) = p_InterfaceLink;
  v40->Blink = v41;
  p_InterfaceLink->Flink = v41;
  *((_DWORD *)v13 + 144) = v25->Compartment->CompartmentId;
  *((_QWORD *)v13 + 172) = v25;
  *((_QWORD *)v13 + 173) = v25->Compartment;
  ++v25->Ref;
  if ( v55 )
  {
    v55[105] = v13;
    *((_DWORD *)v55 + 208) = v14;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v13 + 180), 0);
  ++*((_DWORD *)v13 + 326);
  KeReleaseSpinLock(&ndisIfListLock, v23);
  ndisNsiNotifyClientInterfaceChange(v13, 1LL, 0LL);
  v42 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v13);
  KeReleaseSpinLock(&ndisIfListLock, v42);
  v43 = 0;
  *a6 = v14;
LABEL_44:
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WPP_SF_Llq)(
      v8,
      (union _NET_LUID_LH)a2.Value,
      v43,
      v14,
      v13);
  return v43;
}
