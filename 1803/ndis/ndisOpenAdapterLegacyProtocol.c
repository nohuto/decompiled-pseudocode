/*
 * XREFs of ndisOpenAdapterLegacyProtocol @ 0x1C005CC08
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C010E2C0 (NdisOpenAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C0012128 (ndisRemoveOpenFromGlobalList.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AFA4 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_qZZ @ 0x1C005C878 (WPP_SF_qZZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00AC470 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisFreeOpenBlock @ 0x1C00B2688 (ndisFreeOpenBlock.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BCE04 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00BFFC4 (ndisAllocateOpenBlock.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00C0970 (ndisNotifyWmiBindUnbind.c)
 *     ndisMDoMiniportOp @ 0x1C00C9AC8 (ndisMDoMiniportOp.c)
 *     ndisInvokeOpenAdapterComplete @ 0x1C00E7DFC (ndisInvokeOpenAdapterComplete.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4D4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FD7B4 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C010D030 (ndisFindRootDevice.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        _DWORD *a1,
        __int64 a2,
        struct _NDIS_OPEN_BLOCK **a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        PCUNICODE_STRING SourceString,
        char a10,
        KIRQL NewIrql,
        _DWORD *a12)
{
  __int64 BindingAdapter; // rbx
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  char v14; // r15
  _NDIS_PROTOCOL_BLOCK *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r12
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  KIRQL v28; // al
  __int64 v29; // rcx
  _DWORD *v30; // rax
  KSPIN_LOCK *v31; // r12
  KIRQL v32; // al
  _QWORD *v33; // r13
  _DWORD *v34; // rcx
  _DWORD *v35; // r15
  _BYTE *v36; // r15
  _DWORD *v37; // r14
  int v38; // eax
  _QWORD *v39; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  _QWORD *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // r8
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  __int64 v47; // [rsp+28h] [rbp-D8h]
  unsigned int i; // [rsp+40h] [rbp-C0h]
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v50[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v51; // [rsp+58h] [rbp-A8h]
  _QWORD *PoolWithTag; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v53; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING *v54; // [rsp+70h] [rbp-90h]
  _DWORD *v55; // [rsp+78h] [rbp-88h]
  _DWORD *v56; // [rsp+80h] [rbp-80h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v58[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v59[26]; // [rsp+E0h] [rbp-20h] BYREF
  char v60; // [rsp+1C0h] [rbp+C0h]
  char v62; // [rsp+208h] [rbp+108h]
  KIRQL NewIrqla; // [rsp+210h] [rbp+110h]

  BindingAdapter = 0LL;
  *(_DWORD *)&String1.Length = 2359330;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v60 = 0;
  v14 = 0;
  v49 = 0LL;
  v62 = 0;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a7;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qZZ(0x15u, a2, (__int64)a7, &a7->Name.Length, &SourceString->Length);
  ndisReferencePackage(&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol((__int64)a7, 9u) )
  {
    *a1 = -1073676286;
    v21 = 0;
    goto LABEL_81;
  }
  BindDeviceName = a7->BindDeviceName;
  v53 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = a7->RootDeviceName;
    BindingAdapter = (__int64)a7->BindingAdapter;
    v54 = RootDeviceName;
    v49 = BindingAdapter;
    goto LABEL_18;
  }
  ndisFindRootDevice(SourceString, (__int64)&v49, 44);
  BindingAdapter = v49;
  if ( !v49 )
  {
    BindDeviceName = v53;
    RootDeviceName = v54;
    v62 = 1;
LABEL_18:
    a7->BindDeviceName = 0LL;
    if ( BindingAdapter && (v51 = (_DWORD *)(BindingAdapter + 120), (*(_DWORD *)(BindingAdapter + 120) & 0x10000) != 0) )
    {
      if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(BindingAdapter + 360), 1u) )
      {
        *a1 = -1073676281;
      }
      else
      {
        OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, a7, 0LL);
        if ( OpenBlock )
        {
          v28 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
          ndisGlobalOpenList = OpenBlock;
          v60 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v28);
          v18 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = a7;
          *a3 = OpenBlock;
          if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v29) = 0;
            if ( a6 )
            {
              v30 = a5;
              do
              {
                if ( *v30 == 3 )
                  break;
                LODWORD(v29) = v29 + 1;
                ++v30;
              }
              while ( (unsigned int)v29 < a6 );
            }
          }
          else
          {
            v29 = 0LL;
            if ( a6 )
            {
              v19 = *(unsigned int *)(BindingAdapter + 464);
              v20 = (__int64)a5;
              do
              {
                if ( a5[v29] == (_DWORD)v19 )
                  break;
                v29 = (unsigned int)(v29 + 1);
              }
              while ( (unsigned int)v29 < a6 );
            }
          }
          if ( (_DWORD)v29 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            *a4 = v29;
            v56 = (_DWORD *)(BindingAdapter + 124);
            if ( (*(_DWORD *)(BindingAdapter + 124) & 0x40000000) != 0
              && (v50[0] = 524672,
                  v50[1] = 1,
                  (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 66078, (unsigned int)v50, 8, 1, 1)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              v31 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v33 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v49;
              *v33 = KeGetCurrentThread();
              v34 = v51;
              NewIrqla = v32;
              v35 = (_DWORD *)(BindingAdapter + 1856);
              *(_DWORD *)(BindingAdapter + 1856) = 984193;
              LODWORD(v34) = *v34;
              v55 = (_DWORD *)(BindingAdapter + 1856);
              if ( ((unsigned int)v34 & 0x40000) == 0 )
              {
                v36 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v37 = v55;
                  do
                  {
                    *v33 = 0LL;
                    *v37 = 0;
                    KeReleaseSpinLockFromDpcLevel(v31);
                    for ( i = 0; i < 0x32; ++i )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v31);
                    *v33 = KeGetCurrentThread();
                    *v37 = 984200;
                  }
                  while ( *v36 );
                  BindingAdapter = v49;
                  v17 = a7;
                }
                *v36 = 1;
                v35 = v55;
                *(_DWORD *)(BindingAdapter + 1860) = 984200;
                BindingAdapter = v49;
                *(_QWORD *)(v49 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
              if ( !*a1 )
              {
                if ( (unsigned __int8)byte_1C009960D >= 4u )
                  WPP_SF_qqq(0x17u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, OpenBlock, v17, BindingAdapter);
                if ( v62 )
                {
                  BindingAdapter = v49;
                  OpenBlock->OpenFlags |= 0x400000u;
                }
                v38 = *v51;
                if ( (*v51 & 0x20000000) == 0 && (*v51 & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                  v38 = *v51;
                }
                if ( (v38 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v39 = PoolWithTag;
                    BindingAdapter = v49;
                    *PoolWithTag = OpenBlock;
                    v39[1] = 0LL;
                    v39[3] = ndisMFinishQueuedPendingOpen;
                    v39[4] = v39;
                  }
                  else if ( (unsigned __int8)byte_1C009961A >= 2u )
                  {
                    WPP_SF_q(0x18u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v51 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              *v33 = 0LL;
              *v35 = 0;
              KeReleaseSpinLock(v31, NewIrqla);
              if ( !*a1 )
              {
                Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
                CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5136));
                OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
                if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                  *a1 = -1073741670;
                Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
                v18 = (unsigned int)*a1;
                if ( !(_DWORD)v18 )
                {
                  v19 = 0LL;
                  if ( (*v56 & 0x2000) != 0 )
                  {
                    v41 = *(_QWORD *)(BindingAdapter + 4008);
                    if ( v41 )
                    {
                      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v41 + 32))(*(_QWORD *)(v41 + 8), v18, 0LL);
                      v19 = (unsigned int)*a1;
                      v18 = v19;
                    }
                  }
                  v42 = a12;
                  if ( a12 )
                  {
                    a12 = 0LL;
                    *v42 = v19;
                    v18 = (unsigned int)*a1;
                  }
                  v43 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    if ( v17->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v18, v18);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v18, v19);
                    ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                    if ( v62 )
                    {
                      LOBYTE(v45) = 1;
                      ndisNotifyWmiBindUnbind(v44, v17, v45);
                      v62 = 0;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v43 + 1), (WORK_QUEUE_TYPE)40);
                    *a1 = 259;
                  }
                }
              }
            }
          }
        }
        else
        {
          *a1 = -1073741670;
        }
      }
    }
    else
    {
      *a1 = -1073676282;
    }
    v21 = 1;
    v14 = v62;
    goto LABEL_81;
  }
  memset(v58, 0, sizeof(v58));
  v58[1] = a3;
  v58[3] = a5;
  v58[7] = SourceString;
  LODWORD(v58[4]) = a6;
  v58[6] = a8;
  v58[0] = a1;
  v58[2] = a4;
  v58[5] = a7;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v49 + 5136));
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       BindingAdapter + 5032,
                                                       &a7->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = v58;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v59);
      WPP_SF_Zq(0x16u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (const wchar_t *)v59[1], v59[0]);
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(BindingAdapter + 5136), RunSynchronous, 0);
  if ( !*(_QWORD *)v58[1] && !*a1 )
    *a1 = -1073676271;
  v21 = 0;
  ndisDereferenceProtocol(a7, v25, 9u);
  ndisDereferenceMiniport(BindingAdapter, 0x2Cu, v26, v27);
  v14 = 0;
LABEL_81:
  if ( a12 )
    *a12 = *a1;
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v21 )
        ndisDereferenceProtocol(v17, v18, 9u);
      if ( v60 )
        ndisRemoveOpenFromGlobalList(OpenBlock, v18, v19, v20);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( v14 && BindingAdapter )
  {
    LOBYTE(v19) = 1;
    ndisNotifyWmiBindUnbind(BindingAdapter, v17, v19);
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
  {
    LODWORD(v47) = *a1;
    WPP_SF_qqqL(0x19u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, v17, BindingAdapter, OpenBlock, v47);
  }
}
