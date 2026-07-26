/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C0007254
 * Callers:
 *     ndisUpdateOperationalStatus @ 0x1C0004FD4 (ndisUpdateOperationalStatus.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0006CE8 (ndisIndicateInitialStateToBinding.c)
 *     NdisMIndicateStatus @ 0x1C005DF60 (NdisMIndicateStatus.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C0065AB8 (ndisSendSystemPowerStateIndication.c)
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C000251C (ndisDeletePatternEntry.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0008030 (ndisWriteWmiStatusIndication.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C000857C (ndisMergeOffloadCapsAndRegistry.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C504 (ndisCancelMediaDisconnectTimer.c)
 *     ndisInvokeStatus @ 0x1C001E838 (ndisInvokeStatus.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001EADC (ndisSetMediaDisconnectTimer.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F9A8 (ndisMRestoreOpenHandlers.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0022FEC (ndisScheduleWorkItemInternal.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003D140 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     ndisMAllocateRequest @ 0x1C00443FC (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0047120 (ndisQueueRequestOnTopAsync.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C0049A14 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004A7B0 (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     WPP_SF_qLLL @ 0x1C005EA80 (WPP_SF_qLLL.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005F8B4 (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C006778C (ndisTopTcpConnectionOffloadStatus.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 */

char __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  int v2; // edi
  unsigned __int64 *v3; // r13
  void *v4; // rbx
  __int128 *v5; // r12
  int v6; // r14d
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  unsigned int v8; // r15d
  __int64 (__fastcall *v9)(); // rcx
  bool v10; // zf
  char v11; // bl
  __int64 (__fastcall *v12)(); // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  char v16; // r15
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // r15
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r14
  char v22; // r12
  KIRQL v23; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  KIRQL v25; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r13
  KIRQL v27; // r14
  ULONG_PTR v28; // r8
  int v29; // edx
  __int64 v30; // r9
  ULONG_PTR v31; // r11
  struct _KEVENT *v32; // rcx
  KIRQL v33; // al
  ULONG_PTR v34; // r8
  KIRQL v35; // r14
  __int64 v36; // r9
  unsigned __int8 v37; // r10
  unsigned __int8 v38; // dl
  int v39; // ebx
  bool v40; // cl
  struct _KEVENT *RemoveReadyEvent; // rcx
  KIRQL v42; // al
  ULONG_PTR v43; // r8
  KIRQL v44; // r14
  int v45; // edx
  __int64 v46; // r9
  unsigned __int8 v47; // r10
  unsigned __int8 v48; // cl
  char v49; // r11
  int v50; // ebx
  __int64 v51; // rdx
  char v52; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // r14
  KIRQL v55; // bl
  unsigned int v56; // ebx
  ULONG_PTR v57; // r8
  __int64 v58; // rdx
  int v59; // ebx
  char v60; // di
  KIRQL v61; // r15
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v63; // rdx
  unsigned __int8 v64; // r10
  unsigned __int8 v65; // cl
  int v66; // eax
  bool v67; // al
  bool v68; // bl
  _NET_IF_MEDIA_CONNECT_STATE v69; // ecx
  bool v70; // cf
  size_t v71; // rbx
  unsigned __int16 v72; // ax
  int v73; // ecx
  unsigned __int8 v74; // r10
  unsigned __int8 v75; // dl
  unsigned __int16 v76; // ax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  size_t v78; // r8
  unsigned __int16 v79; // ax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  size_t v81; // r8
  _NET_IF_MEDIA_CONNECT_STATE v82; // eax
  unsigned int Flags; // r9d
  unsigned __int16 v84; // ax
  char v85; // bl
  unsigned int v86; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned int v88; // r9d
  int v89; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 (__fastcall *v95)(); // rax
  __int64 v96; // rcx
  __int64 v97; // r9
  __int64 v98; // rax
  void *v99; // r14
  int v100; // ebx
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  ULONG_PTR v102; // rbx
  unsigned int v103; // edx
  char v104; // al
  ULONG_PTR v105; // rbx
  unsigned int v106; // edx
  char v107; // al
  struct _KEVENT *v108; // rcx
  ULONG_PTR v109; // rbx
  unsigned int v110; // edx
  char v111; // al
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rbx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v114; // eax
  __int64 v115; // r9
  unsigned __int64 *v116; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  ULONG_PTR v118; // rbx
  unsigned int v119; // edx
  char v120; // al
  char v122; // [rsp+50h] [rbp-B0h]
  bool v123; // [rsp+51h] [rbp-AFh]
  char v124; // [rsp+52h] [rbp-AEh]
  bool v125; // [rsp+53h] [rbp-ADh]
  char v126; // [rsp+54h] [rbp-ACh]
  char v127; // [rsp+55h] [rbp-ABh]
  char v128; // [rsp+56h] [rbp-AAh]
  char v129; // [rsp+57h] [rbp-A9h]
  char v130; // [rsp+58h] [rbp-A8h]
  int v131; // [rsp+5Ch] [rbp-A4h]
  unsigned int v132; // [rsp+5Ch] [rbp-A4h]
  unsigned int v133; // [rsp+60h] [rbp-A0h]
  KIRQL v134; // [rsp+64h] [rbp-9Ch]
  int v135; // [rsp+68h] [rbp-98h]
  int v136; // [rsp+6Ch] [rbp-94h]
  bool v137; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v138)(); // [rsp+78h] [rbp-88h]
  int v139; // [rsp+80h] [rbp-80h]
  struct _NDIS_M_DRIVER_BLOCK *v141; // [rsp+90h] [rbp-70h]
  unsigned __int64 *Src; // [rsp+98h] [rbp-68h]
  __int64 v143; // [rsp+A0h] [rbp-60h]
  _NDIS_MINIPORT_BLOCK *v144; // [rsp+A8h] [rbp-58h]
  void *v146; // [rsp+C0h] [rbp-40h]
  __int128 v147; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v148; // [rsp+E0h] [rbp-20h]
  __int128 v149; // [rsp+F0h] [rbp-10h]
  __int128 v150; // [rsp+100h] [rbp+0h]
  __int128 v151; // [rsp+110h] [rbp+10h]
  __int128 v152; // [rsp+120h] [rbp+20h]
  __int128 v153; // [rsp+130h] [rbp+30h]
  _QWORD v154[14]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v155; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+1B8h] [rbp+B8h]
  _QWORD v157[5]; // [rsp+1C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64 *)*((_QWORD *)a2 + 6);
  v4 = (void *)*((_QWORD *)a2 + 4);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a2 + 14);
  LOBYTE(v2) = 2;
  v136 = 0;
  Src = v3;
  v126 = 0;
  v137 = 0;
  v146 = v4;
  v130 = 0;
  v124 = 0;
  v127 = 0;
  v123 = 0;
  v122 = 0;
  v129 = 0;
  v125 = 0;
  v128 = 0;
  v131 = v6;
  v133 = v8;
  if ( (unsigned __int8)byte_1C009875F >= 4u )
    WPP_SF_qLq(53LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, (unsigned int)v6, v4);
  v9 = (__int64 (__fastcall *)())v4;
  v10 = v4 == &ndisIntReqWmi;
  v11 = 0;
  if ( v10 )
    v9 = 0LL;
  v138 = v9;
  if ( v9 && *(_BYTE *)v9 != 18 )
  {
    if ( (unsigned __int8)byte_1C009875F >= 2u )
      WPP_SF_q(54LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7);
    v138 = 0LL;
  }
  LOBYTE(v12) = v6 - 11;
  v13 = v5[1];
  v147 = *v5;
  v148 = v13;
  v14 = v5[3];
  v149 = v5[2];
  v150 = v14;
  v15 = v5[5];
  v151 = v5[4];
  v152 = v15;
  v153 = v5[6];
  if ( (unsigned int)(v6 - 1073807371) > 1 )
  {
    if ( v6 == 1073807383 )
    {
      v66 = *((_DWORD *)v5 + 6);
      v7->LinkStateIndicationFlags |= 7u;
      v67 = (v66 & 8) != 0;
      v137 = v67;
      v68 = v67;
      if ( !v3 || (v137 = v67, v8 < 0x28) )
      {
        v11 = 0;
        goto LABEL_16;
      }
      if ( (unsigned __int8)byte_1C009875F >= 4u )
        WPP_SF_qD(55LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7, *((unsigned int *)v3 + 1));
      if ( v8 == -2 )
      {
        v133 = 40;
        *((_DWORD *)v5 + 14) = 40;
      }
      v69 = *((_DWORD *)v3 + 1);
      if ( v69 == MediaConnectStateConnected )
      {
        MediaConnectState = v7->MediaConnectState;
        v136 = 1073807371;
        v123 = MediaConnectState == MediaConnectStateConnected;
        v125 = MediaConnectState != MediaConnectStateConnected;
      }
      else if ( v69 == MediaConnectStateDisconnected )
      {
        v82 = v7->MediaConnectState;
        v136 = 1073807372;
        v123 = v82 != MediaConnectStateConnected;
        v125 = v82 == MediaConnectStateConnected;
      }
      else
      {
        v123 = 1;
      }
      v70 = v7->MajorNdisVersion < 6u;
      v7->MediaConnectState = v69;
      v7->MediaDuplexState = *((_DWORD *)v3 + 2);
      v7->RcvLinkSpeed = v3[3];
      v7->XmitLinkSpeed = v3[2];
      v7->PauseFunctions = *((_DWORD *)v3 + 8);
      if ( v70 )
      {
        MaxXmitLinkSpeed = v7->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < v3[2] )
          v7->MaxXmitLinkSpeed = v3[2];
        MaxRcvLinkSpeed = v7->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < v3[3] )
          v7->MaxRcvLinkSpeed = v3[3];
        v93 = v7->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v93 == 0x40000000 || v93 < v3[2] )
          v7->TopFilterRestartAttributes.MaxXmitLinkSpeed = v3[2];
        v94 = v7->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v94 == 0x40000000 || v94 < v3[3] )
          v7->TopFilterRestartAttributes.MaxRcvLinkSpeed = v3[3];
      }
      v7->AutoNegotiationFlags = *((_DWORD *)v3 + 9);
      v137 = v68;
      v16 = ndisIfSetInterfaceState(v7);
      v124 = v16;
      v11 = 0;
    }
    else
    {
      v16 = 0;
    }
    if ( v6 == 1073807394 )
    {
      LODWORD(v12) = ndisUpdateMiniportPortStates(v7, v5);
      if ( (_DWORD)v12 )
      {
        if ( (unsigned __int8)byte_1C009875F < 4u )
          return (char)v12;
        v95 = v138;
        v96 = 56LL;
        v97 = 1073807394LL;
        goto LABEL_325;
      }
      if ( *((_DWORD *)v5 + 4) )
        goto LABEL_14;
      v16 = ndisIfSetInterfaceState(v7);
      v124 = v16;
    }
    if ( v6 == 1073807379 )
    {
      v7->LinkStateIndicationFlags |= 2u;
      v98 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
      v99 = (void *)v98;
      if ( v98 )
      {
        *(_DWORD *)(v98 + 88) |= 2u;
        v2 = (_DWORD)v7 + 96;
        v7->MiniportThread = 0LL;
        v7->LockDbg = 0;
        KeReleaseSpinLock(&v7->Lock, 2u);
        v100 = ndisQueueRequestOnTopAsync(v7, v99);
        LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&v7->Lock);
        v7->MiniportThread = KeGetCurrentThread();
        v7->LockDbg = 724878;
        if ( v100 != 259 )
          ExFreePoolWithTag(v99, 0);
        v11 = 0;
      }
      v6 = v131;
      v130 = 1;
    }
    if ( ((v6 - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v12) = ndisTopTcpConnectionOffloadStatus(v7, v5);
      if ( !(_BYTE)v12 )
      {
        if ( (unsigned __int8)byte_1C009875F >= 4u )
          LOBYTE(v12) = WPP_SF_d(57LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (unsigned int)v6);
        return (char)v12;
      }
    }
    if ( v6 == 1073807384 && (*((_DWORD *)v5 + 6) & 4) != 0 )
    {
      v136 = 1073807371;
      v125 = 1;
      v7->MediaConnectState = MediaConnectStateConnected;
      v124 = ndisIfSetInterfaceState(v7);
      v16 = v124;
      memset(v157, 0, sizeof(v157));
      MiniportMediaDuplexState = v7->MiniportMediaDuplexState;
      DWORD2(v148) |= 0x1000u;
      LODWORD(v157[1]) = MiniportMediaDuplexState;
      v157[2] = v7->MiniportXmitLinkSpeed;
      v157[3] = v7->MiniportRcvLinkSpeed;
      v157[4] = *(_QWORD *)&v7->MiniportPauseFunctions;
      *(_QWORD *)&v150 = v157;
      v157[0] = 0x100280180LL;
      DWORD1(v148) = 1073807383;
      DWORD2(v150) = 40;
    }
LABEL_14:
    if ( v16 )
    {
      v127 = 1;
      IfBlock = v7->IfBlock;
      ifOperStatusFlags = 0;
      v155 = 786816LL;
      HIDWORD(v155) = IfBlock->ifOperStatus;
      ifOperStatusFlags = IfBlock->ifOperStatusFlags;
      memset(v154, 0, sizeof(v154));
      LODWORD(v154[0]) = 7340440;
      v154[6] = &v155;
      v154[1] = v7;
      HIDWORD(v154[2]) = 1073807395;
      LODWORD(v154[7]) = 12;
    }
LABEL_16:
    v144 = v7;
    v139 = 0;
    v7->MiniportThread = 0LL;
    v7->LockDbg = 0;
    KeReleaseSpinLock(&v7->Lock, v2);
    LOBYTE(v17) = v7->MiniportMediaType == NdisMediumNative802_11;
    v19 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v7, 0x200000, v18, v17, 1, 57);
    v143 = v19;
    v20 = v19;
    if ( v19 )
    {
      if ( (struct _NDIS_MINIPORT_BLOCK *)v19 != v7 )
      {
        v139 = -1073741823;
        goto LABEL_27;
      }
      BaseMiniport = v7->BaseMiniport;
      LOBYTE(v2) = 0;
      v22 = 0;
      v135 = v2;
      v23 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = ndisMiniDriverList;
      v141 = ndisMiniDriverList;
LABEL_19:
      if ( NextDriver )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v23);
        v25 = KeAcquireSpinLockRaiseToDpc(&NextDriver->Ref.SpinLock);
        MiniportQueue = NextDriver->MiniportQueue;
        v134 = v25;
        while ( 1 )
        {
          if ( !MiniportQueue )
          {
LABEL_24:
            KeReleaseSpinLock(&NextDriver->Ref.SpinLock, v134);
            v23 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            NextDriver = v141->NextDriver;
            v141 = NextDriver;
            if ( v22 )
              break;
            goto LABEL_19;
          }
          if ( MiniportQueue != BaseMiniport )
            goto LABEL_23;
          v22 = 1;
          v60 = 1;
          v61 = KeAcquireSpinLockRaiseToDpc(&BaseMiniport->Ref.SpinLock);
          if ( !BaseMiniport->Ref.Closing )
          {
            RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)BaseMiniport->RefCountTracker;
            if ( RefCountTracker )
              NdisReferenceWithTag(RefCountTracker);
            v10 = BaseMiniport->Ref.ReferenceCount++ == -1;
            if ( !v10 )
              goto LABEL_128;
            BaseMiniport->Ref.ReferenceCount = -1;
          }
          v60 = 0;
LABEL_128:
          if ( (unsigned __int8)byte_1C009875B >= 4u )
            WPP_SF_qD(
              12LL,
              &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids,
              BaseMiniport,
              BaseMiniport->Ref.ReferenceCount);
          KeReleaseSpinLock(&BaseMiniport->Ref.SpinLock, v61);
          if ( v60 )
          {
            LOBYTE(v2) = 1;
          }
          else
          {
            if ( (BaseMiniport->Flags & 0x80200020) != 0
              || (BaseMiniport->PnPFlags & 0x1084110) != 0
              || BaseMiniport->PnPDeviceState != NdisPnPDeviceStarted
              || BaseMiniport->CurrentDevicePowerState != PowerDeviceD0 )
            {
              v2 = v135;
              goto LABEL_23;
            }
            LOBYTE(v63) = 56;
            v2 = (unsigned __int8)v135;
            if ( (unsigned __int8)ndisReferenceMiniport(BaseMiniport, v63) )
              v2 = 1;
          }
          v135 = v2;
LABEL_23:
          MiniportQueue = MiniportQueue->NextMiniport;
          if ( v22 )
            goto LABEL_24;
        }
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v23);
      v7 = a1;
      v3 = Src;
      v5 = a2;
      v20 = v143;
      if ( (_BYTE)v2 )
      {
        v144 = a1->BaseMiniport;
        v128 = 1;
      }
LABEL_27:
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 96));
      v28 = *(_QWORD *)(v20 + 4928);
      *(_QWORD *)(v20 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v20 + 1856) = 71824;
      if ( v28 )
      {
        v29 = *(unsigned __int8 *)(v28 + 1);
        if ( *(_BYTE *)(v28 + 1) )
        {
          if ( v29 == 1 )
          {
            v102 = v28 + 72;
            v103 = *(_DWORD *)(v28 + 128);
            if ( v103 >> 17 < 0x3FFE && (unsigned __int16)v103 >> 1 == (v103 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 72));
              *(_DWORD *)(v102 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v103 & 0xFFFE) == 0 && (v103 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v28, 1uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 72), 0);
            }
          }
        }
        else
        {
          v30 = *(_QWORD *)(v28 + 8);
          v31 = (unsigned int)(v29 + 1);
          if ( v30 && (v74 = *(_BYTE *)(v28 + 3), v75 = 0, v74) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v30 + 2LL * v75) == (_BYTE)v31 )
              {
                v104 = *(_BYTE *)(v30 + 2LL * v75 + 1);
                if ( v104 )
                  break;
              }
              v75 += v31;
              if ( v75 >= v74 )
                goto LABEL_30;
            }
            *(_BYTE *)(v30 + 2LL * v75 + 1) = v104 - v31;
          }
          else
          {
LABEL_30:
            if ( !_bittestandreset((signed __int32 *)(v28 + 16), 1u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v28, v31);
          }
        }
      }
      v10 = (*(_DWORD *)(v20 + 3132))-- == 1;
      if ( v10 )
      {
        v32 = *(struct _KEVENT **)(v20 + 3144);
        if ( v32 )
          KeSetEvent(v32, 0, 0);
      }
      *(_QWORD *)(v20 + 520) = 0LL;
      *(_DWORD *)(v20 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 96), v27);
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v20);
      v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4464));
      v34 = *(_QWORD *)(v20 + 4920);
      v35 = v33;
      if ( v34 )
      {
        if ( *(_BYTE *)(v34 + 1) )
        {
          if ( *(_BYTE *)(v34 + 1) == 1 )
          {
            v105 = v34 + 3656;
            v106 = *(_DWORD *)(v34 + 3712);
            if ( v106 >> 17 < 0x3FFE && (unsigned __int16)v106 >> 1 == (v106 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v34 + 3656));
              *(_DWORD *)(v105 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v106 & 0xFFFE) == 0 && (v106 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v34, 0x39uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v34 + 3656), 0);
            }
          }
        }
        else
        {
          v36 = *(_QWORD *)(v34 + 8);
          if ( v36 && (v37 = *(_BYTE *)(v34 + 3), v38 = 0, v37) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v36 + 2LL * v38) == 57 )
              {
                v107 = *(_BYTE *)(v36 + 2LL * v38 + 1);
                if ( v107 )
                  break;
              }
              if ( ++v38 >= v37 )
                goto LABEL_42;
            }
            *(_BYTE *)(v36 + 2LL * v38 + 1) = v107 - 1;
          }
          else
          {
LABEL_42:
            if ( !_bittestandreset((signed __int32 *)(v34 + 20), 0x19u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v34, 0x39uLL);
          }
        }
      }
      v39 = *(_DWORD *)(v20 + 4472) - 1;
      *(_DWORD *)(v20 + 4472) = v39;
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v20, *(unsigned int *)(v20 + 4472));
      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 4464), v35);
      if ( v39 )
      {
        v11 = 0;
      }
      else
      {
        v108 = *(struct _KEVENT **)(v20 + 1608);
        v11 = 0;
        if ( v108 )
          KeSetEvent(v108, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v20);
      v6 = v131;
    }
    else
    {
      v139 = -1073741823;
    }
    if ( !v139 )
      v11 = v127;
    ndisWriteWmiStatusIndication((int)v144, (int)v144->pAdapterInstanceName, (int)v5, v6, v3, v133);
    v40 = 0;
    if ( !v139 )
      v40 = v125;
    if ( v40 )
      ndisWriteWmiStatusIndication((int)v144, (int)v144->pAdapterInstanceName, (int)v5, v136, 0LL, 0);
    if ( v11 )
      ndisWriteWmiStatusIndication((int)v144, (int)v144->pAdapterInstanceName, (int)v5, 1073807395, &v155, 12);
    KeAcquireSpinLockRaiseToDpc(&v7->Lock);
    v7->MiniportThread = KeGetCurrentThread();
    v7->LockDbg = 725009;
    if ( v128 )
    {
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v144);
      v42 = KeAcquireSpinLockRaiseToDpc(&v144->Ref.SpinLock);
      v43 = (ULONG_PTR)v144->RefCountTracker;
      v44 = v42;
      if ( v43 )
      {
        v45 = *(unsigned __int8 *)(v43 + 1);
        if ( *(_BYTE *)(v43 + 1) )
        {
          if ( v45 == 1 )
          {
            v109 = v43 + 3592;
            v110 = *(_DWORD *)(v43 + 3648);
            if ( v110 >> 17 < 0x3FFE && (unsigned __int16)v110 >> 1 == (v110 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v43 + 3592));
              *(_DWORD *)(v109 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v110 & 0xFFFE) == 0 && (v110 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v43, 0x38uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v43 + 3592), 0);
            }
          }
        }
        else
        {
          v46 = *(_QWORD *)(v43 + 8);
          if ( v46 && (v47 = *(_BYTE *)(v43 + 3), v48 = 0, v47) )
          {
            v49 = v45 + 1;
            while ( 1 )
            {
              if ( *(_BYTE *)(v46 + 2LL * v48) == 56 )
              {
                v111 = *(_BYTE *)(v46 + 2LL * v48 + 1);
                if ( v111 )
                  break;
              }
              v48 += v49;
              if ( v48 >= v47 )
                goto LABEL_68;
            }
            *(_BYTE *)(v46 + 2LL * v48 + 1) = v111 - v49;
          }
          else
          {
LABEL_68:
            if ( !_bittestandreset((signed __int32 *)(v43 + 20), 0x18u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v43, 0x38uLL);
          }
        }
      }
      v50 = v144->Ref.ReferenceCount - 1;
      v144->Ref.ReferenceCount = v50;
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v144, v144->Ref.ReferenceCount);
      KeReleaseSpinLock(&v144->Ref.SpinLock, v44);
      if ( !v50 )
      {
        RemoveReadyEvent = v144->RemoveReadyEvent;
        if ( RemoveReadyEvent )
          KeSetEvent(RemoveReadyEvent, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v144);
      v6 = v131;
    }
    v51 = 256LL;
    if ( v6 == 1073807383 )
      v6 = v136;
    v132 = v6;
    if ( v6 == 1073807384 )
    {
      if ( (*((_DWORD *)v5 + 6) & 4) == 0 )
      {
        v123 = 1;
        if ( v133 >= 4 && (dword_1C0099FC4 & 0x100) != 0 )
          McTemplateK0jqxq(
            (_DWORD)RemoveReadyEvent,
            (unsigned int)&MiniportStatusIndicationNetworkChange,
            (_DWORD)v7 + 4032,
            (_DWORD)v7 + 4032,
            v7->IfIndex,
            v7->NetLuid.Value,
            *(_DWORD *)v3);
        goto LABEL_85;
      }
      v6 = 1073807371;
      v132 = 1073807371;
    }
    switch ( v6 )
    {
      case 1073872902:
        v52 = 1;
        v122 = 1;
        if ( v133 >= 0x70 && *(_BYTE *)v3 == 0xA7 && *((_WORD *)v3 + 1) >= 0x70u && *((_BYTE *)v3 + 1) )
        {
          v7->Offload->SupportsTopOffload = 1;
          ndisMergeOffloadCapsAndRegistry(v7, v3);
          v71 = 188LL;
          memset(&v7->Offload->TopCapabilities, 0, sizeof(v7->Offload->TopCapabilities));
          v72 = *((_WORD *)v3 + 1);
          if ( v72 < 0xBCu )
            v71 = v72;
          memmove(&v7->Offload->TopCapabilities, v3, v71);
          v52 = 1;
        }
        goto LABEL_86;
      case 1073807395:
        v123 = 1;
        if ( v133 >= 0xC )
        {
          if ( (unsigned __int8)byte_1C009875F >= 4u )
          {
            WPP_SF_qdD(
              60LL,
              &WPP_89f39f5878d93d725c4978a535989123_Traceguids,
              v7,
              *((unsigned int *)v3 + 1),
              *((_DWORD *)v3 + 2));
            v51 = 256LL;
          }
          v73 = *((_DWORD *)v3 + 1);
          if ( v73 == 1 )
          {
            if ( (dword_1C0099FC4 & 0x100) != 0 )
              McTemplateK0jqxqq(
                1,
                (unsigned int)&MiniportStatusIndicationOperStatusUp,
                (_DWORD)v7 + 4032,
                (_DWORD)v7 + 4032,
                v7->IfIndex,
                v7->NetLuid.Value,
                1,
                *((_DWORD *)v3 + 2));
          }
          else if ( (dword_1C0099FC4 & 0x100) != 0 )
          {
            McTemplateK0jqxqq(
              v73,
              (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
              (_DWORD)v7 + 4032,
              (_DWORD)v7 + 4032,
              v7->IfIndex,
              v7->NetLuid.Value,
              v73,
              *((_DWORD *)v3 + 2));
          }
        }
        break;
      case 1073872912:
        if ( v133 >= 0x38 && *(_BYTE *)v3 == 0x80 )
        {
          v79 = *((_WORD *)v3 + 1);
          if ( v79 >= 0x38u )
          {
            if ( *((_BYTE *)v3 + 1) )
            {
              TopReceiveFilterCurrentCapabilities = v7->TopReceiveFilterCurrentCapabilities;
              if ( TopReceiveFilterCurrentCapabilities )
              {
                v81 = 84LL;
                if ( v79 < 0x54u )
                  v81 = v79;
                memmove(TopReceiveFilterCurrentCapabilities, v3, v81);
                v7->EnabledReceiveQueueTypes = *((_DWORD *)v3 + 3);
                v7->EnabledReceiveFilterTypes = *((_DWORD *)v3 + 2);
              }
            }
          }
        }
        break;
      case 1073872960:
        if ( v133 >= 0x20 && *(_BYTE *)v3 == 0x80 )
        {
          v76 = *((_WORD *)v3 + 1);
          if ( v76 >= 0x20u )
          {
            if ( *((_BYTE *)v3 + 1) )
            {
              TopNicSwitchCurrentCapabilities = v7->TopNicSwitchCurrentCapabilities;
              if ( TopNicSwitchCurrentCapabilities )
              {
                v78 = 132LL;
                if ( v76 < 0x84u )
                  v78 = v76;
                memmove(TopNicSwitchCurrentCapabilities, v3, v78);
              }
            }
          }
        }
        break;
      case 1073807372:
        Flags = v7->Flags;
        v84 = v7->MediaSenseDisconnectCount + 1;
        v7->MediaSenseDisconnectCount = v84;
        if ( (Flags & 0x20000000) != 0 || v84 == 1 )
        {
          v85 = 1;
          v126 = 1;
          if ( (unsigned __int8)byte_1C009875F >= 4u )
            WPP_SF_qLLL(58LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7);
          if ( (dword_1C0099FC4 & 0x80u) != 0 )
            McTemplateK0jqxqqq(
              (_DWORD)RemoveReadyEvent,
              (unsigned int)&MiniportStatusIndicationDisconnect,
              (_DWORD)v7 + 4032,
              (_DWORD)v7 + 4032,
              v7->IfIndex,
              v7->NetLuid.Value,
              v7->Flags,
              v7->PnPFlags,
              v7->CurrentDevicePowerState);
        }
        else
        {
          v85 = 0;
        }
        v86 = v7->Flags & 0xDFFFFFFF;
        v7->MediaConnectState = MediaConnectStateDisconnected;
        v7->Flags = v86;
        if ( !v137 )
        {
          v7->Flags = v86 | 0x4000000;
          if ( v85 )
            ndisSetMediaDisconnectTimer(v7, v51);
        }
        break;
      case 1073807371:
        v88 = v7->Flags;
        ++v7->MediaSenseConnectCount;
        if ( (v88 & 0x20000000) == 0 )
        {
          v126 = 1;
          if ( (unsigned __int8)byte_1C009875F >= 4u )
            WPP_SF_qLLL(59LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7);
          if ( (dword_1C0099FC4 & 0x80u) != 0 )
            McTemplateK0jqxqqq(
              (_DWORD)RemoveReadyEvent,
              (unsigned int)&MiniportStatusIndicationConnect,
              (_DWORD)v7 + 4032,
              (_DWORD)v7 + 4032,
              v7->IfIndex,
              v7->NetLuid.Value,
              v7->Flags,
              v7->PnPFlags,
              v7->CurrentDevicePowerState);
        }
        v89 = v7->Flags | 0x20000000;
        v7->MediaConnectState = MediaConnectStateConnected;
        v7->Flags = v89;
        if ( !v137 )
        {
          v7->Flags = v89 | 0x4000000;
          ndisCancelMediaDisconnectTimer(v7, v51);
        }
        break;
      default:
        if ( v6 > 1073873055 && v6 <= 1073873057 )
          ndisMIndicateQosParametersChange(v7);
        break;
    }
LABEL_85:
    v52 = 0;
LABEL_86:
    v12 = (__int64 (__fastcall *)())&ndisIntReqWmi;
    if ( v146 != &ndisIntReqWmi )
    {
      OpenQueue = v7->OpenQueue;
      if ( OpenQueue )
      {
        v12 = v138;
        while ( 1 )
        {
          if ( v12 && (char *)v12 != (char *)OpenQueue )
          {
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
            goto LABEL_92;
          }
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
            goto LABEL_290;
          if ( v52 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
          {
            if ( !v129 )
            {
              StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
              if ( StatusUnbindWorkItem )
              {
                ndisReferenceMiniportNoCheck((__int64)v7);
                OpenQueue->StatusUnbindWorkItem = 0LL;
                v129 = 1;
                ndisScheduleWorkItemInternal(StatusUnbindWorkItem);
              }
            }
            goto LABEL_290;
          }
          if ( v6 == 1073938515 )
            ndisOpenIndicatePMCapabilities(OpenQueue, v5);
          if ( v6 == 1073938513 )
          {
            if ( *((_DWORD *)v5 + 14) < 4u )
              goto LABEL_290;
            p_WOLPatternList = &OpenQueue->WOLPatternList;
          }
          else
          {
            if ( v6 != 1073938514 )
              goto LABEL_100;
            if ( *((_DWORD *)v5 + 14) < 4u )
              goto LABEL_290;
            p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
          }
          if ( ndisDeletePatternEntry(p_WOLPatternList, **((_DWORD **)v5 + 6)) )
          {
            --*((_DWORD *)v5 + 24);
LABEL_100:
            v55 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker);
            ++OpenQueue->References;
            KeReleaseSpinLock(&OpenQueue->RefCountLock, v55);
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            if ( OpenQueue->StatusHandler )
            {
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              OpenQueue->OpenFlags |= 0x100u;
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
              v7->MiniportThread = 0LL;
              v7->LockDbg = 0;
              KeReleaseSpinLockFromDpcLevel(&v7->Lock);
              if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
              {
                if ( !v123 && !*((_DWORD *)a2 + 4) )
                {
                  v114 = *((_DWORD *)a2 + 5);
                  if ( v114 == 1073807383 || v114 == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
                  {
                    v115 = 0LL;
                    v116 = 0LL;
                  }
                  else
                  {
                    v115 = v133;
                    v116 = v3;
                  }
                  OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v132, v116, v115);
                  StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                  if ( StatusCompleteHandler )
                    StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                }
              }
              else if ( !v130 )
              {
                v56 = *((_DWORD *)a2 + 5);
                if ( (unsigned __int8)byte_1C009875F >= 4u )
                  WPP_SF_qD(103LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, OpenQueue, v56);
                ((void (__fastcall *)(void *, __int128 *))OpenQueue->StatusHandler)(
                  OpenQueue->ProtocolBindingContext,
                  a2);
                if ( (unsigned __int8)byte_1C009875F >= 4u )
                  WPP_SF_qD(104LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, OpenQueue, v56);
                if ( *((_DWORD *)a2 + 5) == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
                  ndisInvokeStatus(OpenQueue, &v147);
                if ( v124 )
                  ndisInvokeStatus(OpenQueue, v154);
              }
              KeAcquireSpinLockAtDpcLevel(&v7->Lock);
              v7->MiniportThread = KeGetCurrentThread();
              v7->LockDbg = 725349;
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              OpenQueue->OpenFlags &= ~0x100u;
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            }
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->RefCountLock);
            v57 = (ULONG_PTR)OpenQueue->RefCountTracker;
            if ( v57 )
            {
              if ( *(_BYTE *)(v57 + 1) )
              {
                if ( *(_BYTE *)(v57 + 1) == 1 )
                {
                  v118 = v57 + 456;
                  v119 = *(_DWORD *)(v57 + 512);
                  if ( v119 >> 17 < 0x3FFE && (unsigned __int16)v119 >> 1 == (v119 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v57 + 456));
                    *(_DWORD *)(v118 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v119 & 0xFFFE) == 0 && (v119 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v57, 7uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v57 + 456), 0);
                  }
                }
              }
              else
              {
                v58 = *(_QWORD *)(v57 + 8);
                if ( v58 && (v64 = *(_BYTE *)(v57 + 3), v65 = 0, v64) )
                {
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(v58 + 2LL * v65) == 7 )
                    {
                      v120 = *(_BYTE *)(v58 + 2LL * v65 + 1);
                      if ( v120 )
                        break;
                    }
                    if ( ++v65 >= v64 )
                      goto LABEL_114;
                  }
                  *(_BYTE *)(v58 + 2LL * v65 + 1) = v120 - 1;
                }
                else
                {
LABEL_114:
                  if ( !_bittestandreset((signed __int32 *)(v57 + 16), 7u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v57, 7uLL);
                }
              }
            }
            v59 = --OpenQueue->References;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->RefCountLock);
            if ( !v59 )
              ndisMFinishClose(OpenQueue);
            v5 = a2;
            goto LABEL_118;
          }
LABEL_290:
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_118:
          v12 = v138;
LABEL_92:
          OpenQueue = MiniportNextOpen;
          v10 = MiniportNextOpen == 0LL;
          v6 = v132;
          if ( v10 )
            break;
          v52 = v122;
        }
      }
      if ( v6 == 1073938516 )
        LOBYTE(v12) = ndisUpdateAndIndicatePMCapabilities(v7, v51);
      if ( v126 )
      {
        LODWORD(v12) = *((_DWORD *)v5 + 6);
        if ( ((unsigned __int8)v12 & 2) == 0 )
        {
          LOBYTE(v51) = 2;
          if ( v6 == 1073807371 )
          {
            v7->PnPFlags &= ~0x10000000u;
            ndisMRestoreOpenHandlers(v7, v51);
            v7->PacketIndicateHandler = v7->SavedPacketIndicateHandler;
            LOBYTE(v12) = v7->SavedReceivePathEnabled;
            v7->ReceivePathEnabled = (unsigned __int8)v12;
          }
          else
          {
            v7->PnPFlags |= 0x10000000u;
            ndisMSwapOpenHandlers(v7, v51);
            v12 = ndisMDummyIndicatePacket;
            v7->ReceivePathEnabled = 0;
            v7->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
          }
        }
      }
    }
    if ( (unsigned __int8)byte_1C009875F < 4u )
      return (char)v12;
    v95 = (__int64 (__fastcall *)())*((_QWORD *)v5 + 4);
    v96 = 61LL;
    v97 = (unsigned int)v6;
LABEL_325:
    LOBYTE(v12) = WPP_SF_qLq(v96, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7, v97, v95);
  }
  return (char)v12;
}
