/*
 * XREFs of NdisOpenAdapterEx @ 0x1C0104520
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C0012128 (ndisRemoveOpenFromGlobalList.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AFA4 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     WPP_SF_qZZ @ 0x1C005C878 (WPP_SF_qZZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00AC470 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BCE04 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00BFFC4 (ndisAllocateOpenBlock.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C010D030 (ndisFindRootDevice.c)
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
  _NDIS_MEDIUM *MediumArray; // r8
  __int64 v12; // r9
  _UNICODE_STRING *BindDeviceName; // rsi
  _UNICODE_STRING *RootDeviceName; // r12
  __int64 BindingAdapter; // rdi
  __int64 v16; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v18; // r8
  KIRQL v19; // al
  KSPIN_LOCK *v20; // r12
  _QWORD *v21; // rax
  int *v22; // rsi
  bool v23; // zf
  int v24; // r12d
  int v25; // ecx
  KSPIN_LOCK *v26; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_STATUS v28; // esi
  struct _NDIS_OPEN_BLOCK **v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  _BYTE *v33; // rbx
  _QWORD *v34; // r15
  _DWORD *v35; // rsi
  struct _NDIS_OPEN_BLOCK **v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-49h]
  char v39; // [rsp+38h] [rbp-41h]
  KIRQL NewIrql; // [rsp+39h] [rbp-40h]
  unsigned int i; // [rsp+3Ch] [rbp-3Dh]
  int v42; // [rsp+40h] [rbp-39h] BYREF
  __int64 v43; // [rsp+48h] [rbp-31h] BYREF
  BOOL v44; // [rsp+50h] [rbp-29h]
  _UNICODE_STRING *v45; // [rsp+58h] [rbp-21h]
  _UNICODE_STRING *v46; // [rsp+60h] [rbp-19h]
  _QWORD *v47; // [rsp+68h] [rbp-11h]
  _DWORD *v48; // [rsp+70h] [rbp-9h]
  struct _NDIS_OPEN_BLOCK **PoolWithTag; // [rsp+78h] [rbp-1h]
  int *v50; // [rsp+80h] [rbp+7h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp+Fh]
  _DWORD *v52; // [rsp+90h] [rbp+17h]

  v43 = 0LL;
  PoolWithTag = 0LL;
  LOBYTE(v5) = 0;
  v39 = 0;
  *NdisBindingHandle = 0LL;
  v7 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
  v42 = -1073741823;
  OpenBlock = 0LL;
  v44 = v5;
  v9 = 0;
  if ( NdisProtocolHandle )
  {
    if ( (unsigned __int8)byte_1C009960D >= 4u )
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
        v45 = BindDeviceName;
        if ( BindDeviceName )
        {
          RootDeviceName = v7->RootDeviceName;
          BindingAdapter = (__int64)v7->BindingAdapter;
          v46 = RootDeviceName;
          v43 = BindingAdapter;
        }
        else
        {
          ndisFindRootDevice(OpenParameters->AdapterName, (__int64)&v43, 45);
          BindingAdapter = v43;
          BindDeviceName = v45;
          v44 = v43 != 0;
          RootDeviceName = v46;
        }
        v7->BindDeviceName = 0LL;
        if ( BindingAdapter )
        {
          OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, (__int64)v7, 1);
          if ( !OpenBlock )
            goto LABEL_50;
          v52 = (_DWORD *)(BindingAdapter + 124);
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
              v16 = 0LL;
              if ( (_DWORD)MediumArraySize )
              {
                MediumArray = OpenParameters->MediumArray;
                do
                {
                  if ( MediumArray[v16] == NdisMediumWan )
                    break;
                  v16 = (unsigned int)(v16 + 1);
                }
                while ( (unsigned int)v16 < (unsigned int)MediumArraySize );
              }
            }
            else
            {
              v16 = 0LL;
              if ( (_DWORD)MediumArraySize )
              {
                MediumArray = OpenParameters->MediumArray;
                v12 = *(unsigned int *)(BindingAdapter + 464);
                do
                {
                  if ( MediumArray[v16] == (_DWORD)v12 )
                    break;
                  v16 = (unsigned int)(v16 + 1);
                }
                while ( (unsigned int)v16 < (unsigned int)MediumArraySize );
              }
            }
            if ( (_DWORD)v16 == (_DWORD)MediumArraySize )
            {
              v28 = -1073676263;
              goto LABEL_80;
            }
            *OpenParameters->SelectedMediumIndex = v16;
            FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
            if ( FrameTypeArraySize <= 4 )
            {
              v18 = 0LL;
              for ( OpenBlock->FrameTypeArraySize = FrameTypeArraySize;
                    (unsigned int)v18 < OpenParameters->FrameTypeArraySize;
                    v18 = (unsigned int)(v18 + 1) )
              {
                OpenBlock->FrameTypeArray[v18] = __ROL2__(OpenParameters->FrameTypeArray[v18], 8);
              }
              v19 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
              ndisGlobalOpenList = OpenBlock;
              v39 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v19);
              v20 = (KSPIN_LOCK *)(BindingAdapter + 96);
              SpinLock = (PKSPIN_LOCK)(BindingAdapter + 96);
              NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v21 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v43;
              *v21 = KeGetCurrentThread();
              v47 = v21;
              v22 = (int *)(BindingAdapter + 120);
              *(_DWORD *)(BindingAdapter + 1856) = 986399;
              v23 = (*(_DWORD *)(BindingAdapter + 120) & 0x40000) == 0;
              v48 = (_DWORD *)(BindingAdapter + 1856);
              v50 = (int *)(BindingAdapter + 120);
              if ( v23 )
              {
                v33 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v34 = v47;
                  v35 = (_DWORD *)(BindingAdapter + 1856);
                  do
                  {
                    *v34 = 0LL;
                    *v35 = 0;
                    KeReleaseSpinLockFromDpcLevel(v20);
                    for ( i = 0; i < 0x32; ++i )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v20);
                    *v34 = KeGetCurrentThread();
                    *v35 = 986406;
                  }
                  while ( *v33 );
                  BindingAdapter = v43;
                  v7 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
                  v22 = v50;
                }
                *v33 = 1;
                *(_DWORD *)(BindingAdapter + 1860) = 986406;
                BindingAdapter = v43;
                *(_QWORD *)(v43 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v42, OpenBlock, BindingAdapter);
              v24 = v42;
              if ( !v42 )
              {
                if ( (unsigned __int8)byte_1C009960D >= 4u )
                  WPP_SF_qqq(0x3Du, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, OpenBlock, v7, BindingAdapter);
                v25 = *v22;
                if ( (*v22 & 0x20000000) == 0 && (*v22 & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                  v25 = *v22;
                }
                if ( (v25 & 0x20000) != 0 && v7->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = (struct _NDIS_OPEN_BLOCK **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  v36 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedAdd(&OpenBlock->PendingAfNotifications, 1u);
                    BindingAdapter = v43;
                    v24 = v42;
                    *v36 = OpenBlock;
                    v36[1] = 0LL;
                    v36[3] = (struct _NDIS_OPEN_BLOCK *)ndisMFinishQueuedPendingOpen;
                    v36[4] = (struct _NDIS_OPEN_BLOCK *)v36;
                  }
                  else if ( (unsigned __int8)byte_1C009961A >= 2u )
                  {
                    WPP_SF_q(0x3Eu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v22 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              v26 = SpinLock;
              *v47 = 0LL;
              *v48 = 0;
              KeReleaseSpinLock(v26, NewIrql);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5136));
              OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
              if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                v24 = -1073741670;
              v28 = v24;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
              if ( !v24 )
              {
                if ( (*v52 & 0x2000) != 0 )
                {
                  v37 = *(_QWORD *)(BindingAdapter + 4008);
                  if ( v37 )
                    (*(void (__fastcall **)(_QWORD))(v37 + 32))(*(_QWORD *)(v37 + 8));
                }
                v29 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v29 )
                  goto LABEL_37;
                v7->OpenAdapterCompleteHandlerEx(OpenBlock->ProtocolBindingContext, 0);
                ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v29 + 1), (WORK_QUEUE_TYPE)40);
                v28 = 259;
              }
              if ( v28 == 259 )
              {
LABEL_37:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v44 )
                  ndisDereferenceMiniport(BindingAdapter, 0x2Du, v30, v31);
                if ( (unsigned __int8)byte_1C009960D >= 4u )
                {
                  LODWORD(v38) = v28;
                  WPP_SF_qqqL(
                    0x3Fu,
                    &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids,
                    v7,
                    BindingAdapter,
                    OpenBlock,
                    v38);
                }
                return v28;
              }
LABEL_80:
              *NdisBindingHandle = 0LL;
              if ( v9 )
                ndisDereferenceProtocol(v7, MediumArraySize, 9u);
              if ( v39 )
                ndisRemoveOpenFromGlobalList(OpenBlock, MediumArraySize, (__int64)MediumArray, v12);
              goto LABEL_37;
            }
LABEL_50:
            v28 = -1073741670;
            goto LABEL_80;
          }
        }
        v28 = -1073676282;
        goto LABEL_80;
      }
      v28 = -1073676286;
    }
    else
    {
      v28 = v42;
    }
    BindingAdapter = v43;
    goto LABEL_80;
  }
  if ( (unsigned __int8)byte_1C009960D >= 2u )
    WPP_SF_(0x3Bu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids);
  return -1073741823;
}
