/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C2F68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisFilterAttachCleanUp @ 0x1C0001114 (ndisFilterAttachCleanUp.c)
 *     ndisIfCreateFilterInterface @ 0x1C00043A0 (ndisIfCreateFilterInterface.c)
 *     ndisDereferenceFilterDriver @ 0x1C00044D4 (ndisDereferenceFilterDriver.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C000469C (ndisIfUpdateFilterIfStack.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0005230 (ndisIndicateInitialStateToFilter.c)
 *     ndisSetupWmiNode @ 0x1C0005800 (ndisSetupWmiNode.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisReferenceFilterDriver @ 0x1C000F228 (ndisReferenceFilterDriver.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00100B0 (NdisNblTrackerRegisterComponent.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0010BC0 (ndisHandleFilterHandlersChange.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0012CF4 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     NdisIfAddIfStackEntry @ 0x1C001B790 (NdisIfAddIfStackEntry.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001C6C0 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ndisQueueFilterOnDriver @ 0x1C001E008 (ndisQueueFilterOnDriver.c)
 *     ndisFilterXStateSetFlag @ 0x1C001E0EC (ndisFilterXStateSetFlag.c)
 *     ndisCloseRef @ 0x1C001E794 (ndisCloseRef.c)
 *     ndisOpenRef @ 0x1C001EB90 (ndisOpenRef.c)
 *     ndisIovGetNicSwitchList @ 0x1C0023A88 (ndisIovGetNicSwitchList.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0040380 (NdisIfDeleteIfStackEntry.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004BDF0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C004ED5C (WPP_SF_qqZ.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     McTemplateK0jcqjzzz @ 0x1C007566C (McTemplateK0jcqjzzz.c)
 *     McTemplateK0jqxjqxqq @ 0x1C00757C0 (McTemplateK0jqxjqxqq.c)
 *     WPP_SF_qqZddZD @ 0x1C0075A44 (WPP_SF_qqZddZD.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00AB358 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisMDoMiniportOp @ 0x1C00AD748 (ndisMDoMiniportOp.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00B125C (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00BA61C (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00BABA0 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BBDC8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisInitializeRef @ 0x1C00BE130 (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00BE48C (ndisInitializeZeroBasedRef.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00C4630 (ndisCreateFilterAdapterRegistry.c)
 *     ndisFInvokeAttach @ 0x1C00C5AE4 (ndisFInvokeAttach.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C8F80 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00E5120 (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00EA96C (EthInitializeFilter.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  struct _NDIS_REFCOUNT_BLOCK *v22; // rcx
  struct NDISWATCHDOG__ *v23; // rbx
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
  struct _MCGEN_TRACE_CONTEXT *v63; // rcx
  signed int v64; // ebx
  _BYTE *v66; // rax
  KIRQL v67; // bl
  int v68; // ecx
  __int16 v69; // ax
  KIRQL v70; // al
  int v71; // edx
  __int64 v72; // rax
  NET_IFINDEX v73; // edx
  __int64 v74; // rcx
  int v75; // ecx
  unsigned int Arg1[2]; // [rsp+20h] [rbp-130h]
  const struct _GUID *Arg2; // [rsp+28h] [rbp-128h]
  unsigned int v78[2]; // [rsp+30h] [rbp-120h]
  __int64 v79; // [rsp+40h] [rbp-110h]
  char v80; // [rsp+D1h] [rbp-7Fh]
  char v81; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v83; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v84; // [rsp+E8h] [rbp-68h]
  int v85; // [rsp+F0h] [rbp-60h]
  int v86; // [rsp+F4h] [rbp-5Ch]
  int v87; // [rsp+F8h] [rbp-58h]
  int v88; // [rsp+FCh] [rbp-54h]
  int v89; // [rsp+100h] [rbp-50h]
  int v90; // [rsp+104h] [rbp-4Ch]
  int v91; // [rsp+108h] [rbp-48h]
  int Data3; // [rsp+10Ch] [rbp-44h]
  int Data2; // [rsp+110h] [rbp-40h]
  struct _NDIS_FILTER_BLOCK *v94; // [rsp+118h] [rbp-38h] BYREF
  _NDIS_FILTER_DRIVER_BLOCK *v95; // [rsp+120h] [rbp-30h]
  PVOID WnodeEventItem; // [rsp+130h] [rbp-20h] BYREF
  _BYTE v97[8]; // [rsp+138h] [rbp-18h] BYREF
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *v98; // [rsp+140h] [rbp-10h]
  _QWORD v99[28]; // [rsp+150h] [rbp+0h] BYREF
  struct _UNICODE_STRING v100; // [rsp+230h] [rbp+E0h] BYREF
  wchar_t Dest[88]; // [rsp+2D0h] [rbp+180h] BYREF

  v85 = a3;
  v95 = a2;
  v84 = a1;
  v83 = 0LL;
  v94 = 0LL;
  v80 = 0;
  memset(v99, 0, sizeof(v99));
  v81 = 0;
  if ( !ndisReferenceFilterDriver((__int64)a2, 0) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1) )
  {
    ndisDereferenceFilterDriver(a2);
    return 3221291010LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqZ(
      0x18u,
      &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids,
      a2,
      a1,
      &a2->DefaultFilterCharacteristics.FriendlyName);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v8 = a1->InterfaceGuid.Data4[7];
  v9 = a1->InterfaceGuid.Data4[6];
  WnodeEventItem = &a1->InterfaceGuid;
  v86 = v8;
  v87 = v9;
  v98 = p;
  v88 = v84->InterfaceGuid.Data4[3];
  v89 = v84->InterfaceGuid.Data4[2];
  v90 = v84->InterfaceGuid.Data4[1];
  v91 = v84->InterfaceGuid.Data4[0];
  Data3 = v84->InterfaceGuid.Data3;
  Data2 = v84->InterfaceGuid.Data2;
  LOBYTE(Arg1[0]) = Data2;
  LODWORD(Arg2) = Data3;
  v10 = (__int64)v84;
  v11 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v12 = v95;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_107;
  }
  ndisFindAdjacentFilters(v84, a4, &v94, &v83);
  v12 = v95;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v95->DefaultFilterCharacteristics.ServiceName, v10);
  if ( FilterAdapterRegistry )
  {
LABEL_107:
    v15 = 0LL;
    goto LABEL_83;
  }
  if ( *(_BYTE *)(v10 + 32) < 6u && (*(_BYTE *)(v10 + 88) & 1) == 0 )
    ndisMDoMiniportOp((void *)v10, 1, 65812, (__int64)v97, 4, 1u, 1);
  if ( !ndisReferenceFilterDriver((__int64)v12, 3u) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_107;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x398uLL, 0x6266444Eu);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v12);
    goto LABEL_83;
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
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_113;
  }
  v19 = v12->DefaultFilterCharacteristics.FriendlyName.Length + 14 + **(_WORD **)(v10 + 3880);
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v19 + 16LL, 0x7473444Eu);
  *(_QWORD *)(v15 + 48) = v20;
  if ( !v20 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_119;
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
  v22 = *(struct _NDIS_REFCOUNT_BLOCK **)(v15 + 192);
  v23 = Watchdog;
  if ( v22 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
    ndisFreeWatchdog(v22);
  *(_QWORD *)(v15 + 192) = v23;
  KeInitializeSpinLock((PKSPIN_LOCK)(v15 + 144));
  *(_BYTE *)(v15 + 56) = 0;
  v24 = *(_DWORD *)(v15 + 56);
  if ( (v24 & 0x100) != 0 )
    *(_DWORD *)(v15 + 56) = v24 & 0xFFFFFEFF;
  *(_DWORD *)(v15 + 56) |= 8u;
  *(_BYTE *)(v15 + 64) = 0;
  ndisInitializeRef(v15 + 72, 2u);
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
    goto LABEL_113;
  v25 = v94;
  *(_QWORD *)(v15 + 216) = ndisStackExpansionFallbackWorker;
  v26 = v83;
  *(_QWORD *)(v15 + 224) = v15;
  *(_QWORD *)(v15 + 200) = 0LL;
  *(_QWORD *)(v15 + 112) = v26;
  *(_QWORD *)(v15 + 120) = v25;
  if ( v26 || v25 || !*(_QWORD *)(v10 + 2056) )
  {
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
    v28 = v94;
    *(_DWORD *)(v10 + 1856) = 3867347;
    if ( v28 )
      v28->LowerFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      *(_QWORD *)(v10 + 2056) = v15;
    v29 = v83;
    if ( v83 )
      v83->HigherFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      *(_QWORD *)(v10 + 2048) = v15;
    *(_QWORD *)(v15 + 32) = v10;
    *(_QWORD *)(v10 + 520) = 0LL;
    *(_DWORD *)(v10 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v27);
    v80 = 1;
    v30 = v10;
    if ( *(_QWORD *)(v10 + 16) )
      v30 = *(_QWORD *)(v10 + 16);
    v31 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v15 + 104) = ndisGlobalFilterList;
    ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v15;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v31);
    if ( !ndisQueueFilterOnDriver(v15, (__int64)v12) )
    {
      v11 = a4;
      FilterAdapterRegistry = -1073676286;
      v49 = 0;
      goto LABEL_114;
    }
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
      memset(v99, 0, sizeof(v99));
      v32 = *(_QWORD *)(v15 + 16);
      if ( *(_BYTE *)(v32 + 100) <= 6u )
      {
        v33 = *(_BYTE *)(v32 + 101);
        if ( v33 )
        {
          if ( v33 < 0x14u )
          {
            v34 = 2;
            v69 = 176;
          }
          else
          {
            if ( v33 >= 0x1Eu )
              goto LABEL_34;
            v34 = 3;
            v69 = 200;
          }
        }
        else
        {
          v34 = 1;
          v69 = 164;
        }
        WORD1(v99[0]) = v69;
LABEL_35:
        BYTE1(v99[0]) = v34;
        LOBYTE(v99[0]) = -103;
        LODWORD(v99[3]) = *(_DWORD *)(v30 + 4080);
        v99[17] = *(_QWORD *)(v30 + 4048);
        v99[5] = v30 + 3832;
        v99[4] = *(_QWORD *)(v30 + 3880);
        v35 = *(_QWORD *)(v15 + 112);
        if ( v35 )
        {
          LODWORD(v99[18]) = *(_DWORD *)(v35 + 832);
          v99[19] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 840LL) + 1312LL);
        }
        else
        {
          LODWORD(v99[18]) = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4080LL);
          v99[19] = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 4048LL);
        }
        v99[2] = *(_QWORD *)(v15 + 40);
        v99[10] = *(_QWORD *)(v10 + 768);
        if ( (*(_DWORD *)(v10 + 568) & 0x80000001) == 0x80000001 )
        {
          LODWORD(v99[9]) = 3;
        }
        else
        {
          if ( v29 )
          {
            LODWORD(v99[9]) = v29->MediaType;
            PhysicalMediaType = v29->PhysicalMediaType;
            goto LABEL_40;
          }
          LODWORD(v99[9]) = *(_DWORD *)(v10 + 1836);
        }
        PhysicalMediaType = *(_DWORD *)(v10 + 3800);
LABEL_40:
        HIDWORD(v99[9]) = PhysicalMediaType;
        v37 = *(_QWORD **)(v15 + 112);
        if ( v37 )
        {
          v99[6] = *(_QWORD *)((char *)v37 + 388);
          v99[7] = v37[50];
          v99[8] = v37[51];
          v38 = (_BYTE *)v37[101];
        }
        else
        {
          v99[6] = *(_QWORD *)(v10 + 344);
          v99[7] = *(_QWORD *)(v10 + 2768);
          v99[8] = *(_QWORD *)(v10 + 2776);
          v66 = *(_BYTE **)(v10 + 4120);
          if ( !v66 || !*v66 )
          {
            v99[11] = 0LL;
LABEL_43:
            v39 = v99[21];
            if ( *(_QWORD *)(v10 + 4296) )
              v39 = *(_QWORD *)(v10 + 4296);
            v40 = *(_QWORD *)(v10 + 3568);
            v99[21] = v39;
            v41 = v99[22];
            if ( v40 )
              v41 = v40;
            v42 = *(_QWORD *)(v10 + 3592);
            v99[22] = v41;
            v43 = v99[24];
            if ( v42 )
              v43 = v42;
            v99[24] = v43;
            if ( (unsigned __int8)v34 >= 4u )
            {
              if ( *(_QWORD *)(v10 + 4640) )
              {
                v99[26] = *(_QWORD *)(v10 + 4640);
                if ( (unsigned int)ndisIovGetNicSwitchList(v10, &v99[27]) )
                {
                  FilterAdapterRegistry = -1073741823;
                  goto LABEL_131;
                }
              }
              LOBYTE(v99[25]) = *(_BYTE *)(*(_QWORD *)(v10 + 4064) + 556LL);
            }
            v44 = *(_QWORD *)(v10 + 4064);
            v99[23] = *(_QWORD *)(v10 + 3856);
            LOWORD(v99[12]) = *(_WORD *)(v44 + 1124);
            memmove((char *)&v99[12] + 2, (const void *)(v44 + 1126), LOWORD(v99[12]));
            *(_QWORD *)(v15 + 352) = v99[6];
            *(_QWORD *)(v15 + 360) = v99[7];
            *(_QWORD *)(v15 + 368) = v99[8];
            if ( LODWORD(v99[6]) == 1 )
            {
              *(_QWORD *)(v15 + 632) = ndisFilterSendNetBufferLists;
              *(_QWORD *)(v15 + 640) = ndisFilterIndicateReceiveNetBufferLists;
              v45 = ndisFilterCancelSendNetBufferLists;
            }
            else
            {
              ndisFilterXStateSetFlag(v15);
              *(_QWORD *)(v15 + 632) = ndisFakeFilterSendHandler;
              *(_QWORD *)(v15 + 640) = ndisFakeFilterReceiveHandler;
              v45 = ndisFakeMiniportCancelSendPackets;
            }
            *(_QWORD *)(v15 + 648) = v45;
            if ( (*(_DWORD *)(v10 + 568) & 0x80000001) == 0x80000001 )
              v46 = *(_DWORD *)(v10 + 464);
            else
              v46 = v99[9];
            *(_DWORD *)(v15 + 344) = v46;
            *(_DWORD *)(v15 + 348) = HIDWORD(v99[9]);
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
              HIDWORD(v99[0]) = *(_DWORD *)(v15 + 832);
              v49 = 1;
              v99[1] = *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1312LL);
              FilterAdapterRegistry = ndisFInvokeAttach(v15, (__int64)v99);
              if ( (unsigned __int8)byte_1C0098750 >= 4u )
              {
                LODWORD(v79) = FilterAdapterRegistry;
                v78[0] = v12->DefaultFilterCharacteristics.MinorNdisVersion;
                LODWORD(Arg2) = v12->DefaultFilterCharacteristics.MajorNdisVersion;
                WPP_SF_qqZddZD(
                  v12->DefaultFilterCharacteristics.MinorNdisVersion,
                  v12->DefaultFilterCharacteristics.MajorNdisVersion,
                  v10,
                  v15,
                  &v12->DefaultFilterCharacteristics.FriendlyName,
                  Arg2,
                  *(_QWORD *)v78,
                  *(_QWORD *)(v10 + 3880),
                  v79);
              }
              if ( FilterAdapterRegistry )
              {
                v11 = a4;
                a4->BindState.AllowBindDespiteMandatory = v99[20] & 1;
                v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 144));
                *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
                *(_BYTE *)(v15 + 56) = 0;
                v71 = *(_DWORD *)(v15 + 56);
                *(_DWORD *)(v15 + 160) = 3867664;
                if ( (v71 & 0x100) != 0 )
                  *(_DWORD *)(v15 + 56) = v71 & 0xFFFFFEFF;
                *(_DWORD *)(v15 + 56) |= 8u;
                *(_QWORD *)(v15 + 152) = 0LL;
                *(_DWORD *)(v15 + 160) = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v70);
                *(_BYTE *)(v15 + 64) = 0;
                if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                  McTemplateK0jcqjzzz(
                    *(_QWORD *)(v15 + 32) + 4032LL,
                    *(_QWORD *)(v15 + 40),
                    (const GUID *)(v15 + 816),
                    v15 + 816,
                    0,
                    28,
                    *(_QWORD *)(v15 + 32) + 4032LL,
                    *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3880LL) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
                    *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
                goto LABEL_114;
              }
              v50 = v99[9];
              if ( *(_DWORD *)(v15 + 344) != LODWORD(v99[9]) && (*(_DWORD *)(v10 + 568) & 0x80000001) != 0x80000001 )
              {
                if ( (unsigned __int8)byte_1C0098754 >= 4u )
                {
                  LODWORD(Arg2) = v99[9];
                  Arg1[0] = *(_DWORD *)(v15 + 344);
                  WPP_SF_qqDD(0x1Au, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, v10, v15, *(_QWORD *)Arg1, Arg2);
                  v50 = v99[9];
                }
                if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
                  McTemplateK0jqxjqxqq(
                    *(_QWORD *)(v15 + 840),
                    v15 + 816,
                    (const GUID *)(v10 + 4032),
                    v10 + 4032,
                    *(_DWORD *)(v10 + 4080),
                    *(_QWORD *)(v10 + 4048),
                    v15 + 816,
                    *(_DWORD *)(v15 + 832),
                    *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1312LL),
                    *(_DWORD *)(v15 + 344),
                    v50);
                v81 = 1;
              }
              v51 = *(_QWORD *)(v15 + 120);
              if ( v51 )
              {
                v72 = *(_QWORD *)(v15 + 112);
                if ( v72 )
                  v73 = *(_DWORD *)(v72 + 832);
                else
                  v73 = *(_DWORD *)(v10 + 4080);
                NdisIfDeleteIfStackEntry(*(_DWORD *)(v51 + 832), v73);
              }
              v52 = *(_QWORD *)(v15 + 112);
              if ( v52 )
                v53 = *(_DWORD *)(v52 + 832);
              else
                v53 = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4080LL);
              NdisIfAddIfStackEntry(*(_DWORD *)(v15 + 832), v53);
              v54 = *(_QWORD *)(v15 + 120);
              if ( v54 )
                NdisIfAddIfStackEntry(*(_DWORD *)(v54 + 832), *(_DWORD *)(v15 + 832));
              v55 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              ndisIfUpdateFilterIfStack(*(_QWORD *)(v15 + 32));
              KeReleaseSpinLock(&ndisIfListLock, v55);
              v56 = *(struct _NDIS_FILTER_BLOCK **)(v15 + 112);
              v83 = v56;
              if ( v56 )
              {
                v57 = KeAcquireSpinLockRaiseToDpc(&v56->Lock);
                v58 = v83;
                v56->LockThread = KeGetCurrentThread();
                v58->LockDbg = 3867746;
                *(_DWORD *)(v15 + 352) = v58->MediaConnectStateIndicateUp;
                *(_DWORD *)(v15 + 356) = v58->MediaDuplexStateIndicateUp;
                *(_QWORD *)(v15 + 360) = v58->XmitLinkSpeedIndicateUp;
                *(_QWORD *)(v15 + 368) = v58->RcvLinkSpeedIndicateUp;
                *(_DWORD *)(v15 + 376) = v58->PauseFunctionsIndicateUp;
                *(_DWORD *)(v15 + 380) = v58->AutoNegotiationFlagsIndicateUp;
                ndisOpenRef((PKSPIN_LOCK)(v15 + 320));
                v56->LockThread = 0LL;
                v58->LockDbg = 0;
                KeReleaseSpinLock(&v56->Lock, v57);
                v10 = (__int64)v84;
                v12 = v95;
              }
              else
              {
                v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
                *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
                v68 = *(_DWORD *)(v10 + 344);
                *(_DWORD *)(v10 + 1856) = 3867761;
                *(_DWORD *)(v15 + 352) = v68;
                *(_DWORD *)(v15 + 356) = *(_DWORD *)(v10 + 348);
                *(_QWORD *)(v15 + 360) = *(_QWORD *)(v10 + 2768);
                *(_QWORD *)(v15 + 368) = *(_QWORD *)(v10 + 2776);
                *(_DWORD *)(v15 + 376) = *(_DWORD *)(v10 + 812);
                *(_DWORD *)(v15 + 380) = *(_DWORD *)(v10 + 816);
                ndisOpenRef((PKSPIN_LOCK)(v15 + 320));
                *(_QWORD *)(v10 + 520) = 0LL;
                *(_DWORD *)(v10 + 1856) = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v67);
              }
              *(_DWORD *)(*(_QWORD *)(v15 + 840) + 1220LL) = *(_DWORD *)(v15 + 352);
              *(_DWORD *)(*(_QWORD *)(v15 + 840) + 1224LL) = *(_DWORD *)(v15 + 356);
              *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1208LL) = *(_QWORD *)(v15 + 368);
              *(_QWORD *)(*(_QWORD *)(v15 + 840) + 1200LL) = *(_QWORD *)(v15 + 360);
              ndisIndicateInitialStateToFilter(v15);
              v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 144));
              CurrentThread = KeGetCurrentThread();
              *(_BYTE *)(v15 + 56) = 0;
              *(_DWORD *)(v15 + 56) |= 4u;
              *(_QWORD *)(v15 + 152) = CurrentThread;
              *(_DWORD *)(v15 + 160) = 3867785;
              if ( v81 )
              {
                *(_DWORD *)(v15 + 56) |= 0x8000u;
                ++*(_BYTE *)(v10 + 1997);
                v74 = *(_QWORD *)(v15 + 840);
                *(_QWORD *)(v15 + 344) = v99[9];
                *(_DWORD *)(v74 + 564) = *(_DWORD *)(v15 + 344);
                *(_DWORD *)(*(_QWORD *)(v15 + 840) + 568LL) = *(_DWORD *)(v15 + 348);
              }
              *(_QWORD *)(v15 + 152) = 0LL;
              *(_DWORD *)(v15 + 160) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v59);
              if ( v81 )
              {
                v75 = *(_DWORD *)(v15 + 344);
                *(_DWORD *)(v10 + 464) = v75;
                *(_DWORD *)(v10 + 1832) = *(_DWORD *)(v15 + 348);
                if ( !v75 )
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
              v61 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v62 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                memmove(
                  v62,
                  v12->DefaultFilterCharacteristics.UniqueName.Buffer,
                  v12->DefaultFilterCharacteristics.UniqueName.Length);
                memmove(
                  &v62[v12->DefaultFilterCharacteristics.UniqueName.Length + 2],
                  *(const void **)(*(_QWORD *)(v10 + 3792) + 16LL),
                  *(unsigned __int16 *)(*(_QWORD *)(v10 + 3792) + 8LL));
                v64 = IoWMIWriteEvent(v61);
                if ( v64 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_(0x1Bu, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
                    McTemplateK0qqq(v63, &FilterArrivalIndicationFailed, (const GUID *)(v15 + 816), v64, 0x501u, 0);
                  ExFreePoolWithTag(v61, 0);
                }
              }
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
              v11 = a4;
              if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause)
                && (unsigned __int8)byte_1C0098763 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a4, &v100);
                if ( (unsigned __int8)byte_1C0098763 >= 4u )
                  WPP_SF_Zq(
                    0x1Cu,
                    &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids,
                    v100.Buffer,
                    *(_QWORD *)&v100.Length);
              }
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
              if ( *(_BYTE *)(v10 + 32) < 6u && !*(_BYTE *)(v10 + 1994) )
                *(_BYTE *)(v10 + 1994) = 1;
LABEL_83:
              if ( ndisVerifierNdisDispatch
                && v15
                && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v15 + 16) + 16LL))
                && !*(_QWORD *)(v15 + 912)
                && ((int (__fastcall *)(_DEVICE_OBJECT *, __int64, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                     v12->DriverObject->DeviceObject,
                     v15,
                     &v12->FilterDriverContext) < 0
                && (unsigned __int8)byte_1C0098754 >= 2u )
              {
                WPP_SF_q(0x1Du, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, v15);
              }
              goto LABEL_84;
            }
LABEL_131:
            v11 = a4;
            goto LABEL_113;
          }
          v38 = v66 + 8;
        }
        v99[11] = v38;
        goto LABEL_43;
      }
LABEL_34:
      WORD1(v99[0]) = 224;
      v34 = 4;
      goto LABEL_35;
    }
    v11 = a4;
LABEL_119:
    v49 = 0;
    goto LABEL_114;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_113:
  v49 = 0;
LABEL_114:
  if ( *(_QWORD *)(v15 + 904) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
    Ndis::BindState::RemoveBindContext(&v11->BindState, (void *)v15);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
    *(_QWORD *)(v15 + 904) = 0LL;
  }
  ndisFilterAttachCleanUp((PVOID)v15, v10 & -(__int64)(v80 != 0), v49);
LABEL_84:
  ndisHandleFilterHandlersChange(v10);
  if ( v99[27] )
  {
    ExFreePoolWithTag((PVOID)v99[27], 0);
    v99[27] = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v11->BindState.AllowBindDespiteMandatory
    && (v11->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v10);
  }
  ndisDereferenceMiniport(v10, 0x27u);
  ndisDereferenceFilterDriver(v12);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    Arg1[0] = FilterAdapterRegistry;
    WPP_SF_qqd(0x1Eu, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, v12, v10, *(_QWORD *)Arg1);
  }
  return FilterAdapterRegistry;
}
