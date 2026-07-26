/*
 * XREFs of ndisOpenAdapterLegacyProtocol @ 0x1C005C364
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F4134 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C010C330 (NdisOpenAdapter.c)
 * Callees:
 *     ndisRemoveOpenFromGlobalList @ 0x1C0001460 (ndisRemoveOpenFromGlobalList.c)
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C000F750 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_qZZ @ 0x1C005C000 (WPP_SF_qZZ.c)
 *     ndisFreeOpenBlock @ 0x1C00AAED8 (ndisFreeOpenBlock.c)
 *     ndisMDoMiniportOp @ 0x1C00AD748 (ndisMDoMiniportOp.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B55DC (ndisNotifyWmiBindUnbind.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00BBDBC (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BBDC8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00BDF1C (ndisAllocateOpenBlock.c)
 *     ndisInvokeOpenAdapterComplete @ 0x1C00E65A8 (ndisInvokeOpenAdapterComplete.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C010B0B0 (ndisFindRootDevice.c)
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
  char v20; // r12
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  __int64 v24; // rdx
  KIRQL v25; // al
  __int64 v26; // rcx
  _DWORD *v27; // rax
  KSPIN_LOCK *v28; // r12
  KIRQL v29; // al
  _QWORD *v30; // r13
  _DWORD *v31; // rcx
  _DWORD *v32; // r15
  _BYTE *v33; // r15
  _DWORD *v34; // r14
  _QWORD *v35; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rcx
  _QWORD *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  __int64 v44; // [rsp+28h] [rbp-D8h]
  unsigned int i; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v48; // [rsp+58h] [rbp-A8h]
  _QWORD *PoolWithTag; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v50; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING *v51; // [rsp+70h] [rbp-90h]
  _DWORD *v52; // [rsp+78h] [rbp-88h]
  _DWORD *v53; // [rsp+80h] [rbp-80h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v55[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v56[26]; // [rsp+E0h] [rbp-20h] BYREF
  char v57; // [rsp+1C0h] [rbp+C0h]
  char v59; // [rsp+208h] [rbp+108h]
  KIRQL NewIrqla; // [rsp+210h] [rbp+110h]

  BindingAdapter = 0LL;
  *(_DWORD *)&String1.Length = 2359330;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v57 = 0;
  v14 = 0;
  v46 = 0LL;
  v59 = 0;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a7;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qZZ(0x15u, a2, (__int64)a7, &a7->Name.Length, &SourceString->Length);
  ndisReferencePackage(&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol((__int64)a7, 9u) )
  {
    *a1 = -1073676286;
    v20 = 0;
    goto LABEL_82;
  }
  BindDeviceName = a7->BindDeviceName;
  v50 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = a7->RootDeviceName;
    BindingAdapter = (__int64)a7->BindingAdapter;
    v51 = RootDeviceName;
    v46 = BindingAdapter;
    goto LABEL_18;
  }
  ndisFindRootDevice(SourceString, (__int64)&v46, 44);
  BindingAdapter = v46;
  if ( !v46 )
  {
    BindDeviceName = v50;
    RootDeviceName = v51;
    v59 = 1;
LABEL_18:
    a7->BindDeviceName = 0LL;
    if ( BindingAdapter && (v48 = (_DWORD *)(BindingAdapter + 120), (*(_DWORD *)(BindingAdapter + 120) & 0x10000) != 0) )
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
          v25 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
          ndisGlobalOpenList = OpenBlock;
          v57 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v25);
          v18 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = a7;
          *a3 = OpenBlock;
          if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v26) = 0;
            if ( a6 )
            {
              v27 = a5;
              do
              {
                if ( *v27 == 3 )
                  break;
                LODWORD(v26) = v26 + 1;
                ++v27;
              }
              while ( (unsigned int)v26 < a6 );
            }
          }
          else
          {
            v26 = 0LL;
            if ( a6 )
            {
              v19 = *(unsigned int *)(BindingAdapter + 464);
              do
              {
                if ( a5[v26] == (_DWORD)v19 )
                  break;
                v26 = (unsigned int)(v26 + 1);
              }
              while ( (unsigned int)v26 < a6 );
            }
          }
          if ( (_DWORD)v26 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            *a4 = v26;
            v53 = (_DWORD *)(BindingAdapter + 124);
            if ( (*(_DWORD *)(BindingAdapter + 124) & 0x40000000) != 0
              && (v47[0] = 524672,
                  v47[1] = 1,
                  (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 66078, (unsigned int)v47, 8, 1, 1)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              v28 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v30 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v46;
              *v30 = KeGetCurrentThread();
              v31 = v48;
              NewIrqla = v29;
              v32 = (_DWORD *)(BindingAdapter + 1856);
              *(_DWORD *)(BindingAdapter + 1856) = 984193;
              LODWORD(v31) = *v31;
              v52 = (_DWORD *)(BindingAdapter + 1856);
              if ( ((unsigned int)v31 & 0x40000) == 0 )
              {
                v33 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v34 = v52;
                  do
                  {
                    *v30 = 0LL;
                    *v34 = 0;
                    KeReleaseSpinLockFromDpcLevel(v28);
                    for ( i = 0; i < 0x32; ++i )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v28);
                    *v30 = KeGetCurrentThread();
                    *v34 = 984200;
                  }
                  while ( *v33 );
                  BindingAdapter = v46;
                  v17 = a7;
                }
                *v33 = 1;
                v32 = v52;
                *(_DWORD *)(BindingAdapter + 1860) = 984200;
                BindingAdapter = v46;
                *(_QWORD *)(v46 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
              if ( !*a1 )
              {
                if ( (unsigned __int8)byte_1C009874D >= 4u )
                  WPP_SF_qqq(0x17u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, OpenBlock, v17, BindingAdapter);
                if ( v59 )
                {
                  OpenBlock->OpenFlags |= 0x400000u;
                  BindingAdapter = v46;
                }
                if ( (*v48 & 0x20000000) == 0 && (*v48 & 0x20000) == 0 )
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                if ( (*v48 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v35 = PoolWithTag;
                    BindingAdapter = v46;
                    *PoolWithTag = OpenBlock;
                    v35[1] = 0LL;
                    v35[3] = ndisMFinishQueuedPendingOpen;
                    v35[4] = v35;
                  }
                  else if ( (unsigned __int8)byte_1C009875A >= 2u )
                  {
                    WPP_SF_q(0x18u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v48 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              *v30 = 0LL;
              *v32 = 0;
              KeReleaseSpinLock(v28, NewIrqla);
              if ( !*a1 )
              {
                Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
                CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5136));
                OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
                if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                  *a1 = -1073741670;
                Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
                if ( !*a1 )
                {
                  if ( (*v53 & 0x2000) != 0 )
                  {
                    v37 = *(_QWORD *)(BindingAdapter + 4008);
                    if ( v37 )
                      (*(void (__fastcall **)(_QWORD))(v37 + 32))(*(_QWORD *)(v37 + 8));
                  }
                  v38 = a12;
                  if ( a12 )
                  {
                    a12 = 0LL;
                    *v38 = *a1;
                  }
                  v39 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    v40 = (unsigned int)*a1;
                    if ( v17->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v40, v40);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v40);
                    ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                    if ( v59 )
                    {
                      LOBYTE(v42) = 1;
                      ndisNotifyWmiBindUnbind(v41, v17, v42);
                      v59 = 0;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v39 + 1), (WORK_QUEUE_TYPE)40);
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
    v20 = 1;
    v14 = v59;
    goto LABEL_82;
  }
  memset(v55, 0, sizeof(v55));
  v55[1] = a3;
  v55[3] = a5;
  v55[7] = SourceString;
  LODWORD(v55[4]) = a6;
  v55[6] = a8;
  v55[0] = a1;
  v55[2] = a4;
  v55[5] = a7;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v46 + 5136));
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       BindingAdapter + 5032,
                                                       &a7->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = v55;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v56);
      WPP_SF_Zq(0x16u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (const wchar_t *)v56[1], v56[0]);
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(BindingAdapter + 5136), RunSynchronous, 0);
  if ( !*(_QWORD *)v55[1] && !*a1 )
    *a1 = -1073676271;
  v20 = 0;
  ndisDereferenceProtocol(a7, v24, 9u);
  ndisDereferenceMiniport(BindingAdapter, 0x2Cu);
  v14 = 0;
LABEL_82:
  if ( a12 )
    *a12 = *a1;
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v20 )
        ndisDereferenceProtocol(v17, v18, 9u);
      if ( v57 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
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
  if ( (unsigned __int8)byte_1C009874D >= 4u )
  {
    LODWORD(v44) = *a1;
    WPP_SF_qqqL(0x19u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, v17, BindingAdapter, OpenBlock, v44);
  }
}
