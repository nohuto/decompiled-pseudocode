/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF290 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00053EC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009520 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovGetNicSwitchList @ 0x1C0013498 (ndisIovGetNicSwitchList.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0017990 (ndisIndicateInitialStateToBinding.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ndisGetPortList @ 0x1C001A9A0 (ndisGetPortList.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001C400 (ndisReferenceOpenByHandle.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004F990 (ndisBindUnbindPeriodicReceives.c)
 *     McTemplateK0jqxzq @ 0x1C0065F08 (McTemplateK0jqxzq.c)
 *     WPP_SF_ZZL @ 0x1C0075C6C (WPP_SF_ZZL.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BFA90 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00C0970 (ndisNotifyWmiBindUnbind.c)
 *     ndisNotifyBindFailure @ 0x1C00C24F0 (ndisNotifyBindFailure.c)
 *     ndisMDoMiniportOp @ 0x1C00C9AC8 (ndisMDoMiniportOp.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, _NDIS_PROTOCOL_BLOCK *this)
{
  int v4; // edx
  unsigned int Blink; // esi
  char v6; // r12
  __int64 v7; // rdx
  struct _KMUTANT *p_Mutex; // r15
  char v9; // r13
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v12; // xmm0
  SIZE_T v13; // rdx
  wchar_t *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // r8
  unsigned __int8 MinorNdisVersion; // al
  char v17; // dl
  __int16 v18; // ax
  unsigned int v19; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v25; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *v27; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v29; // rdx
  _NDIS_IF_BLOCK *v30; // rcx
  int v31; // eax
  struct _NDIS_MINIPORT_BLOCK *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  bool v36; // zf
  _NDIS_IF_BLOCK *IfBlock; // rcx
  char v39; // cl
  int v40; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  char v42; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  char v45; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v48[40]; // [rsp+110h] [rbp+10h] BYREF

  memset(v48, 0, 0x138uLL);
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  Blink = 0;
  v42 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qq(0x1Au, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, this);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
  {
    LOBYTE(v4) = 1;
    ndisMDoMiniportOp((_DWORD)a1, v4, 65812, (unsigned int)&v45, 4, 1, 1);
  }
  if ( ndisReferenceProtocol((__int64)this, 8u) )
  {
    if ( !a1->EthDB )
    {
      Blink = -1073741823;
      if ( (unsigned __int8)byte_1C009960D >= 2u )
        WPP_SF_qq(0x1Bu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, this);
      goto LABEL_66;
    }
    p_Mutex = &this->Mutex;
    v9 = 1;
    KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
    ++this->MutexOwnerCount;
    this->MutexOwnerThread = KeGetCurrentThread();
    this->MutexOwner = 3932870;
    if ( this->Ref.Closing )
    {
LABEL_61:
      v36 = this->MutexOwnerCount-- == 1;
      this->MutexOwner = 0;
      if ( v36 )
        this->MutexOwnerThread = 0LL;
      KeReleaseMutex(p_Mutex, 0);
      if ( v6 )
      {
        ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2);
        BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
      }
      if ( v9 && Blink )
        ndisNotifyBindFailure(a1, this);
LABEL_66:
      ndisDereferenceProtocol(this, v7, 8u);
      goto LABEL_67;
    }
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v9 = 0;
      goto LABEL_61;
    }
    Paths = a1->BindPaths->Paths;
    this->BindDeviceName = &a1->MiniportName;
    this->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v12 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v12) - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v13 = (unsigned __int16)(DestinationString.Length + this->Name.Length + Paths->Length - ndisDeviceStr.Length + 2);
    Destination.Length = 0;
    Destination.MaximumLength = v13;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = 0;
      goto LABEL_60;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &this->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = this->MajorNdisVersion;
    LOBYTE(v48[0]) = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      MinorNdisVersion = this->MinorNdisVersion;
      if ( MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v17 = 4;
        v18 = 312;
LABEL_15:
        WORD1(v48[0]) = v18;
        BYTE1(v48[0]) = v17;
        v48[1] = &Destination;
        v48[3] = a1->PhysicalDeviceObject;
        v19 = a1->MacOptions & 0x80000001;
        v48[2] = Paths;
        v48[30] = &a1->MiniportName;
        if ( v19 == -2147483647 )
          LODWORD(v48[4]) = 3;
        else
          LODWORD(v48[4]) = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v48[6] = HighestFilter->XmitLinkSpeedIndicateUp;
          v48[8] = HighestFilter->RcvLinkSpeedIndicateUp;
          LODWORD(v48[9]) = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v48[6] = a1->XmitLinkSpeed;
          v48[8] = a1->RcvLinkSpeed;
          LODWORD(v48[9]) = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        HIDWORD(v48[9]) = MediaDuplexStateIndicateUp;
        HIDWORD(v48[4]) = a1->TopFilterRestartAttributes.MtuSize;
        v48[5] = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v48[7] = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        LODWORD(v48[10]) = a1->TopFilterRestartAttributes.LookaheadSize;
        v48[12] = *(_QWORD *)&a1->TopFilterRestartAttributes.SupportedPacketFilters;
        HIDWORD(v48[17]) = a1->PhysicalMediumType;
        v48[18] = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && this->MinorNdisVersion >= 0x14u )
          v48[33] = &a1->PMAdvertisedCapabilities;
        else
          v48[11] = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v48[28] = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v48[29] = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v48[31];
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v48[31] = HDSplitCurrentConfig;
        v25 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v48[32];
        if ( TopReceiveFilterCurrentCapabilities )
          v25 = TopReceiveFilterCurrentCapabilities;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        v48[32] = v25;
        v27 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v48[34];
        if ( TopNicSwitchCurrentCapabilities )
          v27 = TopNicSwitchCurrentCapabilities;
        v48[34] = v27;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && this->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v39 = *((_BYTE *)NDKBlock + 24);
            v48[36] = (char *)NDKBlock + 32;
            LOBYTE(v48[35]) = v39;
          }
          else
          {
            LOBYTE(v48[35]) = 0;
            v48[36] = 0LL;
          }
        }
        if ( (unsigned __int8)v17 < 4u
          || !a1->SriovCurrentCapabilities
          || (v48[37] = a1->SriovCurrentCapabilities, !(unsigned int)ndisIovGetNicSwitchList((__int64)a1, &v48[38])) )
        {
          v29 = a1->IfBlock;
          LOWORD(v48[13]) = v29->ifPhysAddress.Length;
          memmove((char *)&v48[13] + 2, v29->ifPhysAddress.Address, LOWORD(v48[13]));
          ndisIfQueryBindingMiniportIfIndex(
            (_DWORD)a1,
            (unsigned int)&v48[20],
            (unsigned int)&v48[19],
            (unsigned int)&v48[22],
            (__int64)&v48[21]);
          v30 = a1->IfBlock;
          HIDWORD(v48[22]) = a1->TopFilterRestartAttributes.AccessType;
          LODWORD(v48[23]) = v30->DirectionType;
          HIDWORD(v48[23]) = a1->TopFilterRestartAttributes.ConnectionType;
          LOWORD(v48[24]) = v30->ifType;
          BYTE2(v48[24]) = v30->ifConnectorPresent;
          v48[26] = *(_QWORD *)&a1->TopFilterRestartAttributes.DataBackFillSize;
          LODWORD(v48[27]) = a1->TopFilterRestartAttributes.MacOptions;
          HIDWORD(v48[27]) = v30->CompartmentId;
          if ( !(unsigned int)ndisGetPortList((__int64)a1, &v48[25]) )
          {
            *(_QWORD *)&BugCheckParameter3[0].Header.Lock = 0LL;
            BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)this;
            BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
            *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
            *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
            BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
            KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
            this->BindingAdapter = a1;
            v9 = 0;
            if ( (unsigned __int8)byte_1C009960D >= 4u )
              WPP_SF_q(0x59u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)this);
            v31 = this->BindAdapterHandlerEx(
                    this->ProtocolDriverContext,
                    BugCheckParameter3,
                    (_NDIS_BIND_PARAMETERS *)v48);
            Blink = v31;
            if ( (unsigned __int8)byte_1C009960D >= 4u )
              WPP_SF_qD(0x5Au, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)this, v31);
            if ( Blink == 259 )
            {
              KeWaitForSingleObject(&BugCheckParameter3[4], Executive, 0, 0, 0LL);
              Blink = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
            }
            if ( Blink )
              goto LABEL_55;
            if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
            {
              if ( !ndisReferenceOpenByHandle((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
                KeBugCheckEx(
                  0x7Cu,
                  0x16uLL,
                  (ULONG_PTR)this,
                  (ULONG_PTR)BugCheckParameter3,
                  (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
              v42 = 1;
              ndisIndicateInitialStateToBinding((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink);
            }
            if ( MiniportSupportsReceiveThrottle(a1) )
            {
LABEL_54:
              LOBYTE(v33) = 1;
              ndisNotifyWmiBindUnbind(a1, this, v33);
LABEL_55:
              ExFreePoolWithTag(Destination.Buffer, 0);
              if ( (unsigned __int8)byte_1C009960D >= 4u )
              {
                LODWORD(Timeout) = Blink;
                WPP_SF_ZZL(0x1Cu, v34, &this->Name.Length, &a1->pAdapterInstanceName->Length, Timeout);
              }
              if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
                McTemplateK0jqxzq(
                  v35,
                  &ProtocolBindStatus,
                  &a1->InterfaceGuid,
                  (__int64)&a1->InterfaceGuid,
                  a1->IfIndex,
                  a1->NetLuid.Value,
                  this->Name.Buffer,
                  Blink);
              v6 = v42;
              goto LABEL_60;
            }
            if ( this->IsIPv4 == 1 )
            {
              v40 = 0;
            }
            else if ( this->IsIPv6 == 1 )
            {
              v40 = 1;
            }
            else
            {
              if ( this->IsNdisTest6 != 1 )
                goto LABEL_54;
              v40 = 2;
            }
            ndisBindUnbindPeriodicReceives(v32, v40);
            goto LABEL_54;
          }
          ExFreePoolWithTag(Destination.Buffer, 0);
        }
        v6 = 0;
LABEL_60:
        p_Mutex = &this->Mutex;
        goto LABEL_61;
      }
      if ( MinorNdisVersion >= 0x14u )
      {
        v17 = 3;
        v18 = 280;
        goto LABEL_15;
      }
      if ( MinorNdisVersion )
      {
        v17 = 2;
        v18 = 256;
        goto LABEL_15;
      }
    }
    v17 = 1;
    v18 = 248;
    goto LABEL_15;
  }
  Blink = -1073741823;
LABEL_67:
  if ( v48[25] )
    ExFreePoolWithTag((PVOID)v48[25], 0);
  if ( v48[38] )
    ExFreePoolWithTag((PVOID)v48[38], 0);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qq(0x1Du, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, this);
  return Blink;
}
