/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C00185E4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0018100 (ndisIndicateInitialStateToBinding.c)
 *     ndisUpdateOperationalStatus @ 0x1C0019E64 (ndisUpdateOperationalStatus.c)
 *     NdisMIndicateStatus @ 0x1C005E1A0 (NdisMIndicateStatus.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012060 (ndisMRestoreOpenHandlers.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0019200 (ndisWriteWmiStatusIndication.c)
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00197D8 (ndisIndicateOffloadChangeInternal.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C474 (ndisMSwapOpenHandlers.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001D998 (ndisScheduleWorkItemInternal.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisInvokeStatus @ 0x1C0023320 (ndisInvokeStatus.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C00235D4 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0023B5C (ndisSetMediaDisconnectTimer.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0026514 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00265B0 (ndisMIndicateNicSwitchCapsChange.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     ndisUpdateMiniportPortStates @ 0x1C0040618 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisMAllocateRequest @ 0x1C00471FC (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0049D3C (ndisQueueRequestOnTopAsync.c)
 *     ndisDeletePatternEntry @ 0x1C004AF30 (ndisDeletePatternEntry.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C004C174 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004CEFC (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     WPP_SF_qLLL @ 0x1C005ED9C (WPP_SF_qLLL.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005FA8C (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0066FAC (ndisTopTcpConnectionOffloadStatus.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
 */

char __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  int v2; // r13d
  __int128 *v3; // r15
  KIRQL v5; // di
  __int64 v6; // r14
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  unsigned int v8; // r12d
  __int64 (__fastcall *v9)(); // rcx
  _NDIS_OPEN_BLOCK *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int64 v14; // r8
  char v15; // r14
  __int64 v16; // r8
  struct _NDIS_MINIPORT_BLOCK *v17; // rax
  struct _NDIS_MINIPORT_BLOCK *v18; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r14
  char v20; // r13
  KIRQL v21; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rax
  KIRQL v24; // al
  KIRQL v25; // di
  ULONG_PTR NsiRefCountTracker; // rcx
  bool v27; // zf
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  KIRQL v29; // al
  ULONG_PTR v30; // rcx
  KIRQL v31; // r14
  int v32; // edi
  char v33; // bl
  _DWORD *v34; // r14
  bool v35; // cl
  struct _KEVENT *v36; // rcx
  KIRQL v37; // al
  ULONG_PTR v38; // rcx
  KIRQL v39; // r14
  int v40; // edi
  __int64 v41; // rdx
  char v42; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // r14
  __int64 v45; // rdx
  KIRQL v46; // al
  NDIS_REFCOUNT_HANDLE__ *v47; // rbx
  KIRQL v48; // r14
  _WORD *v49; // rdx
  KSPIN_LOCK *p_RefCountLock; // rbx
  unsigned int v51; // ebx
  ULONG_PTR v52; // r8
  __int64 v53; // rax
  int v54; // ebx
  _WORD *v55; // r8
  char v56; // bl
  unsigned __int8 v57; // r9
  unsigned __int8 v58; // dl
  int v59; // eax
  bool v60; // al
  bool v61; // bl
  _NET_IF_MEDIA_CONNECT_STATE v62; // ecx
  bool v63; // cf
  int v64; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v65; // eax
  unsigned int Flags; // r9d
  unsigned __int16 v67; // ax
  char v68; // bl
  unsigned int v69; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned int v71; // r9d
  unsigned int v72; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 (__fastcall *v78)(); // rax
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rax
  void *v82; // r14
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  __int64 v84; // r10
  unsigned __int8 v85; // r9
  unsigned __int8 v86; // dl
  _BYTE *v87; // rcx
  unsigned __int8 v88; // dl
  unsigned __int8 v89; // dl
  struct _KEVENT *RemoveReadyEvent; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rbx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  __int64 v93; // r10
  unsigned __int8 v94; // r9
  unsigned __int8 v95; // r8
  _BYTE *v96; // rcx
  unsigned __int8 v97; // dl
  unsigned __int8 v98; // dl
  int v99; // eax
  __int64 v100; // r9
  void *v101; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  ULONG_PTR v103; // rbx
  unsigned int v104; // edx
  int Src; // [rsp+20h] [rbp-E0h]
  char v107; // [rsp+50h] [rbp-B0h]
  bool v108; // [rsp+51h] [rbp-AFh]
  char v109; // [rsp+52h] [rbp-AEh]
  bool v110; // [rsp+53h] [rbp-ADh]
  char v111; // [rsp+54h] [rbp-ACh]
  char v112; // [rsp+55h] [rbp-ABh]
  char v113; // [rsp+56h] [rbp-AAh]
  char v114; // [rsp+57h] [rbp-A9h]
  char v115; // [rsp+58h] [rbp-A8h]
  unsigned int v116; // [rsp+5Ch] [rbp-A4h]
  KIRQL NewIrql; // [rsp+61h] [rbp-9Fh]
  KIRQL v118; // [rsp+62h] [rbp-9Eh]
  int v119; // [rsp+64h] [rbp-9Ch]
  int v120; // [rsp+68h] [rbp-98h]
  bool v121; // [rsp+6Ch] [rbp-94h]
  __int64 (__fastcall *v122)(); // [rsp+70h] [rbp-90h]
  int v123; // [rsp+78h] [rbp-88h]
  _NDIS_MINIPORT_BLOCK *v124; // [rsp+80h] [rbp-80h]
  _DWORD *v125; // [rsp+88h] [rbp-78h]
  int v126; // [rsp+90h] [rbp-70h]
  struct _NDIS_M_DRIVER_BLOCK *v127; // [rsp+98h] [rbp-68h]
  _NDIS_MINIPORT_BLOCK *v128; // [rsp+A0h] [rbp-60h]
  NDIS_REFCOUNT_HANDLE__ *v130; // [rsp+B0h] [rbp-50h]
  __int128 v131; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v132; // [rsp+D0h] [rbp-30h]
  __int128 v133; // [rsp+E0h] [rbp-20h]
  __int128 v134; // [rsp+F0h] [rbp-10h]
  __int128 v135; // [rsp+100h] [rbp+0h]
  __int128 v136; // [rsp+110h] [rbp+10h]
  __int128 v137; // [rsp+120h] [rbp+20h]
  _QWORD v138[14]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v139; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+1A8h] [rbp+A8h]
  _QWORD v141[5]; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = *((_DWORD *)a2 + 5);
  v3 = a2;
  v126 = v2;
  v5 = 2;
  v120 = 0;
  v6 = *((_QWORD *)a2 + 6);
  RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)*((_QWORD *)a2 + 4);
  v8 = *((_DWORD *)a2 + 14);
  v125 = (_DWORD *)v6;
  v130 = RefCountTracker;
  v116 = v8;
  v111 = 0;
  v121 = 0;
  v115 = 0;
  v109 = 0;
  v112 = 0;
  v108 = 0;
  v107 = 0;
  v114 = 0;
  v110 = 0;
  v113 = 0;
  if ( (unsigned __int8)byte_1C009261F >= 4u )
    WPP_SF_qLq(52LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, (unsigned int)v2, RefCountTracker);
  v9 = (__int64 (__fastcall *)())RefCountTracker;
  if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)&ndisIntReqWmi )
    v9 = 0LL;
  v122 = v9;
  if ( v9 && *(_BYTE *)v9 != 18 )
  {
    if ( (unsigned __int8)byte_1C009261F >= 2u )
      WPP_SF_q(53LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
    v122 = 0LL;
  }
  LOBYTE(v10) = v2 - 11;
  v11 = v3[1];
  v131 = *v3;
  v132 = v11;
  v12 = v3[3];
  v133 = v3[2];
  v134 = v12;
  v13 = v3[5];
  v135 = v3[4];
  v136 = v13;
  v137 = v3[6];
  if ( (unsigned int)(v2 - 1073807371) > 1 )
  {
    v14 = 40LL;
    if ( v2 == 1073807383 )
    {
      v59 = *((_DWORD *)v3 + 6);
      a1->LinkStateIndicationFlags |= 7u;
      v60 = (v59 & 8) != 0;
      v121 = v60;
      v61 = v60;
      if ( !v6 )
        goto LABEL_16;
      v121 = v60;
      if ( v8 < 0x28 )
        goto LABEL_16;
      if ( (unsigned __int8)byte_1C009261F >= 4u )
      {
        WPP_SF_qD(54LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, *(unsigned int *)(v6 + 4));
        LODWORD(v14) = 40;
      }
      if ( v8 == -2 )
      {
        v116 = v14;
        *((_DWORD *)v3 + 14) = v14;
      }
      v62 = *(_DWORD *)(v6 + 4);
      if ( v62 == MediaConnectStateConnected )
      {
        MediaConnectState = a1->MediaConnectState;
        v120 = 1073807371;
        v108 = MediaConnectState == MediaConnectStateConnected;
        v110 = MediaConnectState != MediaConnectStateConnected;
      }
      else if ( v62 == MediaConnectStateDisconnected )
      {
        v65 = a1->MediaConnectState;
        v120 = 1073807372;
        v108 = v65 != MediaConnectStateConnected;
        v110 = v65 == MediaConnectStateConnected;
      }
      else
      {
        v108 = 1;
      }
      v63 = a1->MajorNdisVersion < 6u;
      a1->MediaConnectState = v62;
      a1->MediaDuplexState = *(_DWORD *)(v6 + 8);
      a1->RcvLinkSpeed = *(_QWORD *)(v6 + 24);
      a1->XmitLinkSpeed = *(_QWORD *)(v6 + 16);
      a1->PauseFunctions = *(_DWORD *)(v6 + 32);
      if ( v63 )
      {
        MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *(_QWORD *)(v6 + 16) )
          a1->MaxXmitLinkSpeed = *(_QWORD *)(v6 + 16);
        MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *(_QWORD *)(v6 + 24) )
          a1->MaxRcvLinkSpeed = *(_QWORD *)(v6 + 24);
        v76 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v76 == 0x40000000 || v76 < *(_QWORD *)(v6 + 16) )
          a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(v6 + 16);
        v77 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v77 == 0x40000000 || v77 < *(_QWORD *)(v6 + 24) )
          a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(v6 + 24);
      }
      a1->AutoNegotiationFlags = *(_DWORD *)(v6 + 36);
      v15 = ndisIfSetInterfaceState(a1);
      v109 = v15;
      v121 = v61;
    }
    else
    {
      v15 = 0;
    }
    LODWORD(RefCountTracker) = 1073807394;
    if ( v2 == 1073807394 )
    {
      LODWORD(v10) = ndisUpdateMiniportPortStates(a1, v3, v14);
      if ( (_DWORD)v10 )
      {
        if ( (unsigned __int8)byte_1C009261F < 4u )
          return (char)v10;
        v78 = v122;
        v79 = 55LL;
        v80 = 1073807394LL;
        goto LABEL_298;
      }
      if ( *((_DWORD *)v3 + 4) )
        goto LABEL_14;
      v15 = ndisIfSetInterfaceState(a1);
      v109 = v15;
    }
    if ( v2 == 1073807379 )
    {
      a1->LinkStateIndicationFlags |= 2u;
      v81 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
      v82 = (void *)v81;
      if ( v81 )
      {
        *(_DWORD *)(v81 + 88) |= 2u;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, 2u);
        LODWORD(RefCountTracker) = ndisQueueRequestOnTopAsync(a1, v82);
        v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 724885;
        if ( (_DWORD)RefCountTracker != 259 )
          ExFreePoolWithTag(v82, 0);
      }
      v15 = v109;
      v115 = 1;
    }
    if ( ((v2 - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v10) = ndisTopTcpConnectionOffloadStatus(a1, v3, v14);
      if ( !(_BYTE)v10 )
      {
        if ( (unsigned __int8)byte_1C009261F >= 4u )
          LOBYTE(v10) = WPP_SF_d(56LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (unsigned int)v2);
        return (char)v10;
      }
    }
    if ( v2 == 1073807384 && (*((_DWORD *)v3 + 6) & 4) != 0 )
    {
      v110 = 1;
      v120 = 1073807371;
      a1->MediaConnectState = MediaConnectStateConnected;
      LODWORD(RefCountTracker) = 40;
      v109 = ndisIfSetInterfaceState(a1);
      v15 = v109;
      memset(v141, 0, sizeof(v141));
      MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
      DWORD2(v132) |= 0x1000u;
      LODWORD(v141[1]) = MiniportMediaDuplexState;
      v141[2] = a1->MiniportXmitLinkSpeed;
      v141[3] = a1->MiniportRcvLinkSpeed;
      v141[4] = *(_QWORD *)&a1->MiniportPauseFunctions;
      *(_QWORD *)&v134 = v141;
      v141[0] = 0x100280180LL;
      DWORD1(v132) = 1073807383;
      DWORD2(v134) = 40;
    }
LABEL_14:
    if ( v15 )
    {
      IfBlock = a1->IfBlock;
      ifOperStatusFlags = 0;
      v139 = 786816LL;
      v112 = 1;
      LODWORD(RefCountTracker) = 112;
      HIDWORD(v139) = IfBlock->ifOperStatus;
      ifOperStatusFlags = IfBlock->ifOperStatusFlags;
      memset(v138, 0, sizeof(v138));
      LODWORD(v138[0]) = 7340440;
      v138[6] = &v139;
      v138[1] = a1;
      HIDWORD(v138[2]) = 1073807395;
      LODWORD(v138[7]) = 12;
    }
LABEL_16:
    v123 = 0;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    v128 = a1;
    KeReleaseSpinLock(&a1->Lock, v5);
    v17 = ndisReferenceTopMiniportByNameForNsi(
            (__int64)a1,
            0x200000,
            v16,
            a1->MiniportMediaType == NdisMediumNative802_11,
            1u,
            0x39u);
    v18 = v17;
    if ( v17 )
    {
      if ( v17 != a1 )
      {
        v123 = -1073741823;
        goto LABEL_27;
      }
      BaseMiniport = a1->BaseMiniport;
      LOBYTE(RefCountTracker) = 0;
      v20 = 0;
      v119 = (int)RefCountTracker;
      v21 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = ndisMiniDriverList;
      v127 = ndisMiniDriverList;
LABEL_19:
      if ( NextDriver )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v21);
        v118 = KeAcquireSpinLockRaiseToDpc(&NextDriver->Ref.SpinLock);
        MiniportQueue = NextDriver->MiniportQueue;
        v124 = MiniportQueue;
        while ( 1 )
        {
          if ( !MiniportQueue )
          {
LABEL_24:
            KeReleaseSpinLock(&v127->Ref.SpinLock, v118);
            v21 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            NextDriver = v127->NextDriver;
            v127 = NextDriver;
            if ( v20 )
              goto LABEL_25;
            goto LABEL_19;
          }
          if ( MiniportQueue == BaseMiniport )
            break;
LABEL_23:
          MiniportQueue = MiniportQueue->NextMiniport;
          v124 = MiniportQueue;
          if ( v20 )
            goto LABEL_24;
        }
        v20 = 1;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&BaseMiniport->Ref.SpinLock);
        if ( !BaseMiniport->Ref.Closing )
        {
          RefCountTracker = BaseMiniport->RefCountTracker;
          if ( RefCountTracker )
          {
            if ( *((_BYTE *)RefCountTracker + 1) )
            {
              if ( *((_BYTE *)RefCountTracker + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 898), 1u);
            }
            else
            {
              v55 = 0LL;
              if ( _bittestandset((signed __int32 *)RefCountTracker + 5, 0x18u) )
              {
                v84 = *((_QWORD *)RefCountTracker + 1);
                if ( !v84 )
                  goto LABEL_302;
                v85 = *((_BYTE *)RefCountTracker + 3);
                v86 = 0;
                if ( !v85 )
                  goto LABEL_302;
                do
                {
                  v87 = (_BYTE *)(v84 + 2LL * v86);
                  if ( *v87 == 56 )
                  {
                    if ( v87[1] != 0xFF )
                    {
                      ++v87[1];
                      goto LABEL_114;
                    }
                  }
                  else if ( !v87[1] )
                  {
                    v55 = (_WORD *)(v84 + 2LL * v86);
                  }
                  ++v86;
                }
                while ( v86 < v85 );
                if ( v55 )
                {
                  *v55 = 312;
                }
                else
                {
LABEL_302:
                  if ( !*((_BYTE *)RefCountTracker + 1) )
                  {
                    v88 = *((_BYTE *)RefCountTracker + 3);
                    if ( v88 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                      *((_BYTE *)RefCountTracker + 1) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v88 + 2 <= 0xFF )
                        v89 = v88 + 2;
                      else
                        v89 = -1;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v89);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                }
              }
            }
          }
LABEL_114:
          v27 = BaseMiniport->Ref.ReferenceCount++ == -1;
          if ( !v27 )
          {
            v56 = 1;
            goto LABEL_116;
          }
          BaseMiniport->Ref.ReferenceCount = -1;
        }
        v56 = 0;
LABEL_116:
        if ( (unsigned __int8)byte_1C009261B >= 4u )
          WPP_SF_qD(
            12LL,
            &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids,
            BaseMiniport,
            BaseMiniport->Ref.ReferenceCount);
        KeReleaseSpinLock(&BaseMiniport->Ref.SpinLock, NewIrql);
        if ( v56 )
        {
          LOBYTE(RefCountTracker) = 1;
        }
        else
        {
          if ( (BaseMiniport->Flags & 0x80200020) != 0
            || (BaseMiniport->PnPFlags & 0x1084110) != 0
            || BaseMiniport->PnPDeviceState != NdisPnPDeviceStarted
            || BaseMiniport->CurrentDevicePowerState != PowerDeviceD0 )
          {
            LODWORD(RefCountTracker) = v119;
            goto LABEL_121;
          }
          LODWORD(RefCountTracker) = (unsigned __int8)v119;
          if ( ndisReferenceMiniport((__int64)BaseMiniport, 0x38u) )
            LODWORD(RefCountTracker) = 1;
        }
        v119 = (int)RefCountTracker;
LABEL_121:
        MiniportQueue = v124;
        goto LABEL_23;
      }
LABEL_25:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v21);
      v3 = a2;
      v2 = v126;
      if ( (_BYTE)RefCountTracker )
      {
        v128 = a1->BaseMiniport;
        v113 = 1;
      }
LABEL_27:
      v24 = KeAcquireSpinLockRaiseToDpc(&v18->Lock);
      v18->MiniportThread = KeGetCurrentThread();
      v25 = v24;
      NsiRefCountTracker = (ULONG_PTR)v18->NsiRefCountTracker;
      v18->LockDbg = 72039;
      NdisDereferenceWithTag(NsiRefCountTracker, 1u);
      v27 = v18->NsiOpenReferences-- == 1;
      if ( v27 )
      {
        NsiRequestsCompletedEvent = v18->NsiRequestsCompletedEvent;
        if ( NsiRequestsCompletedEvent )
          KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
      }
      v18->MiniportThread = 0LL;
      v18->LockDbg = 0;
      KeReleaseSpinLock(&v18->Lock, v25);
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v18);
      v29 = KeAcquireSpinLockRaiseToDpc(&v18->Ref.SpinLock);
      v30 = (ULONG_PTR)v18->RefCountTracker;
      v31 = v29;
      if ( v30 )
        NdisDereferenceWithTag(v30, 0x39u);
      v32 = v18->Ref.ReferenceCount - 1;
      v18->Ref.ReferenceCount = v32;
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v18, v18->Ref.ReferenceCount);
      KeReleaseSpinLock(&v18->Ref.SpinLock, v31);
      if ( !v32 )
      {
        RemoveReadyEvent = v18->RemoveReadyEvent;
        if ( RemoveReadyEvent )
          KeSetEvent(RemoveReadyEvent, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v18);
    }
    else
    {
      v123 = -1073741823;
    }
    v33 = 0;
    v34 = v125;
    if ( !v123 )
      v33 = v112;
    ndisWriteWmiStatusIndication((int)v128, (int)v128->pAdapterInstanceName, (int)v3, v2, v125, v116);
    v35 = 0;
    if ( !v123 )
      v35 = v110;
    if ( v35 )
      ndisWriteWmiStatusIndication((int)v128, (int)v128->pAdapterInstanceName, (int)v3, v120, 0LL, 0);
    if ( v33 )
      ndisWriteWmiStatusIndication((int)v128, (int)v128->pAdapterInstanceName, (int)v3, 1073807395, &v139, 12);
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 725016;
    if ( v113 )
    {
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v128);
      v37 = KeAcquireSpinLockRaiseToDpc(&v128->Ref.SpinLock);
      v38 = (ULONG_PTR)v128->RefCountTracker;
      v39 = v37;
      if ( v38 )
        NdisDereferenceWithTag(v38, 0x38u);
      v40 = v128->Ref.ReferenceCount - 1;
      v128->Ref.ReferenceCount = v40;
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v128, v128->Ref.ReferenceCount);
      KeReleaseSpinLock(&v128->Ref.SpinLock, v39);
      if ( !v40 )
      {
        v36 = v128->RemoveReadyEvent;
        if ( v36 )
          KeSetEvent(v36, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v128);
      v34 = v125;
    }
    v41 = 256LL;
    if ( v2 == 1073807383 )
      v2 = v120;
    if ( v2 == 1073807384 )
    {
      if ( (*((_DWORD *)v3 + 6) & 4) == 0 )
      {
        v108 = 1;
        if ( v116 >= 4 && (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
          Template_jqxq(
            (_DWORD)v36,
            (unsigned int)&MiniportStatusIndicationNetworkChange,
            (_DWORD)a1 + 4032,
            (_DWORD)a1 + 4032,
            a1->IfIndex,
            a1->NetLuid.Value,
            *v34);
        goto LABEL_68;
      }
      v2 = 1073807371;
    }
    switch ( v2 )
    {
      case 1073872902:
        v107 = 1;
        v42 = 1;
        ndisIndicateOffloadChangeInternal(a1, v34, v116);
        goto LABEL_69;
      case 1073807395:
        v108 = 1;
        if ( v116 >= 0xC )
        {
          if ( (unsigned __int8)byte_1C009261F >= 4u )
          {
            WPP_SF_qdD(59LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, (unsigned int)v34[1], v34[2]);
            v41 = 256LL;
          }
          v64 = v34[1];
          if ( v64 == 1 )
          {
            if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
              Template_jqxqq(
                1,
                (unsigned int)&MiniportStatusIndicationOperStatusUp,
                (_DWORD)a1 + 4032,
                (_DWORD)a1 + 4032,
                a1->IfIndex,
                a1->NetLuid.Value,
                1,
                v34[2]);
          }
          else if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
          {
            Template_jqxqq(
              v64,
              (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
              (_DWORD)a1 + 4032,
              (_DWORD)a1 + 4032,
              a1->IfIndex,
              a1->NetLuid.Value,
              v64,
              v34[2]);
          }
        }
        break;
      case 1073807372:
        Flags = a1->Flags;
        v67 = a1->MediaSenseDisconnectCount + 1;
        a1->MediaSenseDisconnectCount = v67;
        if ( (Flags & 0x20000000) != 0 || v67 == 1 )
        {
          v68 = 1;
          v111 = 1;
          if ( (unsigned __int8)byte_1C009261F >= 4u )
            WPP_SF_qLLL(57LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
            Template_jqxqqq(
              (_DWORD)v36,
              (unsigned int)&MiniportStatusIndicationDisconnect,
              (_DWORD)a1 + 4032,
              (_DWORD)a1 + 4032,
              a1->IfIndex,
              a1->NetLuid.Value,
              a1->Flags,
              a1->PnPFlags,
              a1->CurrentDevicePowerState);
        }
        else
        {
          v68 = 0;
        }
        v69 = a1->Flags & 0xDFFFFFFF;
        a1->MediaConnectState = MediaConnectStateDisconnected;
        a1->Flags = v69;
        if ( !v121 )
        {
          a1->Flags = v69 | 0x4000000;
          if ( v68 )
            ndisSetMediaDisconnectTimer(a1, v41);
        }
        break;
      case 1073807371:
        v71 = a1->Flags;
        ++a1->MediaSenseConnectCount;
        if ( (v71 & 0x20000000) == 0 )
        {
          v111 = 1;
          if ( (unsigned __int8)byte_1C009261F >= 4u )
            WPP_SF_qLLL(58LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
            Template_jqxqqq(
              (_DWORD)v36,
              (unsigned int)&MiniportStatusIndicationConnect,
              (_DWORD)a1 + 4032,
              (_DWORD)a1 + 4032,
              a1->IfIndex,
              a1->NetLuid.Value,
              a1->Flags,
              a1->PnPFlags,
              a1->CurrentDevicePowerState);
        }
        v72 = a1->Flags | 0x20000000;
        a1->MediaConnectState = MediaConnectStateConnected;
        a1->Flags = v72;
        if ( !v121 )
        {
          a1->Flags = v72 | 0x4000000;
          ndisCancelMediaDisconnectTimer(a1);
        }
        break;
      case 1073872912:
        LOBYTE(Src) = 1;
        ndisMIndicateReceiveFilterCapsChange(a1, 1073872912LL, v34, v116, Src);
        break;
      default:
        v41 = 1073872960LL;
        if ( v2 == 1073872960 )
        {
          LOBYTE(Src) = 1;
          ndisMIndicateNicSwitchCapsChange(a1, 1073872960LL, v34, v116, Src);
        }
        else if ( v2 > 1073873055 && v2 <= 1073873057 )
        {
          ndisMIndicateQosParametersChange(a1);
        }
        break;
    }
LABEL_68:
    v42 = 0;
LABEL_69:
    v10 = (_NDIS_OPEN_BLOCK *)&ndisIntReqWmi;
    if ( v130 != (NDIS_REFCOUNT_HANDLE__ *)&ndisIntReqWmi )
    {
      OpenQueue = a1->OpenQueue;
      if ( OpenQueue )
      {
        v10 = (_NDIS_OPEN_BLOCK *)v122;
        while ( 1 )
        {
          if ( v10 && v10 != OpenQueue )
          {
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
            goto LABEL_75;
          }
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
            goto LABEL_243;
          if ( v42 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
          {
            if ( !v114 )
            {
              StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
              if ( StatusUnbindWorkItem )
              {
                LOBYTE(v45) = 54;
                ndisReferenceMiniportNoCheck(a1, v45);
                OpenQueue->StatusUnbindWorkItem = 0LL;
                v114 = 1;
                ndisScheduleWorkItemInternal(StatusUnbindWorkItem);
              }
            }
            goto LABEL_243;
          }
          if ( v2 == 1073938515 )
            ndisOpenIndicatePMCapabilities(OpenQueue, v3);
          if ( v2 == 1073938513 )
          {
            if ( *((_DWORD *)v3 + 14) < 4u )
              goto LABEL_243;
            p_WOLPatternList = &OpenQueue->WOLPatternList;
          }
          else
          {
            if ( v2 != 1073938514 )
              goto LABEL_83;
            if ( *((_DWORD *)v3 + 14) < 4u )
              goto LABEL_243;
            p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
          }
          if ( (unsigned __int8)ndisDeletePatternEntry(p_WOLPatternList, **((unsigned int **)v3 + 6)) )
          {
            --*((_DWORD *)v3 + 24);
LABEL_83:
            v46 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
            v47 = OpenQueue->RefCountTracker;
            v48 = v46;
            if ( v47 )
            {
              if ( *((_BYTE *)v47 + 1) )
              {
                if ( *((_BYTE *)v47 + 1) == 1 )
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 114), 1u);
              }
              else
              {
                v49 = 0LL;
                if ( _bittestandset((signed __int32 *)v47 + 4, 7u) )
                {
                  v93 = *((_QWORD *)v47 + 1);
                  if ( !v93 )
                    goto LABEL_303;
                  v94 = *((_BYTE *)v47 + 3);
                  v95 = 0;
                  if ( !v94 )
                    goto LABEL_303;
                  do
                  {
                    v96 = (_BYTE *)(v93 + 2LL * v95);
                    if ( *v96 == 7 )
                    {
                      if ( v96[1] != 0xFF )
                      {
                        ++v96[1];
                        goto LABEL_86;
                      }
                    }
                    else if ( !v96[1] )
                    {
                      v49 = (_WORD *)(v93 + 2LL * v95);
                    }
                    ++v95;
                  }
                  while ( v95 < v94 );
                  if ( v49 )
                  {
                    *v49 = 263;
                  }
                  else
                  {
LABEL_303:
                    if ( !*((_BYTE *)v47 + 1) )
                    {
                      v97 = *((_BYTE *)v47 + 3);
                      if ( v97 == 0xFF )
                      {
                        ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v47);
                        *((_BYTE *)v47 + 1) = 2;
                      }
                      else
                      {
                        if ( (unsigned int)v97 + 2 <= 0xFF )
                          v98 = v97 + 2;
                        else
                          v98 = -1;
                        ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v47, v98);
                      }
                    }
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v47);
                  }
                }
              }
            }
LABEL_86:
            ++OpenQueue->References;
            p_RefCountLock = &OpenQueue->RefCountLock;
            KeReleaseSpinLock(&OpenQueue->RefCountLock, v48);
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            if ( OpenQueue->StatusHandler )
            {
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              OpenQueue->OpenFlags |= 0x100u;
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
              a1->MiniportThread = 0LL;
              a1->LockDbg = 0;
              KeReleaseSpinLockFromDpcLevel(&a1->Lock);
              if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
              {
                if ( !v108 && !*((_DWORD *)v3 + 4) )
                {
                  v99 = *((_DWORD *)v3 + 5);
                  if ( v99 == 1073807383 || v99 == 1073807384 && (*((_DWORD *)v3 + 6) & 4) != 0 )
                  {
                    v100 = 0LL;
                    v101 = 0LL;
                  }
                  else
                  {
                    v100 = v116;
                    v101 = v125;
                  }
                  OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v2, v101, v100);
                  StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                  if ( StatusCompleteHandler )
                    StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                }
              }
              else if ( !v115 )
              {
                v51 = *((_DWORD *)v3 + 5);
                if ( (unsigned __int8)byte_1C009261F >= 4u )
                  WPP_SF_qD(103LL, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, OpenQueue, v51);
                ((void (__fastcall *)(void *, __int128 *))OpenQueue->StatusHandler)(
                  OpenQueue->ProtocolBindingContext,
                  v3);
                if ( (unsigned __int8)byte_1C009261F >= 4u )
                  WPP_SF_qD(104LL, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, OpenQueue, v51);
                if ( *((_DWORD *)v3 + 5) == 1073807384 && (*((_DWORD *)v3 + 6) & 4) != 0 )
                  ndisInvokeStatus(OpenQueue, &v131);
                if ( v109 )
                  ndisInvokeStatus(OpenQueue, v138);
                p_RefCountLock = &OpenQueue->RefCountLock;
              }
              KeAcquireSpinLockAtDpcLevel(&a1->Lock);
              a1->MiniportThread = KeGetCurrentThread();
              a1->LockDbg = 725356;
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              OpenQueue->OpenFlags &= ~0x100u;
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            }
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
            KeAcquireSpinLockAtDpcLevel(p_RefCountLock);
            v52 = (ULONG_PTR)OpenQueue->RefCountTracker;
            if ( v52 )
            {
              if ( *(_BYTE *)(v52 + 1) )
              {
                if ( *(_BYTE *)(v52 + 1) == 1 )
                {
                  v103 = v52 + 456;
                  v104 = *(_DWORD *)(v52 + 512);
                  if ( v104 >> 17 < 0x3FFE && (unsigned __int16)v104 >> 1 == (v104 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v52 + 456));
                    *(_DWORD *)(v103 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v104 & 0xFFFE) == 0 && (v104 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v52, 7uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v52 + 456), 0);
                  }
                }
              }
              else
              {
                v53 = *(_QWORD *)(v52 + 8);
                if ( v53 && (v57 = *(_BYTE *)(v52 + 3), v58 = 0, v57) )
                {
                  while ( *(_BYTE *)(v53 + 2LL * v58) != 7 || !*(_BYTE *)(v53 + 2LL * v58 + 1) )
                  {
                    if ( ++v58 >= v57 )
                      goto LABEL_101;
                  }
                  --*(_BYTE *)(v53 + 2LL * v58 + 1);
                }
                else
                {
LABEL_101:
                  if ( !_bittestandreset((signed __int32 *)(v52 + 16), 7u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v52, 7uLL);
                }
              }
            }
            v54 = --OpenQueue->References;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->RefCountLock);
            if ( !v54 )
              ndisMFinishClose(OpenQueue);
            goto LABEL_104;
          }
LABEL_243:
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_104:
          v10 = (_NDIS_OPEN_BLOCK *)v122;
LABEL_75:
          OpenQueue = MiniportNextOpen;
          if ( !MiniportNextOpen )
            break;
          v42 = v107;
        }
      }
      if ( v2 == 1073938516 )
        LOBYTE(v10) = ndisUpdateAndIndicatePMCapabilities(a1);
      if ( v111 )
      {
        LODWORD(v10) = *((_DWORD *)v3 + 6);
        if ( ((unsigned __int8)v10 & 2) == 0 )
        {
          LOBYTE(v41) = 2;
          if ( v2 == 1073807371 )
          {
            a1->PnPFlags &= ~0x10000000u;
            ndisMRestoreOpenHandlers((__int64)a1, v41);
            a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
            LOBYTE(v10) = a1->SavedReceivePathEnabled;
            a1->ReceivePathEnabled = (unsigned __int8)v10;
          }
          else
          {
            a1->PnPFlags |= 0x10000000u;
            ndisMSwapOpenHandlers(a1, v41);
            v10 = (_NDIS_OPEN_BLOCK *)ndisMDummyIndicatePacket;
            a1->ReceivePathEnabled = 0;
            a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
          }
        }
      }
    }
    if ( (unsigned __int8)byte_1C009261F < 4u )
      return (char)v10;
    v78 = (__int64 (__fastcall *)())*((_QWORD *)v3 + 4);
    v79 = 60LL;
    v80 = (unsigned int)v2;
LABEL_298:
    LOBYTE(v10) = WPP_SF_qLq(v79, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v80, v78);
  }
  return (char)v10;
}
