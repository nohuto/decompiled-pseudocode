/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C5090 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisFilterAttachCleanUp @ 0x1C0011CBC (ndisFilterAttachCleanUp.c)
 *     ndisIovGetNicSwitchList @ 0x1C0013498 (ndisIovGetNicSwitchList.c)
 *     ndisDereferenceFilterDriver @ 0x1C0017074 (ndisDereferenceFilterDriver.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0019370 (ndisIndicateInitialStateToFilter.c)
 *     ndisReferenceFilterDriver @ 0x1C001A8DC (ndisReferenceFilterDriver.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001C010 (NdisNblTrackerRegisterComponent.c)
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001CE10 (ndisHandleFilterHandlersChange.c)
 *     ndisIfCreateFilterInterface @ 0x1C001CE90 (ndisIfCreateFilterInterface.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C00202DC (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C00205A0 (NdisIfAddIfStackEntry.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C0021DF8 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00227E8 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ndisQueueFilterOnDriver @ 0x1C0023E70 (ndisQueueFilterOnDriver.c)
 *     ndisFilterXStateSetFlag @ 0x1C002421C (ndisFilterXStateSetFlag.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024608 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisCloseRef @ 0x1C00248C0 (ndisCloseRef.c)
 *     ndisOpenRef @ 0x1C0024DE0 (ndisOpenRef.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0041460 (NdisIfDeleteIfStackEntry.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004CD80 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C004F68C (WPP_SF_qqZ.c)
 *     McTemplateK0jcqjzzz @ 0x1C0075DE0 (McTemplateK0jcqjzzz.c)
 *     McTemplateK0jqxjqxqq @ 0x1C0075F34 (McTemplateK0jqxjqxqq.c)
 *     WPP_SF_qqZddZD @ 0x1C00761D4 (WPP_SF_qqZddZD.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00B2AF8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00B7E20 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B8564 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00BBBFC (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BCE04 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisInitializeRef @ 0x1C00C086C (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00C1094 (ndisInitializeZeroBasedRef.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00C8264 (ndisCreateFilterAdapterRegistry.c)
 *     ndisMDoMiniportOp @ 0x1C00C9AC8 (ndisMDoMiniportOp.c)
 *     ndisFInvokeAttach @ 0x1C00CA258 (ndisFInvokeAttach.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00E6970 (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00ED510 (EthInitializeFilter.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // rdi
  struct NDIS_BIND_FILTER_LINK *v11; // r13
  _NDIS_FILTER_DRIVER_BLOCK *v12; // rsi
  unsigned int FilterAdapterRegistry; // r15d
  PVOID PoolWithTag; // rax
  __int64 v15; // r14
  struct Rtl::KString *v16; // rax
  struct Rtl::KString *v17; // rcx
  struct Rtl::KString *v18; // rbx
  unsigned __int16 v19; // bx
  _WORD *v20; // rax
  struct NDISWATCHDOG__ *Watchdog; // rax
  int v22; // eax
  struct _NDIS_FILTER_BLOCK *v23; // rcx
  struct _NDIS_FILTER_BLOCK *v24; // rax
  KIRQL v25; // al
  struct _NDIS_FILTER_BLOCK *v26; // rcx
  struct _NDIS_FILTER_BLOCK *v27; // r13
  __int64 v28; // rbx
  KIRQL v29; // al
  __int64 v30; // rax
  unsigned __int8 v31; // al
  char v32; // dl
  __int64 v33; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _QWORD *v35; // rcx
  _BYTE *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // rax
  void *v44; // rcx
  void *v45; // rdx
  int v46; // eax
  const struct _EVENT_DESCRIPTOR *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  NET_IFINDEX v52; // edx
  __int64 v53; // rax
  KIRQL v54; // bl
  struct _NDIS_FILTER_BLOCK *v55; // r12
  KIRQL v56; // di
  struct _NDIS_FILTER_BLOCK *v57; // rbx
  KIRQL v58; // dl
  int v59; // ecx
  PVOID v60; // r12
  char *v61; // rbx
  struct _MCGEN_TRACE_CONTEXT *v62; // rcx
  signed int v63; // ebx
  __int64 FilterBindFlags; // r8
  __int64 v65; // r9
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
  unsigned int Arg1[2]; // [rsp+20h] [rbp-130h]
  const struct _GUID *Arg2; // [rsp+28h] [rbp-128h]
  unsigned int v79[2]; // [rsp+30h] [rbp-120h]
  __int64 v80; // [rsp+40h] [rbp-110h]
  char v81; // [rsp+D0h] [rbp-80h]
  char v82; // [rsp+D2h] [rbp-7Eh]
  char v83; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v85; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v86; // [rsp+E8h] [rbp-68h]
  int v87; // [rsp+F0h] [rbp-60h]
  int v88; // [rsp+F4h] [rbp-5Ch]
  int v89; // [rsp+F8h] [rbp-58h]
  int v90; // [rsp+FCh] [rbp-54h]
  int v91; // [rsp+100h] [rbp-50h]
  int v92; // [rsp+104h] [rbp-4Ch]
  int v93; // [rsp+108h] [rbp-48h]
  int Data3; // [rsp+10Ch] [rbp-44h]
  int Data2; // [rsp+110h] [rbp-40h]
  struct _NDIS_FILTER_BLOCK *v96; // [rsp+118h] [rbp-38h] BYREF
  _NDIS_FILTER_DRIVER_BLOCK *v97; // [rsp+120h] [rbp-30h]
  PVOID WnodeEventItem; // [rsp+130h] [rbp-20h] BYREF
  _BYTE v99[8]; // [rsp+138h] [rbp-18h] BYREF
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *v100; // [rsp+140h] [rbp-10h]
  _QWORD v101[28]; // [rsp+150h] [rbp+0h] BYREF
  struct _UNICODE_STRING v102; // [rsp+230h] [rbp+E0h] BYREF
  wchar_t Dest[88]; // [rsp+2D0h] [rbp+180h] BYREF

  v87 = a3;
  v97 = a2;
  v86 = a1;
  v85 = 0LL;
  v96 = 0LL;
  v81 = 0;
  memset(v101, 0, sizeof(v101));
  v82 = 0;
  v83 = 0;
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)a2) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1) )
  {
    ndisDereferenceFilterDriver(a2);
    return 3221291010LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqZ(
      0x18u,
      &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids,
      a2,
      a1,
      &a2->DefaultFilterCharacteristics.FriendlyName);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v8 = a1->InterfaceGuid.Data4[7];
  v9 = a1->InterfaceGuid.Data4[6];
  WnodeEventItem = &a1->InterfaceGuid;
  v88 = v8;
  v89 = v9;
  v100 = p;
  v90 = v86->InterfaceGuid.Data4[3];
  v91 = v86->InterfaceGuid.Data4[2];
  v92 = v86->InterfaceGuid.Data4[1];
  v93 = v86->InterfaceGuid.Data4[0];
  Data3 = v86->InterfaceGuid.Data3;
  Data2 = v86->InterfaceGuid.Data2;
  LOBYTE(Arg1[0]) = Data2;
  LODWORD(Arg2) = Data3;
  v10 = (__int64)v86;
  v11 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v12 = v97;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_105;
  }
  ndisFindAdjacentFilters(v86, a4, &v96, &v85);
  v12 = v97;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v97->DefaultFilterCharacteristics.ServiceName, v10);
  if ( FilterAdapterRegistry )
  {
LABEL_105:
    v15 = 0LL;
LABEL_81:
    if ( ndisVerifierNdisDispatch
      && v15
      && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v15 + 16) + 16LL))
      && !*(_QWORD *)(v15 + 912)
      && ((int (__fastcall *)(_DEVICE_OBJECT *, __int64, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
           v12->DriverObject->DeviceObject,
           v15,
           &v12->FilterDriverContext) < 0
      && (unsigned __int8)byte_1C0099614 >= 2u )
    {
      WPP_SF_q(0x1Du, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids, v15);
    }
    goto LABEL_82;
  }
  if ( *(_BYTE *)(v10 + 32) < 6u && (*(_BYTE *)(v10 + 88) & 1) == 0 )
    ndisMDoMiniportOp((void *)v10, 1, 65812, (__int64)v99, 4, 1u, 1);
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)v12) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_105;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x398uLL, 0x6266444Eu);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v12);
    goto LABEL_81;
  }
  memset(PoolWithTag, 0, 0x398uLL);
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 192) = -1LL;
  *(_DWORD *)v15 = 60293381;
  *(_QWORD *)(v15 + 16) = v12;
  v16 = Rtl::KString::Initialize(Dest);
  v17 = *(struct Rtl::KString **)(v15 + 40);
  v18 = v16;
  if ( v16 != v17 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    *(_QWORD *)(v15 + 40) = v18;
    v17 = v18;
  }
  if ( !v17 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_115;
  }
  v19 = v12->DefaultFilterCharacteristics.FriendlyName.Length + 14 + **(_WORD **)(v10 + 3880);
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v19 + 16LL, 0x7473444Eu);
  *(_QWORD *)(v15 + 48) = v20;
  if ( !v20 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_115;
  }
  *v20 = 0;
  *(_WORD *)(*(_QWORD *)(v15 + 48) + 2LL) = v19;
  *(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) = *(_QWORD *)(v15 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v15 + 48), *(PCUNICODE_STRING *)(v10 + 3880));
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 45;
  **(_WORD **)(v15 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v15 + 48), &v12->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 45;
  **(_WORD **)(v15 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v15 + 40) - 8) >> 1));
  **(_WORD **)(v15 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 0;
  *(_QWORD *)(v15 + 800) = NdisNblTrackerRegisterComponent(1, v15, *(_QWORD *)(v15 + 48));
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(v15 + 192),
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v15 + 144));
  *(_BYTE *)(v15 + 56) = 0;
  v22 = *(_DWORD *)(v15 + 56);
  if ( (v22 & 0x100) != 0 )
  {
    v22 &= ~0x100u;
    *(_DWORD *)(v15 + 56) = v22;
  }
  *(_BYTE *)(v15 + 64) = 0;
  *(_DWORD *)(v15 + 56) = v22 | 8;
  ndisInitializeRef(v15 + 72, 2);
  ndisInitializeZeroBasedRef(v15 + 320);
  ndisCloseRef((PKSPIN_LOCK)(v15 + 320));
  *(_QWORD *)(v15 + 592) = v12->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v15 + 600) = v12->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v15 + 616) = v12->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v15 + 624) = v12->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v15 + 608) = v12->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v15 + 176) = v15 + 168;
  *(_QWORD *)(v15 + 168) = v15 + 168;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v15,
                            (_QWORD *)(v15 + 584),
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_115;
  v23 = v96;
  *(_QWORD *)(v15 + 216) = ndisStackExpansionFallbackWorker;
  v24 = v85;
  *(_QWORD *)(v15 + 224) = v15;
  *(_QWORD *)(v15 + 200) = 0LL;
  *(_QWORD *)(v15 + 112) = v24;
  *(_QWORD *)(v15 + 120) = v23;
  if ( v24 || v23 || !*(_QWORD *)(v10 + 2056) )
  {
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
    v26 = v96;
    *(_DWORD *)(v10 + 1856) = 3867347;
    if ( v26 )
      v26->LowerFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      *(_QWORD *)(v10 + 2056) = v15;
    v27 = v85;
    if ( v85 )
      v85->HigherFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      *(_QWORD *)(v10 + 2048) = v15;
    *(_QWORD *)(v15 + 32) = v10;
    *(_QWORD *)(v10 + 520) = 0LL;
    *(_DWORD *)(v10 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v25);
    v81 = 1;
    v28 = v10;
    if ( *(_QWORD *)(v10 + 16) )
      v28 = *(_QWORD *)(v10 + 16);
    v29 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v15 + 104) = ndisGlobalFilterList;
    ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v15;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v29);
    if ( ndisQueueFilterOnDriver(v15, (__int64)v12) )
    {
      if ( (v12->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                      &v12->DefaultFilterCharacteristics.ServiceName,
                                      v15,
                                      v10)) == 0 )
      {
        *(_BYTE *)(v15 + 64) = 1;
        *(_QWORD *)(v15 + 904) = a4;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
        Ndis::BindState::AddBindContext(&a4->BindState, (void *)v15);
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
        memset(v101, 0, sizeof(v101));
        v30 = *(_QWORD *)(v15 + 16);
        if ( *(_BYTE *)(v30 + 100) <= 6u )
        {
          v31 = *(_BYTE *)(v30 + 101);
          if ( v31 )
          {
            if ( v31 < 0x14u )
            {
              v32 = 2;
              v70 = 176;
            }
            else
            {
              if ( v31 >= 0x1Eu )
                goto LABEL_32;
              v32 = 3;
              v70 = 200;
            }
          }
          else
          {
            v32 = 1;
            v70 = 164;
          }
          WORD1(v101[0]) = v70;
LABEL_33:
          BYTE1(v101[0]) = v32;
          LOBYTE(v101[0]) = -103;
          LODWORD(v101[3]) = *(_DWORD *)(v28 + 4080);
          v101[17] = *(_QWORD *)(v28 + 4048);
          v101[5] = v28 + 3832;
          v101[4] = *(_QWORD *)(v28 + 3880);
          v33 = *(_QWORD *)(v15 + 112);
          if ( v33 )
          {
            LODWORD(v101[18]) = *(_DWORD *)(v33 + 832);
            v101[19] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 840LL) + 1312LL);
          }
          else
          {
            LODWORD(v101[18]) = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4080LL);
            v101[19] = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 4048LL);
          }
          v101[2] = *(_QWORD *)(v15 + 40);
          v101[10] = *(_QWORD *)(v10 + 768);
          if ( (*(_DWORD *)(v10 + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v101[9]) = 3;
          }
          else
          {
            if ( v27 )
            {
              LODWORD(v101[9]) = v27->MediaType;
              PhysicalMediaType = v27->PhysicalMediaType;
              goto LABEL_38;
            }
            LODWORD(v101[9]) = *(_DWORD *)(v10 + 1836);
          }
          PhysicalMediaType = *(_DWORD *)(v10 + 3800);
LABEL_38:
          HIDWORD(v101[9]) = PhysicalMediaType;
          v35 = *(_QWORD **)(v15 + 112);
          if ( v35 )
          {
            v101[6] = *(_QWORD *)((char *)v35 + 388);
            v101[7] = v35[50];
            v101[8] = v35[51];
            v36 = (_BYTE *)v35[101];
          }
          else
          {
            v101[6] = *(_QWORD *)(v10 + 344);
            v101[7] = *(_QWORD *)(v10 + 2768);
            v101[8] = *(_QWORD *)(v10 + 2776);
            v67 = *(_BYTE **)(v10 + 4120);
            if ( !v67 || !*v67 )
            {
              v101[11] = 0LL;
LABEL_41:
              v37 = v101[21];
              if ( *(_QWORD *)(v10 + 4296) )
                v37 = *(_QWORD *)(v10 + 4296);
              v38 = *(_QWORD *)(v10 + 3568);
              v101[21] = v37;
              v39 = v101[22];
              if ( v38 )
                v39 = v38;
              v40 = *(_QWORD *)(v10 + 3592);
              v101[22] = v39;
              v41 = v101[24];
              if ( v40 )
                v41 = v40;
              v101[24] = v41;
              if ( (unsigned __int8)v32 >= 4u )
              {
                if ( *(_QWORD *)(v10 + 4640) )
                {
                  v101[26] = *(_QWORD *)(v10 + 4640);
                  if ( (unsigned int)ndisIovGetNicSwitchList(v10, &v101[27]) )
                  {
                    FilterAdapterRegistry = -1073741823;
                    goto LABEL_127;
                  }
                }
                LOBYTE(v101[25]) = *(_BYTE *)(*(_QWORD *)(v10 + 4064) + 556LL);
              }
              v42 = *(_QWORD *)(v10 + 4064);
              v101[23] = *(_QWORD *)(v10 + 3856);
              LOWORD(v101[12]) = *(_WORD *)(v42 + 1124);
              memmove((char *)&v101[12] + 2, (const void *)(v42 + 1126), LOWORD(v101[12]));
              *(_QWORD *)(v15 + 352) = v101[6];
              *(_QWORD *)(v15 + 360) = v101[7];
              *(_QWORD *)(v15 + 368) = v101[8];
              if ( LODWORD(v101[6]) == 1 )
              {
                v43 = ndisFilterIndicateReceiveNetBufferLists;
                v44 = ndisFilterSendNetBufferLists;
                v45 = ndisFilterCancelSendNetBufferLists;
              }
              else
              {
                ndisFilterXStateSetFlag(v15);
                v43 = ndisFakeFilterReceiveHandler;
                v44 = ndisFakeFilterSendHandler;
                v45 = ndisFakeMiniportCancelSendPackets;
              }
              *(_QWORD *)(v15 + 648) = v45;
              *(_QWORD *)(v15 + 632) = v44;
              *(_QWORD *)(v15 + 640) = v43;
              if ( (*(_DWORD *)(v10 + 568) & 0x80000001) == 0x80000001 )
                v46 = *(_DWORD *)(v10 + 464);
              else
                v46 = v101[9];
              *(_DWORD *)(v15 + 344) = v46;
              *(_DWORD *)(v15 + 348) = HIDWORD(v101[9]);
              FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v15);
              if ( !FilterAdapterRegistry )
              {
                if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                  McTemplateK0jcqjzzz(
                    *(_QWORD *)(v15 + 32) + 4032LL,
                    *(_QWORD *)(v15 + 40),
                    (const GUID *)(v15 + 816),
                    v15 + 816,
                    *(_BYTE *)(v15 + 64),
                    249,
                    *(_QWORD *)(v15 + 32) + 4032LL,
                    *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3880LL) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
                if ( Microsoft_Windows_Networking_CorrelationEnabled )
                  EtwEx_tidActivityInfoTransfer(
                    v48,
                    v47,
                    (const struct _GUID *)(v15 + 816),
                    (const struct _GUID *)(v10 + 4032),
                    Arg1[0],
                    Arg2,
                    0x200000u);
                HIDWORD(v101[0]) = *(_DWORD *)(v15 + 832);
                v83 = 1;
                v101[1] = *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1312LL);
                FilterAdapterRegistry = ndisFInvokeAttach(v15, (__int64)v101);
                if ( (unsigned __int8)byte_1C0099610 >= 4u )
                {
                  LODWORD(v80) = FilterAdapterRegistry;
                  v79[0] = v12->DefaultFilterCharacteristics.MinorNdisVersion;
                  LODWORD(Arg2) = v12->DefaultFilterCharacteristics.MajorNdisVersion;
                  WPP_SF_qqZddZD(
                    v12->DefaultFilterCharacteristics.MinorNdisVersion,
                    v12->DefaultFilterCharacteristics.MajorNdisVersion,
                    v10,
                    v15,
                    &v12->DefaultFilterCharacteristics.FriendlyName,
                    Arg2,
                    *(_QWORD *)v79,
                    *(_QWORD *)(v10 + 3880),
                    v80);
                }
                if ( !FilterAdapterRegistry )
                {
                  v49 = LODWORD(v101[9]);
                  if ( *(_DWORD *)(v15 + 344) != LODWORD(v101[9]) && (*(_DWORD *)(v10 + 568) & 0x80000001) != 0x80000001 )
                  {
                    if ( (unsigned __int8)byte_1C0099614 >= 4u )
                    {
                      LODWORD(Arg2) = v101[9];
                      Arg1[0] = *(_DWORD *)(v15 + 344);
                      WPP_SF_qqDD(
                        0x1Au,
                        &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids,
                        v10,
                        v15,
                        *(_QWORD *)Arg1,
                        Arg2);
                      v49 = LODWORD(v101[9]);
                    }
                    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
                      McTemplateK0jqxjqxqq(
                        *(_QWORD *)(v15 + 840),
                        v49,
                        (const GUID *)(v10 + 4032),
                        v10 + 4032,
                        *(_DWORD *)(v10 + 4080),
                        *(_QWORD *)(v10 + 4048),
                        v15 + 816,
                        *(_DWORD *)(v15 + 832),
                        *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1312LL),
                        *(_DWORD *)(v15 + 344),
                        v49);
                    v82 = 1;
                  }
                  v50 = *(_QWORD *)(v15 + 120);
                  if ( v50 )
                  {
                    v73 = *(_QWORD *)(v15 + 112);
                    if ( v73 )
                      v74 = *(_DWORD *)(v73 + 832);
                    else
                      v74 = *(_DWORD *)(v10 + 4080);
                    NdisIfDeleteIfStackEntry(*(_DWORD *)(v50 + 832), v74);
                  }
                  v51 = *(_QWORD *)(v15 + 112);
                  if ( v51 )
                    v52 = *(_DWORD *)(v51 + 832);
                  else
                    v52 = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4080LL);
                  NdisIfAddIfStackEntry(*(_DWORD *)(v15 + 832), v52);
                  v53 = *(_QWORD *)(v15 + 120);
                  if ( v53 )
                    NdisIfAddIfStackEntry(*(_DWORD *)(v53 + 832), *(_DWORD *)(v15 + 832));
                  v54 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
                  ndisIfUpdateFilterIfStack(*(_QWORD *)(v15 + 32));
                  KeReleaseSpinLock(&ndisIfListLock, v54);
                  v55 = *(struct _NDIS_FILTER_BLOCK **)(v15 + 112);
                  v85 = v55;
                  if ( v55 )
                  {
                    v56 = KeAcquireSpinLockRaiseToDpc(&v55->Lock);
                    v57 = v85;
                    v55->LockThread = KeGetCurrentThread();
                    v57->LockDbg = 3867746;
                    *(_DWORD *)(v15 + 352) = v57->MediaConnectStateIndicateUp;
                    *(_DWORD *)(v15 + 356) = v57->MediaDuplexStateIndicateUp;
                    *(_QWORD *)(v15 + 360) = v57->XmitLinkSpeedIndicateUp;
                    *(_QWORD *)(v15 + 368) = v57->RcvLinkSpeedIndicateUp;
                    *(_DWORD *)(v15 + 376) = v57->PauseFunctionsIndicateUp;
                    *(_DWORD *)(v15 + 380) = v57->AutoNegotiationFlagsIndicateUp;
                    ndisOpenRef((PKSPIN_LOCK)(v15 + 320));
                    v55->LockThread = 0LL;
                    v57->LockDbg = 0;
                    KeReleaseSpinLock(&v55->Lock, v56);
                    v10 = (__int64)v86;
                    v12 = v97;
                  }
                  else
                  {
                    v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
                    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
                    v69 = *(_DWORD *)(v10 + 344);
                    *(_DWORD *)(v10 + 1856) = 3867761;
                    *(_DWORD *)(v15 + 352) = v69;
                    *(_DWORD *)(v15 + 356) = *(_DWORD *)(v10 + 348);
                    *(_QWORD *)(v15 + 360) = *(_QWORD *)(v10 + 2768);
                    *(_QWORD *)(v15 + 368) = *(_QWORD *)(v10 + 2776);
                    *(_DWORD *)(v15 + 376) = *(_DWORD *)(v10 + 812);
                    *(_DWORD *)(v15 + 380) = *(_DWORD *)(v10 + 816);
                    ndisOpenRef((PKSPIN_LOCK)(v15 + 320));
                    *(_QWORD *)(v10 + 520) = 0LL;
                    *(_DWORD *)(v10 + 1856) = 0;
                    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v68);
                  }
                  *(_DWORD *)(*(_QWORD *)(v15 + 840) + 1220LL) = *(_DWORD *)(v15 + 352);
                  *(_DWORD *)(*(_QWORD *)(v15 + 840) + 1224LL) = *(_DWORD *)(v15 + 356);
                  *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1208LL) = *(_QWORD *)(v15 + 368);
                  *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1200LL) = *(_QWORD *)(v15 + 360);
                  ndisIndicateInitialStateToFilter(v15);
                  v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 144));
                  *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
                  *(_BYTE *)(v15 + 56) = 0;
                  v59 = *(_DWORD *)(v15 + 56) | 4;
                  *(_DWORD *)(v15 + 160) = 3867785;
                  *(_DWORD *)(v15 + 56) = v59;
                  if ( v82 )
                  {
                    *(_DWORD *)(v15 + 56) = v59 | 0x8000;
                    ++*(_BYTE *)(v10 + 1997);
                    v75 = *(_QWORD *)(v15 + 840);
                    *(_QWORD *)(v15 + 344) = v101[9];
                    *(_DWORD *)(v75 + 564) = *(_DWORD *)(v15 + 344);
                    *(_DWORD *)(*(_QWORD *)(v15 + 840) + 568LL) = *(_DWORD *)(v15 + 348);
                  }
                  *(_QWORD *)(v15 + 152) = 0LL;
                  *(_DWORD *)(v15 + 160) = 0;
                  KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v58);
                  if ( v82 )
                  {
                    v76 = *(_DWORD *)(v15 + 344);
                    *(_DWORD *)(v10 + 464) = v76;
                    *(_DWORD *)(v10 + 1832) = *(_DWORD *)(v15 + 348);
                    if ( !v76 )
                    {
                      if ( EthInitializeFilter(
                             *(_DWORD *)(v10 + 3060),
                             *(_QWORD *)(v10 + 4064) + 1126LL,
                             *(_QWORD *)(v10 + 400)) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v10 + 400) + 296LL) = v10;
                      }
                    }
                  }
                  *(_BYTE *)(v15 + 64) = 2;
                  if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                    McTemplateK0jcqjzzz(
                      *(_QWORD *)(v15 + 32) + 4032LL,
                      *(_QWORD *)(v15 + 40),
                      (const GUID *)(v15 + 816),
                      v15 + 816,
                      2,
                      199,
                      *(_QWORD *)(v15 + 32) + 4032LL,
                      *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3880LL) + 8LL),
                      *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
                      *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
                  ndisReferenceMiniport(v10);
                  if ( *(_BYTE *)(v10 + 32) < 6u && !*(_BYTE *)(v10 + 1994) )
                    *(_BYTE *)(v10 + 1994) = 1;
                  ndisSetupWmiNode(
                    v10,
                    *(const void ***)(v15 + 48),
                    *(unsigned __int16 *)(*(_QWORD *)(v10 + 3792) + 8LL)
                  + 4
                  + v12->DefaultFilterCharacteristics.UniqueName.Length,
                    (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
                    &WnodeEventItem);
                  v60 = WnodeEventItem;
                  if ( WnodeEventItem )
                  {
                    v61 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                    memmove(
                      v61,
                      v12->DefaultFilterCharacteristics.UniqueName.Buffer,
                      v12->DefaultFilterCharacteristics.UniqueName.Length);
                    memmove(
                      &v61[v12->DefaultFilterCharacteristics.UniqueName.Length + 2],
                      *(const void **)(*(_QWORD *)(v10 + 3792) + 16LL),
                      *(unsigned __int16 *)(*(_QWORD *)(v10 + 3792) + 8LL));
                    v63 = IoWMIWriteEvent(v60);
                    if ( v63 < 0 )
                    {
                      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                        WPP_SF_(0x1Bu, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids);
                      if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
                        McTemplateK0qqq(v62, &FilterArrivalIndicationFailed, (const GUID *)(v15 + 816), v63, 0x501u, 0);
                      ExFreePoolWithTag(v60, 0);
                    }
                  }
                  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
                  v11 = a4;
                  if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause)
                    && (unsigned __int8)byte_1C0099623 >= 4u )
                  {
                    ndisGetBindLinkNameForTracing(a4, &v102);
                    if ( (unsigned __int8)byte_1C0099623 >= 4u )
                      WPP_SF_Zq(
                        0x1Cu,
                        &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids,
                        v102.Buffer,
                        *(_QWORD *)&v102.Length);
                  }
                  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
                  if ( *(_BYTE *)(v10 + 32) < 6u && !*(_BYTE *)(v10 + 1994) )
                    *(_BYTE *)(v10 + 1994) = 1;
                  goto LABEL_81;
                }
                a4->BindState.AllowBindDespiteMandatory = v101[20] & 1;
                v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 144));
                *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
                *(_BYTE *)(v15 + 56) = 0;
                v72 = *(_DWORD *)(v15 + 56);
                *(_DWORD *)(v15 + 160) = 3867664;
                if ( (v72 & 0x100) != 0 )
                {
                  v72 &= ~0x100u;
                  *(_DWORD *)(v15 + 56) = v72;
                }
                *(_QWORD *)(v15 + 152) = 0LL;
                *(_DWORD *)(v15 + 56) = v72 | 8;
                *(_DWORD *)(v15 + 160) = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v71);
                *(_BYTE *)(v15 + 64) = 0;
                if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                  McTemplateK0jcqjzzz(
                    *(_QWORD *)(v15 + 48),
                    *(_QWORD *)(v15 + 40),
                    (const GUID *)(v15 + 816),
                    v15 + 816,
                    0,
                    28,
                    *(_QWORD *)(v15 + 32) + 4032LL,
                    *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3880LL) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
              }
LABEL_127:
              v11 = a4;
              goto LABEL_115;
            }
            v36 = v67 + 8;
          }
          v101[11] = v36;
          goto LABEL_41;
        }
LABEL_32:
        WORD1(v101[0]) = 224;
        v32 = 4;
        goto LABEL_33;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v11 = a4;
    goto LABEL_115;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_115:
  if ( *(_QWORD *)(v15 + 904) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
    Ndis::BindState::RemoveBindContext(&v11->BindState, (void *)v15);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
    *(_QWORD *)(v15 + 904) = 0LL;
  }
  ndisFilterAttachCleanUp((PVOID)v15, v10 & -(__int64)(v81 != 0), v83);
LABEL_82:
  ndisHandleFilterHandlersChange(v10);
  if ( v101[27] )
  {
    ExFreePoolWithTag((PVOID)v101[27], 0);
    v101[27] = 0LL;
  }
  if ( FilterAdapterRegistry )
  {
    if ( !v11->BindState.AllowBindDespiteMandatory )
    {
      FilterBindFlags = v11->BindDriver._p->_t.FilterBindFlags;
      if ( (FilterBindFlags & 1) == 0 )
        ndisNotifyBindFailureOnUnboundProtocols(v10);
    }
  }
  ndisDereferenceMiniport(v10, 0x27u, FilterBindFlags, v65);
  ndisDereferenceFilterDriver(v12);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    Arg1[0] = FilterAdapterRegistry;
    WPP_SF_qqd(0x1Eu, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids, v12, v10, *(_QWORD *)Arg1);
  }
  return FilterAdapterRegistry;
}
