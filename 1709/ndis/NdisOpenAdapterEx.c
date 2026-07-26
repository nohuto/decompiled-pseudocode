/*
 * XREFs of NdisOpenAdapterEx @ 0x1C0103020
 * Callers:
 *     <none>
 * Callees:
 *     ndisRemoveOpenFromGlobalList @ 0x1C0001460 (ndisRemoveOpenFromGlobalList.c)
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C000F750 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     WPP_SF_qZZ @ 0x1C005C000 (WPP_SF_qZZ.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00BBDBC (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BBDC8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00BDF1C (ndisAllocateOpenBlock.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C010B0B0 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  BOOL v5; // r12d
  _NDIS_PROTOCOL_BLOCK *v7; // r15
  struct _NDIS_OPEN_BLOCK *OpenBlock; // r14
  char v9; // r13
  __int64 MediumArraySize; // rdx
  _UNICODE_STRING *BindDeviceName; // rsi
  _UNICODE_STRING *RootDeviceName; // r12
  __int64 BindingAdapter; // rdi
  __int64 i; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v16; // r8
  KIRQL v17; // al
  KSPIN_LOCK *v18; // r12
  KIRQL v19; // al
  _QWORD *v20; // rbx
  _DWORD *v21; // rsi
  bool v22; // zf
  int v23; // r12d
  _DWORD *v24; // rax
  KSPIN_LOCK *v25; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_STATUS v27; // esi
  _QWORD *v28; // rbx
  _BYTE *v30; // rbx
  _QWORD *v31; // r15
  _DWORD *v32; // rsi
  _QWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+30h] [rbp-49h]
  char v36; // [rsp+38h] [rbp-41h]
  KIRQL NewIrql; // [rsp+39h] [rbp-40h]
  unsigned int j; // [rsp+3Ch] [rbp-3Dh]
  int v39; // [rsp+40h] [rbp-39h] BYREF
  __int64 v40; // [rsp+48h] [rbp-31h] BYREF
  BOOL v41; // [rsp+50h] [rbp-29h]
  _QWORD *PoolWithTag; // [rsp+58h] [rbp-21h]
  _UNICODE_STRING *v43; // [rsp+60h] [rbp-19h]
  _UNICODE_STRING *v44; // [rsp+68h] [rbp-11h]
  _QWORD *v45; // [rsp+70h] [rbp-9h]
  _DWORD *v46; // [rsp+78h] [rbp-1h]
  _DWORD *v47; // [rsp+80h] [rbp+7h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp+Fh]
  _DWORD *v49; // [rsp+90h] [rbp+17h]

  v40 = 0LL;
  PoolWithTag = 0LL;
  LOBYTE(v5) = 0;
  v36 = 0;
  *NdisBindingHandle = 0LL;
  v7 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
  v39 = -1073741823;
  OpenBlock = 0LL;
  v41 = v5;
  v9 = 0;
  if ( NdisProtocolHandle )
  {
    if ( (unsigned __int8)byte_1C009874D >= 4u )
      WPP_SF_qZZ(
        0x3Cu,
        (__int64)ProtocolBindingContext,
        (__int64)NdisProtocolHandle,
        (const wchar_t *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((__int64)&ndisPkgs);
    if ( v7->MutexOwnerThread == KeGetCurrentThread() )
    {
      if ( ndisReferenceProtocol((__int64)v7, 9u) )
      {
        BindDeviceName = v7->BindDeviceName;
        v9 = 1;
        v43 = BindDeviceName;
        if ( BindDeviceName )
        {
          RootDeviceName = v7->RootDeviceName;
          BindingAdapter = (__int64)v7->BindingAdapter;
          v44 = RootDeviceName;
          v40 = BindingAdapter;
        }
        else
        {
          ndisFindRootDevice(OpenParameters->AdapterName, (__int64)&v40, 45);
          BindingAdapter = v40;
          BindDeviceName = v43;
          v41 = v40 != 0;
          RootDeviceName = v44;
        }
        v7->BindDeviceName = 0LL;
        if ( BindingAdapter )
        {
          OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, (__int64)v7, 1);
          if ( !OpenBlock )
            goto LABEL_49;
          v49 = (_DWORD *)(BindingAdapter + 124);
          if ( (*(_DWORD *)(BindingAdapter + 124) & 0x100) == 0
            && (*(_BYTE *)(BindingAdapter + 1995)
             || *(_DWORD *)(BindingAdapter + 2256) == 6
             || *(_BYTE *)(BindingAdapter + 32) < 6u) )
          {
            if ( !*(_BYTE *)(BindingAdapter + 1994) )
              *(_BYTE *)(BindingAdapter + 1994) = 1;
            OpenBlock->ProtocolBindingContext = ProtocolBindingContext;
            OpenBlock->BindDeviceName = BindDeviceName;
            OpenBlock->RootDeviceName = RootDeviceName;
            OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
            OpenBlock->ProtocolHandle = v7;
            *NdisBindingHandle = OpenBlock;
            MediumArraySize = OpenParameters->MediumArraySize;
            if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
              {
                if ( OpenParameters->MediumArray[i] == NdisMediumWan )
                  break;
              }
            }
            else
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
              {
                if ( OpenParameters->MediumArray[i] == *(_DWORD *)(BindingAdapter + 464) )
                  break;
              }
            }
            if ( (_DWORD)i == (_DWORD)MediumArraySize )
            {
              v27 = -1073676263;
              goto LABEL_79;
            }
            *OpenParameters->SelectedMediumIndex = i;
            FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
            if ( FrameTypeArraySize <= 4 )
            {
              v16 = 0LL;
              for ( OpenBlock->FrameTypeArraySize = FrameTypeArraySize;
                    (unsigned int)v16 < OpenParameters->FrameTypeArraySize;
                    v16 = (unsigned int)(v16 + 1) )
              {
                OpenBlock->FrameTypeArray[v16] = __ROL2__(OpenParameters->FrameTypeArray[v16], 8);
              }
              v17 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
              ndisGlobalOpenList = OpenBlock;
              v36 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v17);
              v18 = (KSPIN_LOCK *)(BindingAdapter + 96);
              SpinLock = (PKSPIN_LOCK)(BindingAdapter + 96);
              v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v20 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v40;
              *v20 = KeGetCurrentThread();
              NewIrql = v19;
              v45 = v20;
              v21 = (_DWORD *)(BindingAdapter + 120);
              *(_DWORD *)(BindingAdapter + 1856) = 986399;
              v22 = (*(_DWORD *)(BindingAdapter + 120) & 0x40000) == 0;
              v46 = (_DWORD *)(BindingAdapter + 1856);
              v47 = (_DWORD *)(BindingAdapter + 120);
              if ( v22 )
              {
                v30 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v31 = v45;
                  v32 = (_DWORD *)(BindingAdapter + 1856);
                  do
                  {
                    *v31 = 0LL;
                    *v32 = 0;
                    KeReleaseSpinLockFromDpcLevel(v18);
                    for ( j = 0; j < 0x32; ++j )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v18);
                    *v31 = KeGetCurrentThread();
                    *v32 = 986406;
                  }
                  while ( *v30 );
                  BindingAdapter = v40;
                  v7 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
                  v21 = v47;
                }
                *v30 = 1;
                v20 = v45;
                *(_DWORD *)(BindingAdapter + 1860) = 986406;
                BindingAdapter = v40;
                *(_QWORD *)(v40 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v39, OpenBlock, BindingAdapter);
              v23 = v39;
              if ( !v39 )
              {
                if ( (unsigned __int8)byte_1C009874D >= 4u )
                  WPP_SF_qqq(0x3Du, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, OpenBlock, v7, BindingAdapter);
                if ( (*v21 & 0x20000000) == 0 && (*v21 & 0x20000) == 0 )
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                if ( (*v21 & 0x20000) != 0 && v7->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedAdd(&OpenBlock->PendingAfNotifications, 1u);
                    v33 = PoolWithTag;
                    BindingAdapter = v40;
                    v23 = v39;
                    *PoolWithTag = OpenBlock;
                    v33[1] = 0LL;
                    v33[3] = ndisMFinishQueuedPendingOpen;
                    v33[4] = v33;
                  }
                  else if ( (unsigned __int8)byte_1C009875A >= 2u )
                  {
                    WPP_SF_q(0x3Eu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v21 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              v24 = v46;
              *v20 = 0LL;
              v25 = SpinLock;
              *v24 = 0;
              KeReleaseSpinLock(v25, NewIrql);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5136));
              OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
              if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                v23 = -1073741670;
              v27 = v23;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
              if ( !v23 )
              {
                if ( (*v49 & 0x2000) != 0 )
                {
                  v34 = *(_QWORD *)(BindingAdapter + 4008);
                  if ( v34 )
                    (*(void (__fastcall **)(_QWORD))(v34 + 32))(*(_QWORD *)(v34 + 8));
                }
                v28 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v28 )
                  goto LABEL_36;
                v7->OpenAdapterCompleteHandlerEx(OpenBlock->ProtocolBindingContext, 0);
                ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v28 + 1), (WORK_QUEUE_TYPE)40);
                v27 = 259;
              }
              if ( v27 == 259 )
              {
LABEL_36:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v41 )
                  ndisDereferenceMiniport(BindingAdapter, 0x2Du);
                if ( (unsigned __int8)byte_1C009874D >= 4u )
                {
                  LODWORD(v35) = v27;
                  WPP_SF_qqqL(
                    0x3Fu,
                    &WPP_4a5d38b576c633146a968e2982301690_Traceguids,
                    v7,
                    BindingAdapter,
                    OpenBlock,
                    v35);
                }
                return v27;
              }
LABEL_79:
              *NdisBindingHandle = 0LL;
              if ( v9 )
                ndisDereferenceProtocol(v7, MediumArraySize, 9u);
              if ( v36 )
                ndisRemoveOpenFromGlobalList(OpenBlock);
              goto LABEL_36;
            }
LABEL_49:
            v27 = -1073741670;
            goto LABEL_79;
          }
        }
        v27 = -1073676282;
        goto LABEL_79;
      }
      v27 = -1073676286;
    }
    else
    {
      v27 = v39;
    }
    BindingAdapter = v40;
    goto LABEL_79;
  }
  if ( (unsigned __int8)byte_1C009874D >= 2u )
    WPP_SF_(0x3Bu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids);
  return -1073741823;
}
