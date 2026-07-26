/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C0118
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C001CE90 (ndisIfCreateFilterInterface.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003E5D8 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B8B0 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00252B8 (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0025334 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C0042240 (WPP_SF_qqqqq.c)
 *     WPP_SF_qqqqqL @ 0x1C00422A8 (WPP_SF_qqqqqL.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00B2770 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00DD360 (NdisIfAllocateNetLuidIndexEx.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        union _NET_LUID_LH *a4,
        struct _NDIS_NSI_INTERFACE_PERSIST_RW *a5,
        struct _NDIS_FILTER_BLOCK *a6,
        enum NdisIfBlockSource a7)
{
  struct _NDIS_IF_NETWORK_BLOCK *v7; // rsi
  union _NET_LUID_LH *v8; // rdi
  char v10; // bl
  __int64 IfBlock; // rcx
  unsigned __int16 v12; // r12
  char *PoolWithTag; // rax
  char *v14; // rdi
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  size_t v17; // r8
  union _NET_LUID_LH v18; // rbx
  _GUID NetworkGuid; // xmm0
  _QWORD *v20; // rcx
  int appended; // esi
  int v23; // eax
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // ax
  size_t v27; // r8
  _GUID LoopbackIfInterfaceGuid; // xmm0
  _IF_COUNTED_STRING_LH *p_LoopbackIfAlias; // rsi
  _WORD *v30; // r8
  wchar_t *v31; // rdx
  wchar_t *v32; // rcx
  size_t Length; // r8
  char v34; // [rsp+48h] [rbp-41h]
  unsigned int v35; // [rsp+4Ch] [rbp-3Dh] BYREF
  UINT32 NetLuidIndex; // [rsp+50h] [rbp-39h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-31h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  char v42; // [rsp+E0h] [rbp+57h]

  v42 = a2;
  *(_DWORD *)&Source.Length = 262146;
  Source.Buffer = L" ";
  v34 = 0;
  v7 = a1;
  NetLuidIndex = 0;
  v35 = 0;
  v8 = a4;
  v10 = a2;
  IfBlock = 4LL;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqqq(0x80u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v7, a3, a4, a5, a6);
  if ( v7 && (!a5 || *((_WORD *)a5 + 544) <= 0x20u) )
  {
    if ( !a6 || (IfBlock = (__int64)a6->Miniport->IfBlock, *(_WORD *)(IfBlock + 1124) <= 0x20u) )
    {
      v12 = 512;
      *(_DWORD *)&String.Length = 0x2000000;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6F8uLL, 0x6669444Eu);
      a2 = 0LL;
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
        appended = -1073741670;
        goto LABEL_22;
      }
      memset(PoolWithTag, 0, 0x4F8uLL);
      *(_DWORD *)v14 = 6291840;
      String.Buffer = (wchar_t *)(v14 + 1272);
      if ( !a5 )
      {
        if ( !a6 )
        {
          if ( v10 )
          {
            appended = NdisIfAllocateNetLuidIndexEx(24LL, a3->Flags & 1, &v35);
            if ( appended )
            {
LABEL_21:
              ExFreePoolWithTag(v14, 0);
LABEL_22:
              v8 = a4;
              goto LABEL_23;
            }
            v34 = 1;
            *((_WORD *)&a3->LoopbackIfLuid.Info + 3) = 24;
            NetLuidIndex = v35;
            a3->LoopbackIfLuid.Value = a3->LoopbackIfLuid.Value & 0xFFFF000000000000uLL | ((unsigned __int64)(v35 & 0xFFFFFF) << 24);
            appended = ExUuidCreate(&a3->LoopbackIfInterfaceGuid);
            if ( appended < 0 )
            {
LABEL_75:
              if ( v34 )
                NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
              goto LABEL_21;
            }
          }
          v18.Value = (ULONG64)a3->LoopbackIfLuid;
          LoopbackIfInterfaceGuid = a3->LoopbackIfInterfaceGuid;
          *((_DWORD *)v14 + 2) = -1;
          *((_DWORD *)v14 + 3) = -1;
          *((_DWORD *)v14 + 4) = -1;
          *((_QWORD *)v14 + 90) = 0x40000000LL;
          *((_QWORD *)v14 + 91) = 0x40000000LL;
          *(_GUID *)(v14 + 52) = LoopbackIfInterfaceGuid;
          *(_QWORD *)(v14 + 28) = 1LL;
          *((_DWORD *)v14 + 9) = 1;
          v14[40] = 0;
          *((_QWORD *)v14 + 11) = 17LL;
          *((_DWORD *)v14 + 160) = 1500;
          *((_DWORD *)v14 + 185) = 1;
          *((_DWORD *)v14 + 186) = 2;
          *((_QWORD *)v14 + 79) = 1LL;
          if ( v42 )
          {
            RtlInitUnicodeString(&DestinationString, &xmmword_1C0099152);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v14 + 754);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_75;
            appended = RtlIntegerToUnicodeString(a1->Compartment->CompartmentId, 0xAu, &String);
            if ( appended < 0 )
              goto LABEL_75;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_75;
            *((_WORD *)v14 + 376) = Destination.Length;
            *((_WORD *)v14 + 24) = Destination.Length;
            RtlInitUnicodeString(&DestinationString, &xmmword_1C0099362);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v14 + 118);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_75;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_75;
            *((_WORD *)v14 + 58) = Destination.Length;
            a3->LoopbackIfDescr.Length = *((_WORD *)v14 + 24);
            memmove(a3->LoopbackIfDescr.String, v14 + 754, *((unsigned __int16 *)v14 + 376));
            v32 = a3->LoopbackIfAlias.String;
            a3->LoopbackIfAlias.Length = *((_WORD *)v14 + 58);
            v31 = (wchar_t *)(v14 + 118);
            Length = *((unsigned __int16 *)v14 + 58);
          }
          else
          {
            if ( !ndisIsValidIfString(&a3->LoopbackIfDescr)
              || (p_LoopbackIfAlias = &a3->LoopbackIfAlias, !ndisIsValidIfString(&a3->LoopbackIfAlias)) )
            {
              appended = -1073676267;
              goto LABEL_75;
            }
            *((_WORD *)v14 + 24) = *v30;
            memmove(v14 + 754, a3->LoopbackIfDescr.String, (unsigned __int16)*v30);
            v31 = a3->LoopbackIfAlias.String;
            *((_WORD *)v14 + 58) = p_LoopbackIfAlias->Length;
            v32 = (wchar_t *)(v14 + 118);
            Length = p_LoopbackIfAlias->Length;
          }
          memmove(v32, v31, Length);
          v7 = a1;
          *((_DWORD *)v14 + 178) = 1;
LABEL_16:
          *((_WORD *)v14 + 25) = 754;
          *(_GUID *)(v14 + 68) = v7->NetworkGuid;
          *((_DWORD *)v14 + 24) = v7->Compartment->CompartmentId;
          NetworkGuid = v7->NetworkGuid;
          *((_WORD *)v14 + 368) = 0;
          *(_GUID *)(v14 + 100) = NetworkGuid;
          v20 = ndisIfProviderHandle;
          if ( a3 )
            v20 = ndisIfLoopbackProviderHandle;
          appended = ndisIfRegisterInterfaceEx(v20, v18, a6, (struct _NET_IF_INFORMATION *)v14, a7, &v35);
          if ( !appended )
          {
            if ( a3 )
              ndisIfUpdateLoopbackInterfaceOnNetwork(a1, v18);
            goto LABEL_21;
          }
          goto LABEL_75;
        }
        *((_DWORD *)v14 + 1) |= 2u;
        *((_DWORD *)v14 + 2) = -1;
        *((_DWORD *)v14 + 3) = -1;
        *((_DWORD *)v14 + 4) = -1;
        *((_DWORD *)v14 + 5) = -1;
        *((_DWORD *)v14 + 7) = a6->Miniport->IfBlock->AccessType;
        *((_DWORD *)v14 + 8) = a6->Miniport->IfBlock->DirectionType;
        *((_DWORD *)v14 + 9) = a6->Miniport->IfBlock->ConnectionType;
        v14[40] = 0;
        if ( a6->FilterFriendlyName->Length <= 0x200u )
          v12 = a6->FilterFriendlyName->Length;
        *((_WORD *)v14 + 376) = v12;
        v15 = *((_WORD *)v14 + 376);
        *((_WORD *)v14 + 24) = v12;
        if ( v15 )
          memmove(v14 + 754, a6->FilterFriendlyName->Buffer, v15);
        v16 = a6->Miniport->IfBlock->ifPhysAddress.Length;
        *((_WORD *)v14 + 21) = v16;
        *((_WORD *)v14 + 322) = v16;
        *((_DWORD *)v14 + 11) = 44565126;
        memmove(v14 + 646, a6->Miniport->IfBlock->ifPhysAddress.Address, v16);
        v17 = *((unsigned __int16 *)v14 + 21);
        *((_WORD *)v14 + 339) = v17;
        memmove(v14 + 680, a6->Miniport->IfBlock->PermanentPhysAddress.Address, v17);
        *(_GUID *)(v14 + 52) = a6->InterfaceGuid;
        *((_DWORD *)v14 + 21) = a6->Miniport->IfBlock->SupportedStatistics;
        *((_DWORD *)v14 + 22) = a6->MediaType;
        *((_DWORD *)v14 + 23) = a6->PhysicalMediaType;
        *((_DWORD *)v14 + 178) = a6->Miniport->IfBlock->ifAdminStatus;
        *((_QWORD *)v14 + 90) = a6->XmitLinkSpeed;
        *((_QWORD *)v14 + 91) = a6->RcvLinkSpeed;
        *((_DWORD *)v14 + 185) = a6->MediaConnectState;
        *((_DWORD *)v14 + 186) = a6->MediaDuplexState;
        *((_DWORD *)v14 + 158) = a6->Miniport->IfBlock->ifOperStatus;
        *((_DWORD *)v14 + 159) = a6->Miniport->IfBlock->ifOperStatusFlags;
        *((_DWORD *)v14 + 160) = a6->Miniport->IfBlock->ifMtu;
LABEL_15:
        v18.Value = a4->Value;
        goto LABEL_16;
      }
      *((_DWORD *)v14 + 9) = 1;
      *(_QWORD *)(v14 + 28) = 2LL;
      if ( *((_WORD *)a5 + 518) == 1 )
      {
        if ( *((_DWORD *)a5 + 269) != 9 )
        {
          if ( *((_DWORD *)a5 + 269) == 10 )
          {
            *(_QWORD *)(v14 + 28) = 3LL;
            goto LABEL_31;
          }
          if ( *((_DWORD *)a5 + 269) == 11 )
          {
            *((_DWORD *)v14 + 9) = 1;
            *((_DWORD *)v14 + 7) = 3;
            *((_DWORD *)v14 + 8) = 2;
            goto LABEL_32;
          }
          if ( *((_DWORD *)a5 + 269) != 12 )
            goto LABEL_32;
        }
      }
      else
      {
        if ( *((_WORD *)a5 + 518) == 6 || *((_WORD *)a5 + 518) == 9 )
          goto LABEL_30;
        if ( *((_WORD *)a5 + 518) != 23 )
        {
          if ( *((_WORD *)a5 + 518) == 37 )
          {
            *(_QWORD *)(v14 + 28) = 4LL;
            goto LABEL_31;
          }
          if ( *((_WORD *)a5 + 518) != 71 )
          {
            if ( *((_WORD *)a5 + 518) == 131 )
            {
              *((_DWORD *)v14 + 9) = 1;
LABEL_48:
              *(_QWORD *)(v14 + 28) = 3LL;
            }
LABEL_32:
            *((_DWORD *)v14 + 1) = 28;
            *((_DWORD *)v14 + 5) = -1;
            *((_DWORD *)v14 + 2) = -1;
            *((_DWORD *)v14 + 3) = -1;
            *((_DWORD *)v14 + 4) = -1;
            v23 = *((_DWORD *)a5 + 271) & 2;
            *((_DWORD *)v14 + 6) = 0;
            v14[40] = 0;
            *((_DWORD *)v14 + 1) = (v23 | 0x38u) >> 1;
            *(_DWORD *)(v14 + 42) = 0;
            *((_WORD *)v14 + 23) = 0;
            *((_DWORD *)v14 + 22) = *((_DWORD *)a5 + 269);
            *((_DWORD *)v14 + 23) = *((_DWORD *)a5 + 270);
            *(_QWORD *)(v14 + 636) = 0LL;
            *((_WORD *)v14 + 322) = 0;
            *((_WORD *)v14 + 339) = 0;
            *((_QWORD *)v14 + 90) = 0LL;
            *((_QWORD *)v14 + 91) = 0LL;
            *(_QWORD *)(v14 + 740) = 0LL;
            *((_DWORD *)v14 + 178) = 2;
            *((_DWORD *)v14 + 158) = 6;
            v24 = *((_WORD *)a5 + 2);
            if ( v24 > 0x200u )
              v24 = 512;
            *((_WORD *)v14 + 58) = v24;
            if ( v24 )
              memmove(v14 + 118, (char *)a5 + 6, v24);
            v25 = *((_WORD *)a5 + 260);
            if ( v25 )
            {
              if ( v25 <= 0x200u )
                v12 = *((_WORD *)a5 + 260);
              *((_WORD *)v14 + 376) = v12;
              memmove(v14 + 754, (char *)a5 + 522, v12);
              *((_WORD *)v14 + 24) = *((_WORD *)v14 + 376);
            }
            *(_OWORD *)(v14 + 52) = *((_OWORD *)a5 + 65);
            v26 = *((_WORD *)a5 + 544);
            if ( v26 )
            {
              *((_WORD *)v14 + 21) = v26;
              *((_WORD *)v14 + 322) = v26;
              *((_DWORD *)v14 + 11) = 44565126;
              memmove(v14 + 646, (char *)a5 + 1090, v26);
              v27 = *((unsigned __int16 *)v14 + 21);
              *((_WORD *)v14 + 339) = v27;
              memmove(v14 + 680, (char *)a5 + 1124, v27);
            }
            goto LABEL_15;
          }
LABEL_30:
          *(_QWORD *)(v14 + 28) = 2LL;
LABEL_31:
          *((_DWORD *)v14 + 9) = 1;
          goto LABEL_32;
        }
      }
      *((_DWORD *)v14 + 9) = 3;
      goto LABEL_48;
    }
  }
  appended = -1073741811;
LABEL_23:
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqqqL(IfBlock, a2, a1, a3, v8, a5, a6, appended);
  return (unsigned int)appended;
}
