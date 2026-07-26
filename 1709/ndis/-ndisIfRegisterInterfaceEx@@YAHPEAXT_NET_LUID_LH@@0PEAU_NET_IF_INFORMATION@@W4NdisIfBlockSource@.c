/*
 * XREFs of ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0004954
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C0040630 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00B48CC (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0004ED8 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisIfFindCompartmentBlock @ 0x1C00205BC (ndisIfFindCompartmentBlock.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_Llq @ 0x1C00409D0 (WPP_SF_Llq.c)
 *     WPP_SF_qllq @ 0x1C0041094 (WPP_SF_qllq.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B4408 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     NdisAllocateRefCount @ 0x1C00BE070 (NdisAllocateRefCount.c)
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
  KIRQL v23; // bp
  _LIST_ENTRY *i; // rsi
  int v25; // eax
  _LIST_ENTRY *j; // r14
  _LIST_ENTRY *v27; // rax
  unsigned int v28; // r9d
  __int64 v29; // rdx
  char v30; // cl
  char v31; // al
  int v32; // r8d
  _LIST_ENTRY *v33; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // r8
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _LIST_ENTRY **p_Blink; // rcx
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
  __int64 CompartmentBlock; // rax
  char v54; // al
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
  if ( (unsigned __int8)byte_1C009875D >= 4u )
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
    goto LABEL_47;
  }
  if ( !a4 )
    goto LABEL_77;
  if ( a4->Header.Revision != 1 )
  {
    v43 = -1073741637;
    goto LABEL_47;
  }
  if ( a4->Header.Size < 0x60u )
  {
    v43 = -1073741811;
    goto LABEL_47;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5E0uLL, 0x6669444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v43 = -1073741670;
    goto LABEL_47;
  }
  memset(PoolWithTag, 0, 0x5E0uLL);
  *(_DWORD *)v13 = 98566419;
  if ( (unsigned int)(v9 - 0x8000) > 0x4000 )
  {
    if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v56, 0, 0) )
      goto LABEL_77;
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
LABEL_77:
    v43 = -1073741811;
    goto LABEL_78;
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
    CompartmentBlock = ndisIfFindCompartmentBlock(1LL);
    if ( !CompartmentBlock )
      goto LABEL_70;
    *(_OWORD *)(v13 + 580) = *(_OWORD *)(*(_QWORD *)(CompartmentBlock + 56) + 32LL);
  }
  for ( i = ndisIfNetworkList.Flink; ; i = i->Flink )
  {
    if ( i == &ndisIfNetworkList )
      goto LABEL_70;
    v25 = ndisCompareGuid((const struct _GUID *)&i[2], (const struct _GUID *)(v13 + 580));
    if ( !v25 )
      break;
    if ( v25 > 0 )
      goto LABEL_70;
  }
  if ( !i || ((__int64)i[4].Blink & 3) != 0 )
  {
LABEL_70:
    v43 = -1073741811;
    goto LABEL_72;
  }
  for ( j = ndisIfList.Flink; ; j = j->Flink )
  {
    if ( j == &ndisIfList || (v27 = j[5].Flink, (unsigned __int64)v27 > v12.Value) )
    {
      v14 = 1;
      v28 = 0;
      if ( IfUsedIfIndicesLength )
      {
        v29 = 0LL;
        while ( 1 )
        {
          v30 = *((_BYTE *)IfUsedIfIndicesData + v29);
          if ( v30 != -1 )
            break;
LABEL_36:
          v14 += 8;
          ++v28;
          ++v29;
          if ( v28 >= IfUsedIfIndicesLength )
          {
            v54 = 0;
            goto LABEL_39;
          }
        }
        v31 = 1;
        v32 = 0;
        while ( (*((_BYTE *)IfUsedIfIndicesData + v29) & (unsigned __int8)v31) != 0 )
        {
          v31 *= 2;
          if ( (unsigned int)++v32 >= 8 )
            goto LABEL_36;
        }
        v14 += v32;
        *((_BYTE *)IfUsedIfIndicesData + v29) = v31 | v30;
        v54 = 1;
LABEL_39:
        if ( v14 == 0xFFFF )
          goto LABEL_71;
        if ( v54 )
        {
LABEL_41:
          *((_DWORD *)v13 + 1) = v14;
          v33 = (_LIST_ENTRY *)(v13 + 1232);
          Blink = j->Blink;
          Flink = Blink->Flink;
          if ( Blink->Flink->Blink != Blink )
            __fastfail(3u);
          *((_QWORD *)v13 + 155) = Blink;
          v36 = a1 + 3;
          v33->Flink = Flink;
          Flink->Blink = v33;
          Blink->Flink = v33;
          v37 = v13 + 1248;
          v38 = a1[3];
          if ( *(_QWORD **)(v38 + 8) != a1 + 3 )
            __fastfail(3u);
          *((_QWORD *)v13 + 157) = v36;
          *v37 = v38;
          *(_QWORD *)(v38 + 8) = v37;
          *v36 = v37;
          p_Blink = &i[3].Blink;
          v40 = i[3].Blink;
          v41 = (_LIST_ENTRY *)(v13 + 1264);
          if ( v40->Blink != (_LIST_ENTRY *)&i[3].Blink )
            __fastfail(3u);
          ++ndisInterfaceCount;
          v41->Flink = v40;
          *((_QWORD *)v13 + 159) = p_Blink;
          v40->Blink = v41;
          *p_Blink = v41;
          *((_DWORD *)v13 + 144) = i[3].Flink[1].Flink;
          *((_QWORD *)v13 + 172) = i;
          *((_QWORD *)v13 + 173) = i[3].Flink;
          ++HIDWORD(i[4].Blink);
          if ( v55 )
          {
            v55[105] = v13;
            *((_DWORD *)v55 + 208) = v14;
          }
          NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v13 + 180));
          ++*((_DWORD *)v13 + 326);
          KeReleaseSpinLock(&ndisIfListLock, v23);
          ndisNsiNotifyClientInterfaceChange(v13, 1LL, 0LL);
          v42 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          IFBLOCK_DECREMENT_REF(v13);
          KeReleaseSpinLock(&ndisIfListLock, v42);
          v43 = 0;
          *a6 = v14;
          goto LABEL_47;
        }
      }
      IfUsedIfIndicesLength += 4;
      v45 = ExAllocatePoolWithTag(NonPagedPoolNx, IfUsedIfIndicesLength, 0x6669444Eu);
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
        goto LABEL_41;
      }
LABEL_71:
      v43 = -1073741670;
      goto LABEL_72;
    }
    if ( v27 == (_LIST_ENTRY *)v12.Value )
      break;
  }
  v43 = -1073741270;
LABEL_72:
  KeReleaseSpinLock(&ndisIfListLock, v23);
LABEL_78:
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    v13 = 0LL;
  }
LABEL_47:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WPP_SF_Llq)(
      v8,
      (union _NET_LUID_LH)a2.Value,
      v43,
      v14,
      v13);
  return v43;
}
