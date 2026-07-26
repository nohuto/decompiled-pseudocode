/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7B68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0016FF0 (ndisIndicateInitialStateToFilter.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001BA60 (NdisNblTrackerRegisterComponent.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001C624 (ndisHandleFilterHandlersChange.c)
 *     ndisIfCreateFilterInterface @ 0x1C001C71C (ndisIfCreateFilterInterface.c)
 *     ndisReferenceFilterDriver @ 0x1C001C8D4 (ndisReferenceFilterDriver.c)
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     ndisDereferenceFilterDriver @ 0x1C001CA04 (ndisDereferenceFilterDriver.c)
 *     ndisOpenRef @ 0x1C001CA54 (ndisOpenRef.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001CA80 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C001CD40 (NdisIfAddIfStackEntry.c)
 *     ndisFilterXStateSetFlag @ 0x1C001CF60 (ndisFilterXStateSetFlag.c)
 *     ndisQueueFilterOnDriver @ 0x1C001CFB4 (ndisQueueFilterOnDriver.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001D070 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ndisCloseRef @ 0x1C001D0D4 (ndisCloseRef.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001D114 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001D148 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ndisFilterAttachCleanUp @ 0x1C002513C (ndisFilterAttachCleanUp.c)
 *     ndisIovGetNicSwitchList @ 0x1C0026438 (ndisIovGetNicSwitchList.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00435C0 (NdisIfDeleteIfStackEntry.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004E2A0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C0050190 (WPP_SF_qqZ.c)
 *     Template_jcqjzzz @ 0x1C0073AF8 (Template_jcqjzzz.c)
 *     Template_jqxjqxqq @ 0x1C0073C54 (Template_jqxjqxqq.c)
 *     WPP_SF_qqZddZD @ 0x1C0073ED4 (WPP_SF_qqZddZD.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF13C (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00B2284 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00B35BC (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B57BC (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ndisInitializeRef @ 0x1C00B6E54 (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00B736C (ndisInitializeZeroBasedRef.c)
 *     ndisFInvokeAttach @ 0x1C00B7668 (ndisFInvokeAttach.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00B79C4 (ndisCreateFilterAdapterRegistry.c)
 *     ndisMDoMiniportOp @ 0x1C00BD580 (ndisMDoMiniportOp.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00BF650 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00DB110 (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00E0ACC (EthInitializeFilter.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  __int64 v7; // rdx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // rdi
  struct NDIS_BIND_FILTER_LINK *v12; // r13
  _NDIS_FILTER_DRIVER_BLOCK *v13; // rsi
  unsigned int FilterAdapterRegistry; // r15d
  PVOID PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  struct Rtl::KString *v18; // rax
  struct Rtl::KString *v19; // rcx
  struct Rtl::KString *v20; // rbx
  unsigned __int16 v21; // bx
  _WORD *v22; // rax
  struct NDISWATCHDOG__ *Watchdog; // rax
  int v24; // eax
  struct _NDIS_FILTER_BLOCK *v25; // rcx
  struct _NDIS_FILTER_BLOCK *v26; // rax
  KIRQL v27; // al
  struct _NDIS_FILTER_BLOCK *v28; // rcx
  struct _NDIS_FILTER_BLOCK *v29; // r13
  __int64 v30; // rbx
  KIRQL v31; // al
  __int64 v32; // rax
  unsigned __int8 v33; // al
  char v34; // dl
  __int64 v35; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _QWORD *v37; // rcx
  _BYTE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  void *v45; // rax
  int v46; // eax
  const struct _EVENT_DESCRIPTOR *v47; // rdx
  __int64 v48; // rcx
  char v49; // r12
  char v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  NET_IFINDEX v53; // edx
  __int64 v54; // rax
  KIRQL v55; // bl
  struct _NDIS_FILTER_BLOCK *v56; // r13
  KIRQL v57; // di
  struct _NDIS_FILTER_BLOCK *v58; // rbx
  KIRQL v59; // al
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v61; // r12
  char *v62; // rbx
  __int64 v63; // rcx
  NTSTATUS v64; // ebx
  __int64 v65; // rdx
  _BYTE *v67; // rax
  KIRQL v68; // bl
  int v69; // ecx
  __int16 v70; // ax
  KIRQL v71; // al
  int v72; // edx
  __int64 v73; // rax
  NET_IFINDEX v74; // edx
  __int64 v75; // rcx
  int v76; // ecx
  unsigned __int8 v77[8]; // [rsp+20h] [rbp-130h]
  struct _GUID *v78; // [rsp+28h] [rbp-128h]
  unsigned int v79[2]; // [rsp+30h] [rbp-120h]
  __int64 v80; // [rsp+40h] [rbp-110h]
  char v81; // [rsp+D1h] [rbp-7Fh]
  char v82; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v84; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v85; // [rsp+E8h] [rbp-68h]
  int v86; // [rsp+F0h] [rbp-60h]
  int v87; // [rsp+F4h] [rbp-5Ch]
  int v88; // [rsp+F8h] [rbp-58h]
  int v89; // [rsp+FCh] [rbp-54h]
  int v90; // [rsp+100h] [rbp-50h]
  int v91; // [rsp+104h] [rbp-4Ch]
  int v92; // [rsp+108h] [rbp-48h]
  int Data3; // [rsp+10Ch] [rbp-44h]
  int Data2; // [rsp+110h] [rbp-40h]
  struct _NDIS_FILTER_BLOCK *v95; // [rsp+118h] [rbp-38h] BYREF
  _NDIS_FILTER_DRIVER_BLOCK *v96; // [rsp+120h] [rbp-30h]
  PVOID WnodeEventItem; // [rsp+130h] [rbp-20h] BYREF
  _BYTE v98[8]; // [rsp+138h] [rbp-18h] BYREF
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *v99; // [rsp+140h] [rbp-10h]
  _QWORD v100[28]; // [rsp+150h] [rbp+0h] BYREF
  struct _UNICODE_STRING v101; // [rsp+230h] [rbp+E0h] BYREF
  wchar_t Dest[88]; // [rsp+2D0h] [rbp+180h] BYREF

  v86 = a3;
  v96 = a2;
  v85 = a1;
  v84 = 0LL;
  v95 = 0LL;
  v81 = 0;
  memset(v100, 0, sizeof(v100));
  v82 = 0;
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)a2) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(a2, v7, 0);
    return 3221291010LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqZ(
      0x18u,
      &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids,
      a2,
      a1,
      &a2->DefaultFilterCharacteristics.FriendlyName);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v9 = a1->InterfaceGuid.Data4[7];
  v10 = a1->InterfaceGuid.Data4[6];
  WnodeEventItem = &a1->InterfaceGuid;
  v87 = v9;
  v88 = v10;
  v99 = p;
  v89 = v85->InterfaceGuid.Data4[3];
  v90 = v85->InterfaceGuid.Data4[2];
  v91 = v85->InterfaceGuid.Data4[1];
  v92 = v85->InterfaceGuid.Data4[0];
  Data3 = v85->InterfaceGuid.Data3;
  Data2 = v85->InterfaceGuid.Data2;
  v77[0] = Data2;
  LODWORD(v78) = Data3;
  v11 = (__int64)v85;
  v12 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v13 = v96;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_105;
  }
  ndisFindAdjacentFilters(v85, a4, &v95, &v84);
  v13 = v96;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v96->DefaultFilterCharacteristics.ServiceName, v11);
  if ( FilterAdapterRegistry )
  {
LABEL_105:
    v17 = 0LL;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(v11 + 32) < 6u && (*(_BYTE *)(v11 + 88) & 1) == 0 )
    ndisMDoMiniportOp((void *)v11, 1, 65812, (__int64)v98, 4, 1u, 1);
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)v13) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_105;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x398uLL, 0x6266444Eu);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v13, v16, 3u);
    goto LABEL_81;
  }
  memset(PoolWithTag, 0, 0x398uLL);
  *(_QWORD *)(v17 + 40) = 0LL;
  *(_QWORD *)(v17 + 192) = -1LL;
  *(_DWORD *)v17 = 60293381;
  *(_QWORD *)(v17 + 16) = v13;
  v18 = Rtl::KString::Initialize(Dest);
  v19 = *(struct Rtl::KString **)(v17 + 40);
  v20 = v18;
  if ( v18 != v19 )
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0x7274534Bu);
    *(_QWORD *)(v17 + 40) = v20;
  }
  if ( !*(_QWORD *)(v17 + 40) )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_111;
  }
  v21 = v13->DefaultFilterCharacteristics.FriendlyName.Length + 14 + **(_WORD **)(v11 + 3880);
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v21 + 16LL, 0x7473444Eu);
  *(_QWORD *)(v17 + 48) = v22;
  if ( !v22 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_117;
  }
  *v22 = 0;
  *(_WORD *)(*(_QWORD *)(v17 + 48) + 2LL) = v21;
  *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) = *(_QWORD *)(v17 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v17 + 48), *(PCUNICODE_STRING *)(v11 + 3880));
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = 45;
  **(_WORD **)(v17 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v17 + 48), &v13->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = 45;
  **(_WORD **)(v17 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v17 + 40) - 8) >> 1));
  **(_WORD **)(v17 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v17 + 48) >> 1)) = 0;
  *(_QWORD *)(v17 + 800) = NdisNblTrackerRegisterComponent(1, v17, *(_QWORD *)(v17 + 48));
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(v17 + 192),
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v17 + 144));
  *(_BYTE *)(v17 + 56) = 0;
  v24 = *(_DWORD *)(v17 + 56);
  if ( (v24 & 0x100) != 0 )
    *(_DWORD *)(v17 + 56) = v24 & 0xFFFFFEFF;
  *(_DWORD *)(v17 + 56) |= 8u;
  *(_BYTE *)(v17 + 64) = 0;
  ndisInitializeRef(v17 + 72, 2);
  ndisInitializeZeroBasedRef(v17 + 320);
  ndisCloseRef((PKSPIN_LOCK)(v17 + 320));
  *(_QWORD *)(v17 + 592) = v13->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v17 + 600) = v13->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v17 + 616) = v13->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v17 + 624) = v13->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v17 + 608) = v13->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v17 + 176) = v17 + 168;
  *(_QWORD *)(v17 + 168) = v17 + 168;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v17,
                            (_QWORD *)(v17 + 584),
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_111;
  v25 = v95;
  *(_QWORD *)(v17 + 216) = ndisStackExpansionFallbackWorker;
  v26 = v84;
  *(_QWORD *)(v17 + 224) = v17;
  *(_QWORD *)(v17 + 200) = 0LL;
  *(_QWORD *)(v17 + 112) = v26;
  *(_QWORD *)(v17 + 120) = v25;
  if ( v26 || v25 || !*(_QWORD *)(v11 + 2056) )
  {
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 96));
    *(_QWORD *)(v11 + 520) = KeGetCurrentThread();
    v28 = v95;
    *(_DWORD *)(v11 + 1856) = 3867344;
    if ( v28 )
      v28->LowerFilter = (_NDIS_FILTER_BLOCK *)v17;
    else
      *(_QWORD *)(v11 + 2056) = v17;
    v29 = v84;
    if ( v84 )
      v84->HigherFilter = (_NDIS_FILTER_BLOCK *)v17;
    else
      *(_QWORD *)(v11 + 2048) = v17;
    *(_QWORD *)(v17 + 32) = v11;
    *(_QWORD *)(v11 + 520) = 0LL;
    *(_DWORD *)(v11 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 96), v27);
    v81 = 1;
    v30 = v11;
    if ( *(_QWORD *)(v11 + 16) )
      v30 = *(_QWORD *)(v11 + 16);
    v31 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v17 + 104) = ndisGlobalFilterList;
    ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v17;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v31);
    if ( !ndisQueueFilterOnDriver(v17, (__int64)v13) )
    {
      v12 = a4;
      FilterAdapterRegistry = -1073676286;
      v49 = 0;
      goto LABEL_112;
    }
    if ( (v13->Bind._p->_t.FilterBindFlags & 2) == 0
      || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                    &v13->DefaultFilterCharacteristics.ServiceName,
                                    v17,
                                    v11)) == 0 )
    {
      *(_BYTE *)(v17 + 64) = 1;
      *(_QWORD *)(v17 + 904) = a4;
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v11 + 5136));
      Ndis::BindState::AddBindContext(&a4->BindState, (void *)v17);
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5136));
      memset(v100, 0, sizeof(v100));
      v32 = *(_QWORD *)(v17 + 16);
      if ( *(_BYTE *)(v32 + 100) <= 6u )
      {
        v33 = *(_BYTE *)(v32 + 101);
        if ( v33 )
        {
          if ( v33 < 0x14u )
          {
            v34 = 2;
            v70 = 176;
          }
          else
          {
            if ( v33 >= 0x1Eu )
              goto LABEL_32;
            v34 = 3;
            v70 = 200;
          }
        }
        else
        {
          v34 = 1;
          v70 = 164;
        }
        WORD1(v100[0]) = v70;
LABEL_33:
        BYTE1(v100[0]) = v34;
        LOBYTE(v100[0]) = -103;
        LODWORD(v100[3]) = *(_DWORD *)(v30 + 4080);
        v100[17] = *(_QWORD *)(v30 + 4048);
        v100[5] = v30 + 3832;
        v100[4] = *(_QWORD *)(v30 + 3880);
        v35 = *(_QWORD *)(v17 + 112);
        if ( v35 )
        {
          LODWORD(v100[18]) = *(_DWORD *)(v35 + 832);
          v100[19] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 112) + 840LL) + 1312LL);
        }
        else
        {
          LODWORD(v100[18]) = *(_DWORD *)(*(_QWORD *)(v17 + 32) + 4080LL);
          v100[19] = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 4048LL);
        }
        v100[2] = *(_QWORD *)(v17 + 40);
        v100[10] = *(_QWORD *)(v11 + 768);
        if ( (*(_DWORD *)(v11 + 568) & 0x80000001) == 0x80000001 )
        {
          LODWORD(v100[9]) = 3;
        }
        else
        {
          if ( v29 )
          {
            LODWORD(v100[9]) = v29->MediaType;
            PhysicalMediaType = v29->PhysicalMediaType;
            goto LABEL_38;
          }
          LODWORD(v100[9]) = *(_DWORD *)(v11 + 1836);
        }
        PhysicalMediaType = *(_DWORD *)(v11 + 3800);
LABEL_38:
        HIDWORD(v100[9]) = PhysicalMediaType;
        v37 = *(_QWORD **)(v17 + 112);
        if ( v37 )
        {
          v100[6] = *(_QWORD *)((char *)v37 + 388);
          v100[7] = v37[50];
          v100[8] = v37[51];
          v38 = (_BYTE *)v37[101];
        }
        else
        {
          v100[6] = *(_QWORD *)(v11 + 344);
          v100[7] = *(_QWORD *)(v11 + 2768);
          v100[8] = *(_QWORD *)(v11 + 2776);
          v67 = *(_BYTE **)(v11 + 4120);
          if ( !v67 || !*v67 )
          {
            v100[11] = 0LL;
LABEL_41:
            v39 = v100[21];
            if ( *(_QWORD *)(v11 + 4296) )
              v39 = *(_QWORD *)(v11 + 4296);
            v40 = *(_QWORD *)(v11 + 3568);
            v100[21] = v39;
            v41 = v100[22];
            if ( v40 )
              v41 = v40;
            v42 = *(_QWORD *)(v11 + 3592);
            v100[22] = v41;
            v43 = v100[24];
            if ( v42 )
              v43 = v42;
            v100[24] = v43;
            if ( (unsigned __int8)v34 >= 4u )
            {
              if ( *(_QWORD *)(v11 + 4640) )
              {
                v100[26] = *(_QWORD *)(v11 + 4640);
                if ( (unsigned int)ndisIovGetNicSwitchList(v11, &v100[27]) )
                {
                  FilterAdapterRegistry = -1073741823;
                  goto LABEL_129;
                }
              }
              LOBYTE(v100[25]) = *(_BYTE *)(*(_QWORD *)(v11 + 4064) + 556LL);
            }
            v44 = *(_QWORD *)(v11 + 4064);
            v100[23] = *(_QWORD *)(v11 + 3856);
            LOWORD(v100[12]) = *(_WORD *)(v44 + 1124);
            memmove((char *)&v100[12] + 2, (const void *)(v44 + 1126), LOWORD(v100[12]));
            *(_QWORD *)(v17 + 352) = v100[6];
            *(_QWORD *)(v17 + 360) = v100[7];
            *(_QWORD *)(v17 + 368) = v100[8];
            if ( LODWORD(v100[6]) == 1 )
            {
              *(_QWORD *)(v17 + 632) = ndisFilterSendNetBufferLists;
              *(_QWORD *)(v17 + 640) = ndisFilterIndicateReceiveNetBufferLists;
              v45 = ndisFilterCancelSendNetBufferLists;
            }
            else
            {
              ndisFilterXStateSetFlag(v17);
              *(_QWORD *)(v17 + 632) = ndisFakeFilterSendHandler;
              *(_QWORD *)(v17 + 640) = ndisFakeFilterReceiveHandler;
              v45 = ndisFakeMiniportCancelSendPackets;
            }
            *(_QWORD *)(v17 + 648) = v45;
            if ( (*(_DWORD *)(v11 + 568) & 0x80000001) == 0x80000001 )
              v46 = *(_DWORD *)(v11 + 464);
            else
              v46 = v100[9];
            *(_DWORD *)(v17 + 344) = v46;
            *(_DWORD *)(v17 + 348) = HIDWORD(v100[9]);
            FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v17);
            if ( !FilterAdapterRegistry )
            {
              if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                Template_jcqjzzz(
                  *(_QWORD *)(v17 + 32) + 4032LL,
                  *(_QWORD *)(v17 + 40),
                  (const GUID *)(v17 + 816),
                  v17 + 816,
                  *(_BYTE *)(v17 + 64),
                  246,
                  *(_QWORD *)(v17 + 32) + 4032LL,
                  *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 3880LL) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v17 + 40) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v17 + 48) + 8LL));
              if ( Microsoft_Windows_Networking_CorrelationEnabled )
                EtwEx_tidActivityInfoTransfer(
                  v48,
                  v47,
                  (const struct _GUID *)(v17 + 816),
                  (const struct _GUID *)(v11 + 4032),
                  v77[0],
                  v78,
                  0x200000u);
              HIDWORD(v100[0]) = *(_DWORD *)(v17 + 832);
              v49 = 1;
              v100[1] = *(_QWORD *)(*(_QWORD *)(v17 + 840) + 1312LL);
              FilterAdapterRegistry = ndisFInvokeAttach(v17, (__int64)v100);
              if ( (unsigned __int8)byte_1C0092610 >= 4u )
              {
                LODWORD(v80) = FilterAdapterRegistry;
                v79[0] = v13->DefaultFilterCharacteristics.MinorNdisVersion;
                LODWORD(v78) = v13->DefaultFilterCharacteristics.MajorNdisVersion;
                WPP_SF_qqZddZD(
                  v13->DefaultFilterCharacteristics.MinorNdisVersion,
                  v13->DefaultFilterCharacteristics.MajorNdisVersion,
                  v11,
                  v17,
                  &v13->DefaultFilterCharacteristics.FriendlyName,
                  v78,
                  *(_QWORD *)v79,
                  *(_QWORD *)(v11 + 3880),
                  v80);
              }
              if ( FilterAdapterRegistry )
              {
                v12 = a4;
                a4->BindState.AllowBindDespiteMandatory = v100[20] & 1;
                v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 144));
                *(_QWORD *)(v17 + 152) = KeGetCurrentThread();
                *(_BYTE *)(v17 + 56) = 0;
                v72 = *(_DWORD *)(v17 + 56);
                *(_DWORD *)(v17 + 160) = 3867661;
                if ( (v72 & 0x100) != 0 )
                  *(_DWORD *)(v17 + 56) = v72 & 0xFFFFFEFF;
                *(_DWORD *)(v17 + 56) |= 8u;
                *(_QWORD *)(v17 + 152) = 0LL;
                *(_DWORD *)(v17 + 160) = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 144), v71);
                *(_BYTE *)(v17 + 64) = 0;
                if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                  Template_jcqjzzz(
                    *(_QWORD *)(v17 + 32) + 4032LL,
                    *(_QWORD *)(v17 + 40),
                    (const GUID *)(v17 + 816),
                    v17 + 816,
                    0,
                    25,
                    *(_QWORD *)(v17 + 32) + 4032LL,
                    *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 3880LL) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v17 + 40) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v17 + 48) + 8LL));
                goto LABEL_112;
              }
              v50 = v100[9];
              if ( *(_DWORD *)(v17 + 344) != LODWORD(v100[9]) && (*(_DWORD *)(v11 + 568) & 0x80000001) != 0x80000001 )
              {
                if ( (unsigned __int8)byte_1C0092614 >= 4u )
                {
                  LODWORD(v78) = v100[9];
                  *(_DWORD *)v77 = *(_DWORD *)(v17 + 344);
                  WPP_SF_qqDD(0x1Au, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, v11, v17, *(_QWORD *)v77, v78);
                  v50 = v100[9];
                }
                if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
                  Template_jqxjqxqq(
                    *(_QWORD *)(v17 + 840),
                    v17 + 816,
                    (const GUID *)(v11 + 4032),
                    v11 + 4032,
                    *(_DWORD *)(v11 + 4080),
                    *(_QWORD *)(v11 + 4048),
                    v17 + 816,
                    *(_DWORD *)(v17 + 832),
                    *(_QWORD *)(*(_QWORD *)(v17 + 840) + 1312LL),
                    *(_DWORD *)(v17 + 344),
                    v50);
                v82 = 1;
              }
              v51 = *(_QWORD *)(v17 + 120);
              if ( v51 )
              {
                v73 = *(_QWORD *)(v17 + 112);
                if ( v73 )
                  v74 = *(_DWORD *)(v73 + 832);
                else
                  v74 = *(_DWORD *)(v11 + 4080);
                NdisIfDeleteIfStackEntry(*(_DWORD *)(v51 + 832), v74);
              }
              v52 = *(_QWORD *)(v17 + 112);
              if ( v52 )
                v53 = *(_DWORD *)(v52 + 832);
              else
                v53 = *(_DWORD *)(*(_QWORD *)(v17 + 32) + 4080LL);
              NdisIfAddIfStackEntry(*(_DWORD *)(v17 + 832), v53);
              v54 = *(_QWORD *)(v17 + 120);
              if ( v54 )
                NdisIfAddIfStackEntry(*(_DWORD *)(v54 + 832), *(_DWORD *)(v17 + 832));
              v55 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              ndisIfUpdateFilterIfStack(*(_QWORD *)(v17 + 32));
              KeReleaseSpinLock(&ndisIfListLock, v55);
              v56 = *(struct _NDIS_FILTER_BLOCK **)(v17 + 112);
              v84 = v56;
              if ( v56 )
              {
                v57 = KeAcquireSpinLockRaiseToDpc(&v56->Lock);
                v58 = v84;
                v56->LockThread = KeGetCurrentThread();
                v58->LockDbg = 3867743;
                *(_DWORD *)(v17 + 352) = v58->MediaConnectStateIndicateUp;
                *(_DWORD *)(v17 + 356) = v58->MediaDuplexStateIndicateUp;
                *(_QWORD *)(v17 + 360) = v58->XmitLinkSpeedIndicateUp;
                *(_QWORD *)(v17 + 368) = v58->RcvLinkSpeedIndicateUp;
                *(_DWORD *)(v17 + 376) = v58->PauseFunctionsIndicateUp;
                *(_DWORD *)(v17 + 380) = v58->AutoNegotiationFlagsIndicateUp;
                ndisOpenRef(v17 + 320);
                v56->LockThread = 0LL;
                v58->LockDbg = 0;
                KeReleaseSpinLock(&v56->Lock, v57);
                v11 = (__int64)v85;
                v13 = v96;
              }
              else
              {
                v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 96));
                *(_QWORD *)(v11 + 520) = KeGetCurrentThread();
                v69 = *(_DWORD *)(v11 + 344);
                *(_DWORD *)(v11 + 1856) = 3867758;
                *(_DWORD *)(v17 + 352) = v69;
                *(_DWORD *)(v17 + 356) = *(_DWORD *)(v11 + 348);
                *(_QWORD *)(v17 + 360) = *(_QWORD *)(v11 + 2768);
                *(_QWORD *)(v17 + 368) = *(_QWORD *)(v11 + 2776);
                *(_DWORD *)(v17 + 376) = *(_DWORD *)(v11 + 812);
                *(_DWORD *)(v17 + 380) = *(_DWORD *)(v11 + 816);
                ndisOpenRef(v17 + 320);
                *(_QWORD *)(v11 + 520) = 0LL;
                *(_DWORD *)(v11 + 1856) = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 96), v68);
              }
              *(_DWORD *)(*(_QWORD *)(v17 + 840) + 1220LL) = *(_DWORD *)(v17 + 352);
              *(_DWORD *)(*(_QWORD *)(v17 + 840) + 1224LL) = *(_DWORD *)(v17 + 356);
              *(_QWORD *)(*(_QWORD *)(v17 + 840) + 1208LL) = *(_QWORD *)(v17 + 368);
              *(_QWORD *)(*(_QWORD *)(v17 + 840) + 1200LL) = *(_QWORD *)(v17 + 360);
              ndisIndicateInitialStateToFilter(v17);
              v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 144));
              CurrentThread = KeGetCurrentThread();
              *(_BYTE *)(v17 + 56) = 0;
              *(_DWORD *)(v17 + 56) |= 4u;
              *(_QWORD *)(v17 + 152) = CurrentThread;
              *(_DWORD *)(v17 + 160) = 3867782;
              if ( v82 )
              {
                *(_DWORD *)(v17 + 56) |= 0x8000u;
                ++*(_BYTE *)(v11 + 1997);
                v75 = *(_QWORD *)(v17 + 840);
                *(_QWORD *)(v17 + 344) = v100[9];
                *(_DWORD *)(v75 + 564) = *(_DWORD *)(v17 + 344);
                *(_DWORD *)(*(_QWORD *)(v17 + 840) + 568LL) = *(_DWORD *)(v17 + 348);
              }
              *(_QWORD *)(v17 + 152) = 0LL;
              *(_DWORD *)(v17 + 160) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 144), v59);
              if ( v82 )
              {
                v76 = *(_DWORD *)(v17 + 344);
                *(_DWORD *)(v11 + 464) = v76;
                *(_DWORD *)(v11 + 1832) = *(_DWORD *)(v17 + 348);
                if ( !v76 )
                {
                  if ( EthInitializeFilter(
                         *(_DWORD *)(v11 + 3060),
                         *(_QWORD *)(v11 + 4064) + 1126LL,
                         *(_QWORD *)(v11 + 400)) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v11 + 400) + 296LL) = v11;
                  }
                }
              }
              *(_BYTE *)(v17 + 64) = 2;
              if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                Template_jcqjzzz(
                  *(_QWORD *)(v17 + 32) + 4032LL,
                  *(_QWORD *)(v17 + 40),
                  (const GUID *)(v17 + 816),
                  v17 + 816,
                  2,
                  196,
                  *(_QWORD *)(v17 + 32) + 4032LL,
                  *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 3880LL) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v17 + 40) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v17 + 48) + 8LL));
              ndisReferenceMiniport(v11, 0x28u);
              if ( *(_BYTE *)(v11 + 32) < 6u && !*(_BYTE *)(v11 + 1994) )
                *(_BYTE *)(v11 + 1994) = 1;
              ndisSetupWmiNode(
                v11,
                *(const void ***)(v17 + 48),
                *(unsigned __int16 *)(*(_QWORD *)(v11 + 3792) + 8LL)
              + 4
              + v13->DefaultFilterCharacteristics.UniqueName.Length,
                (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
                &WnodeEventItem);
              v61 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v62 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                memmove(
                  v62,
                  v13->DefaultFilterCharacteristics.UniqueName.Buffer,
                  v13->DefaultFilterCharacteristics.UniqueName.Length);
                memmove(
                  &v62[v13->DefaultFilterCharacteristics.UniqueName.Length + 2],
                  *(const void **)(*(_QWORD *)(v11 + 3792) + 16LL),
                  *(unsigned __int16 *)(*(_QWORD *)(v11 + 3792) + 8LL));
                v64 = IoWMIWriteEvent(v61);
                if ( v64 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_(0x1Bu, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
                    Template_qqq(v63, &FilterArrivalIndicationFailed, (const GUID *)(v17 + 816), v64, 254, 0);
                  ExFreePoolWithTag(v61, 0);
                }
              }
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v11 + 5136));
              v12 = a4;
              if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause)
                && (unsigned __int8)byte_1C0092623 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a4, &v101);
                if ( (unsigned __int8)byte_1C0092623 >= 4u )
                  WPP_SF_Zq(
                    0x1Cu,
                    &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids,
                    v101.Buffer,
                    *(_QWORD *)&v101.Length);
              }
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5136));
              if ( *(_BYTE *)(v11 + 32) < 6u && !*(_BYTE *)(v11 + 1994) )
                *(_BYTE *)(v11 + 1994) = 1;
LABEL_81:
              if ( ndisVerifierNdisDispatch
                && v17
                && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v17 + 16) + 16LL))
                && !*(_QWORD *)(v17 + 912)
                && ((int (__fastcall *)(_DEVICE_OBJECT *, __int64, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                     v13->DriverObject->DeviceObject,
                     v17,
                     &v13->FilterDriverContext) < 0
                && (unsigned __int8)byte_1C0092614 >= 2u )
              {
                WPP_SF_q(0x1Du, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, v17);
              }
              goto LABEL_82;
            }
LABEL_129:
            v12 = a4;
            goto LABEL_111;
          }
          v38 = v67 + 8;
        }
        v100[11] = v38;
        goto LABEL_41;
      }
LABEL_32:
      WORD1(v100[0]) = 224;
      v34 = 4;
      goto LABEL_33;
    }
    v12 = a4;
LABEL_117:
    v49 = 0;
    goto LABEL_112;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_111:
  v49 = 0;
LABEL_112:
  if ( *(_QWORD *)(v17 + 904) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v11 + 5136));
    Ndis::BindState::RemoveBindContext(&v12->BindState, (void *)v17);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5136));
    *(_QWORD *)(v17 + 904) = 0LL;
  }
  ndisFilterAttachCleanUp((PVOID)v17, v11 & -(__int64)(v81 != 0), v49);
LABEL_82:
  ndisHandleFilterHandlersChange(v11);
  if ( v100[27] )
  {
    ExFreePoolWithTag((PVOID)v100[27], 0);
    v100[27] = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v12->BindState.AllowBindDespiteMandatory
    && (v12->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v11);
  }
  ndisDereferenceMiniport(v11, 0x27u);
  ndisDereferenceFilterDriver(v13, v65, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    *(_DWORD *)v77 = FilterAdapterRegistry;
    WPP_SF_qqd(0x1Eu, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, v13, v11, *(_QWORD *)v77);
  }
  return FilterAdapterRegistry;
}
