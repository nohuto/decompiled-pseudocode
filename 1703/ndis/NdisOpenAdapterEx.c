/*
 * XREFs of NdisOpenAdapterEx @ 0x1C00F7950
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019DB4 (ndisReferenceProtocol.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001A4A8 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AE78 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C474 (ndisMSwapOpenHandlers.c)
 *     ndisQueueWorkItem @ 0x1C002345C (ndisQueueWorkItem.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C0025424 (ndisRemoveOpenFromGlobalList.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     WPP_SF_qZZ @ 0x1C005C5A8 (WPP_SF_qZZ.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00A6498 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00B35BC (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00B65F8 (ndisAllocateOpenBlock.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C0102110 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  BOOL v5; // r13d
  _NDIS_PROTOCOL_BLOCK *v7; // r15
  struct _NDIS_OPEN_BLOCK *OpenBlock; // r14
  char v9; // r12
  __int64 MediumArraySize; // rdx
  _UNICODE_STRING *BindDeviceName; // rsi
  _UNICODE_STRING *RootDeviceName; // r13
  __int64 BindingAdapter; // rdi
  __int64 i; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v16; // r8
  KIRQL v17; // al
  KSPIN_LOCK *v18; // r13
  _QWORD *v19; // rax
  _DWORD *v20; // rsi
  bool v21; // zf
  int v22; // r13d
  KSPIN_LOCK *v23; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_STATUS v25; // esi
  struct _NDIS_OPEN_BLOCK **v26; // rbx
  _BYTE *v28; // rbx
  _QWORD *v29; // r15
  _DWORD *v30; // rsi
  struct _NDIS_OPEN_BLOCK **v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-49h]
  char v34; // [rsp+38h] [rbp-41h]
  KIRQL NewIrql; // [rsp+39h] [rbp-40h]
  unsigned int j; // [rsp+3Ch] [rbp-3Dh]
  int v37; // [rsp+40h] [rbp-39h] BYREF
  __int64 v38; // [rsp+48h] [rbp-31h] BYREF
  BOOL v39; // [rsp+50h] [rbp-29h]
  _UNICODE_STRING *v40; // [rsp+58h] [rbp-21h]
  _UNICODE_STRING *v41; // [rsp+60h] [rbp-19h]
  _QWORD *v42; // [rsp+68h] [rbp-11h]
  _DWORD *v43; // [rsp+70h] [rbp-9h]
  struct _NDIS_OPEN_BLOCK **PoolWithTag; // [rsp+78h] [rbp-1h]
  _DWORD *v45; // [rsp+80h] [rbp+7h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp+Fh]
  _DWORD *v47; // [rsp+90h] [rbp+17h]

  v38 = 0LL;
  PoolWithTag = 0LL;
  LOBYTE(v5) = 0;
  v34 = 0;
  *NdisBindingHandle = 0LL;
  v7 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
  v37 = -1073741823;
  OpenBlock = 0LL;
  v39 = v5;
  v9 = 0;
  if ( NdisProtocolHandle )
  {
    if ( (unsigned __int8)byte_1C009260D >= 4u )
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
        v40 = BindDeviceName;
        if ( BindDeviceName )
        {
          RootDeviceName = v7->RootDeviceName;
          BindingAdapter = (__int64)v7->BindingAdapter;
          v41 = RootDeviceName;
          v38 = BindingAdapter;
        }
        else
        {
          ndisFindRootDevice(OpenParameters->AdapterName, (__int64)&v38, 45);
          BindingAdapter = v38;
          BindDeviceName = v40;
          v39 = v38 != 0;
          RootDeviceName = v41;
        }
        v7->BindDeviceName = 0LL;
        if ( BindingAdapter )
        {
          OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, (__int64)v7, 1);
          if ( !OpenBlock )
            goto LABEL_48;
          v47 = (_DWORD *)(BindingAdapter + 124);
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
              v25 = -1073676263;
              goto LABEL_78;
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
              v34 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v17);
              v18 = (KSPIN_LOCK *)(BindingAdapter + 96);
              SpinLock = (PKSPIN_LOCK)(BindingAdapter + 96);
              NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v19 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v38;
              *v19 = KeGetCurrentThread();
              v42 = v19;
              v20 = (_DWORD *)(BindingAdapter + 120);
              *(_DWORD *)(BindingAdapter + 1856) = 986484;
              v21 = (*(_DWORD *)(BindingAdapter + 120) & 0x40000) == 0;
              v43 = (_DWORD *)(BindingAdapter + 1856);
              v45 = (_DWORD *)(BindingAdapter + 120);
              if ( v21 )
              {
                v28 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v29 = v42;
                  v30 = (_DWORD *)(BindingAdapter + 1856);
                  do
                  {
                    *v29 = 0LL;
                    *v30 = 0;
                    KeReleaseSpinLockFromDpcLevel(v18);
                    for ( j = 0; j < 0x32; ++j )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v18);
                    *v29 = KeGetCurrentThread();
                    *v30 = 986491;
                  }
                  while ( *v28 );
                  BindingAdapter = v38;
                  v7 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
                  v20 = v45;
                }
                *v28 = 1;
                *(_DWORD *)(BindingAdapter + 1860) = 986491;
                BindingAdapter = v38;
                *(_QWORD *)(v38 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v37, OpenBlock, BindingAdapter);
              v22 = v37;
              if ( !v37 )
              {
                if ( (unsigned __int8)byte_1C009260D >= 4u )
                  WPP_SF_qqq(0x3Du, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, OpenBlock, v7, BindingAdapter);
                if ( (*v20 & 0x20020000) == 0 )
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                if ( (*v20 & 0x20000) != 0 && v7->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = (struct _NDIS_OPEN_BLOCK **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  v31 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock);
                    _InterlockedAdd(&OpenBlock->PendingAfNotifications, 1u);
                    BindingAdapter = v38;
                    v22 = v37;
                    *v31 = OpenBlock;
                    v31[1] = 0LL;
                    v31[3] = (struct _NDIS_OPEN_BLOCK *)ndisMFinishQueuedPendingOpen;
                    v31[4] = (struct _NDIS_OPEN_BLOCK *)v31;
                  }
                  else if ( (unsigned __int8)byte_1C009261A >= 2u )
                  {
                    WPP_SF_q(0x3Eu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v20 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              v23 = SpinLock;
              *v42 = 0LL;
              *v43 = 0;
              KeReleaseSpinLock(v23, NewIrql);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5136));
              OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
              if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                v22 = -1073741670;
              v25 = v22;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5136));
              if ( !v22 )
              {
                if ( (*v47 & 0x2000) != 0 )
                {
                  v32 = *(_QWORD *)(BindingAdapter + 4008);
                  if ( v32 )
                    (*(void (__fastcall **)(_QWORD))(v32 + 32))(*(_QWORD *)(v32 + 8));
                }
                v26 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v26 )
                  goto LABEL_35;
                v7->OpenAdapterCompleteHandlerEx(OpenBlock->ProtocolBindingContext, 0);
                ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                ndisQueueWorkItem((PLIST_ENTRY)(v26 + 1));
                v25 = 259;
              }
              if ( v25 == 259 )
              {
LABEL_35:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v39 )
                  ndisDereferenceMiniport(BindingAdapter, 0x2Du);
                if ( (unsigned __int8)byte_1C009260D >= 4u )
                {
                  LODWORD(v33) = v25;
                  WPP_SF_qqqL(
                    0x3Fu,
                    &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids,
                    v7,
                    BindingAdapter,
                    OpenBlock,
                    v33);
                }
                return v25;
              }
LABEL_78:
              *NdisBindingHandle = 0LL;
              if ( v9 )
                ndisDereferenceProtocol(v7, MediumArraySize, 9u);
              if ( v34 )
                ndisRemoveOpenFromGlobalList(OpenBlock);
              goto LABEL_35;
            }
LABEL_48:
            v25 = -1073741670;
            goto LABEL_78;
          }
        }
        v25 = -1073676282;
        goto LABEL_78;
      }
      v25 = -1073676286;
    }
    else
    {
      v25 = v37;
    }
    BindingAdapter = v38;
    goto LABEL_78;
  }
  if ( (unsigned __int8)byte_1C009260D >= 2u )
    WPP_SF_(0x3Bu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids);
  return -1073741823;
}
