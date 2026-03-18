/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00253B0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0027318 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48FC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C01486E0 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C0148928 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C01493A0 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C014AE90 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C014AEDC (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014B1C4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014E010 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C014F834 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0150230 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0151F14 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0158DB8 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C017A908 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C017B134 (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C0183248 (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ @ 0x1C0183B54 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJ_K0@Z @ 0x1C018486C (-VmBusSendSetIoSpaceRegion@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJ_K0@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C019CBF0 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019D9A8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C019E420 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A12A4 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C01EE780 (DpiGetAdapterInfo.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, struct _DEVICE_OBJECT *a2, struct _DXGK_ADAPTER_CAPS *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  struct _ERESOURCE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rax
  DXGGLOBAL *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _ERESOURCE *v23; // rax
  NTSTATUS v24; // eax
  int AdapterInfo; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  DXGGLOBAL *Global; // rax
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  int VmBusChannel; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  struct DXGGLOBAL *v46; // rax
  int MmioSpaceInfo; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int InternalAdapterInfo; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // r15d
  unsigned __int8 v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // r8
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // r8
  int v71; // ecx
  bool v72; // cc
  char v73; // al
  int v74; // eax
  _DWORD *v75; // rsi
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r12
  __int64 v83; // rax
  bool IsBddFallbackDriver; // cf
  SIZE_T v85; // rax
  char *v86; // rax
  __int64 v87; // rcx
  void *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  char v92; // r13
  unsigned int v93; // eax
  __int64 v94; // r9
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // edx
  int v102; // eax
  SIZE_T v103; // rax
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v107; // rsi
  __int64 v108; // rcx
  DXGADAPTER *v109; // rcx
  __int64 v110; // rax
  unsigned int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  unsigned int v114; // eax
  __int64 v115; // rcx
  char v116; // al
  int v117; // eax
  int v118; // eax
  struct _DXGK_ADAPTER_CAPS *v119; // r12
  char v120; // dl
  char v121; // dl
  char v122; // dl
  char v123; // dl
  char v124; // al
  char v125; // dl
  unsigned __int8 v126; // r8
  unsigned int v127; // eax
  char v128; // r10
  unsigned int v129; // eax
  char v130; // r9
  char v131; // r8
  __int64 v132; // rcx
  unsigned int v133; // edx
  __int64 v134; // rcx
  int v135; // ebx
  DXGGLOBAL *v136; // rax
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 *v140; // rbx
  int RenderCore; // eax
  __int64 v142; // rax
  _QWORD *v143; // r14
  int DisplayCore; // eax
  bool v145; // zf
  char v146; // dl
  char v147; // cl
  __int64 v148; // rdx
  DXGADAPTER *v149; // rcx
  int v150; // eax
  __int64 v151; // rcx
  int v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rax
  DXGGLOBAL *v157; // rax
  int v158; // eax
  __int64 v159; // rax
  int v160; // eax
  __int64 v161; // rbx
  struct DXGGLOBAL *v162; // rax
  __int64 v163; // rbx
  __int64 v164; // rcx
  DXGGLOBAL *v165; // rax
  int v166; // [rsp+20h] [rbp-E0h]
  int v167; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v168; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v169[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v170; // [rsp+48h] [rbp-B8h]
  struct _DXGKARG_QUERYADAPTERINFO v171; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v172; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v173; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v174[2]; // [rsp+90h] [rbp-70h] BYREF
  char v175; // [rsp+98h] [rbp-68h]
  _BYTE v176[16]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v177; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v178; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v179; // [rsp+150h] [rbp+50h] BYREF
  struct _DXGK_ADAPTER_CAPS *v180; // [rsp+160h] [rbp+60h]
  unsigned int v181; // [rsp+168h] [rbp+68h] BYREF

  v180 = a3;
  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 5895LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 44) )
    return 3221225485LL;
  v8 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 18) = v8;
  if ( !v8 )
    goto LABEL_6;
  v13 = ExInitializeResourceLite(v8);
  v17 = v13;
  if ( v13 < 0 )
    goto LABEL_9;
  v19 = (DXGGLOBAL *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 24) = a2;
  v20 = DXGGLOBAL::AcquireAdapterOrdinal(v19);
  *((_DWORD *)this + 50) = v20;
  if ( v20 == -1 )
    return 3221225495LL;
  LODWORD(v17) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4140));
  if ( (int)v17 < 0 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v22 + 24) = 5947LL;
    WdLogEvent5_WdLowResource(v22);
    return (unsigned int)v17;
  }
  v23 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 29) = v23;
  if ( !v23 )
  {
LABEL_6:
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225495LL;
  }
  v24 = ExInitializeResourceLite(v23);
  v17 = v24;
  if ( v24 < 0 )
  {
LABEL_9:
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v17;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *((_QWORD *)this + 5) = -1LL;
  AdapterInfo = DpiGetAdapterInfo(a2, (char *)this + 1240, (char *)this + 240, (char *)this + 1672);
  v17 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = this;
    *(_QWORD *)(v29 + 32) = v17;
    WdLogEvent5_WdWarning(v29);
    memset((char *)this + 240, 0, 0x3E8uLL);
    memset((char *)this + 1240, 0, 0xF0uLL);
    return (unsigned int)v17;
  }
  if ( (*((_DWORD *)this + 75) & 0x200) != 0 )
    *((_BYTE *)DXGGLOBAL::GetGlobal(v27) + 1696) = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005BF44,
    1,
    v166);
  v34 = *((_DWORD *)this + 75);
  if ( (v34 & 0x4000) != 0 )
  {
    *((_BYTE *)this + 185) = 1;
    Global = DXGGLOBAL::GetGlobal(v31);
    v36 = DXGGLOBAL::EnsureVmBusInterface(Global);
    v17 = v36;
    if ( v36 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v38[3] = this;
      v38[4] = v17;
      v38[5] = 6011LL;
LABEL_23:
      WdLogEvent5_WdError(v38);
      return (unsigned int)v17;
    }
    VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 510, this);
    v41 = VmBusChannel;
    if ( VmBusChannel < 0 )
      goto LABEL_25;
    v43 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter((DXGADAPTER *)((char *)this + 4080));
    *((_DWORD *)this + 1034) = v43;
    if ( !v43 )
    {
      v45 = WdLogNewEntry5_WdError(v44);
      *(_QWORD *)(v45 + 24) = this;
      WdLogEvent5_WdError(v45);
      return 3221225473LL;
    }
    v46 = DXGGLOBAL::GetGlobal(v44);
    MmioSpaceInfo = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(*((DXG_GUEST_GLOBAL_VMBUS **)v46 + 152), &v173, &v172);
    v41 = MmioSpaceInfo;
    if ( MmioSpaceInfo < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v48);
      *(_QWORD *)(v42 + 24) = v41;
      *(_QWORD *)(v42 + 32) = 6046LL;
      goto LABEL_26;
    }
    v49 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetIoSpaceRegion((DXGADAPTER *)((char *)this + 4080), v173, v172);
    v41 = v49;
    if ( v49 < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v50);
      *(_QWORD *)(v42 + 24) = v41;
      *(_QWORD *)(v42 + 32) = 6053LL;
      goto LABEL_26;
    }
    InternalAdapterInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                            (DXGADAPTER *)((char *)this + 4080),
                            (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v174);
    v17 = InternalAdapterInfo;
    if ( InternalAdapterInfo < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v52);
      v38[3] = v17;
      v38[4] = 6062LL;
      goto LABEL_23;
    }
    *((_DWORD *)this + 75) ^= (*((_DWORD *)this + 75) ^ v174[0]) & 0x18;
    *((_BYTE *)this + 186) = v175 & 1;
    v31 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
    v30 = *(_QWORD *)(v31 + 40);
    *(_DWORD *)(v30 + 28) = v174[1];
    v34 = *((_DWORD *)this + 75);
  }
  if ( (v34 & 8) != 0 && (v34 & 0x10) != 0 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v53 + 24) = 6079LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !*((_QWORD *)this + 39) )
  {
    v54 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v54 + 24) = 6086LL;
LABEL_41:
    WdLogEvent5_WdError(v54);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 56) )
    *((_QWORD *)this + 56) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 118) )
    *((_QWORD *)this + 118) = DxgkQueryFSEBlock;
  v55 = DXGADAPTER::CallDriverQueryInterface(
          (PDEVICE_OBJECT *)this,
          (const struct _GUID *)v30,
          v32,
          v33,
          (char *)this + 1480);
  v60 = v55;
  if ( v55 < 0 )
  {
    v61 = WdLogNewEntry5_WdTrace(v57, v56, v58, v59);
    *(_QWORD *)(v61 + 24) = this;
    *(_QWORD *)(v61 + 32) = v60;
LABEL_49:
    memset((char *)this + 1480, 0, 0xB8uLL);
    goto LABEL_50;
  }
  if ( *((_WORD *)this + 741) < 4u )
    goto LABEL_49;
LABEL_50:
  v62 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v63 = *(_DWORD *)(*(_QWORD *)(v62 + 40) + 28LL);
  *((_DWORD *)this + 416) = v63;
  if ( v63 >= 0x7000 && *((_DWORD *)this + 320) && *((_DWORD *)this + 321) )
  {
    v64 = 0;
LABEL_58:
    DXGADAPTER::SetModeBehavior(this, v56, v64);
    goto LABEL_59;
  }
  if ( v63 >= 0x6002 && *((_DWORD *)this + 320) && *((_DWORD *)this + 321) )
  {
    v64 = 1;
    goto LABEL_58;
  }
LABEL_59:
  if ( v63 - 20480 <= 5 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v65[3] = 6161LL;
LABEL_61:
    WdLogEvent5_WdError(v65);
    return 3221225485LL;
  }
  v171.Type = DXGKQAITYPE_DRIVERCAPS;
  v171.pOutputData = (char *)this + 1768;
  v171.pInputData = 0LL;
  v171.InputDataSize = 0;
  v171.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v63);
  if ( !v171.OutputDataSize )
    return 3221225485LL;
  v67 = DXGADAPTER::DdiQueryAdapterInfo(this, &v171, v66);
  v17 = v67;
  if ( v67 < 0 )
    goto LABEL_64;
  v69 = DpiReadPnpRegistryValue(*((_QWORD *)this + 24), L"ACGSupported", &v167, 4LL);
  v71 = v167;
  if ( v69 < 0 )
    v71 = 0;
  v167 = v71;
  if ( v71 || (v72 = (int)DXGADAPTER::GetDriverVersion(this) < 2200, v73 = 0, !v72) )
    v73 = 1;
  *((_BYTE *)this + 187) = v73;
  if ( *((_BYTE *)this + 185) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 459) &= ~0x800u;
    *((_BYTE *)this + 2308) = 0;
    if ( *((_BYTE *)this + 186) )
      *((_DWORD *)this + 455) &= ~0x100000u;
  }
  if ( v63 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v74 = *((_DWORD *)this + 75);
      if ( (v74 & 4) == 0 && (v74 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)a2->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 459) |= 0x400u;
    }
  }
  v75 = (_DWORD *)((char *)this + 2352);
  *((_DWORD *)this + 588) = 0;
  if ( v63 >= 0x5010 && !*((_BYTE *)this + 185) )
  {
    v177.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v177.pInputData = 0LL;
    v177.InputDataSize = 0;
    v177.pOutputData = (char *)this + 2352;
    v177.OutputDataSize = 4;
    v76 = DXGADAPTER::DdiQueryAdapterInfo(this, &v177, v70);
    if ( v76 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v78, v77, v79, v80) + 24) = v76;
      *v75 = 0;
      if ( *((int *)this + 526) >= 8704 )
        *v75 |= 2u;
    }
  }
  v81 = *((unsigned int *)this + 62);
  v82 = v81;
  v83 = 352 * v81;
  if ( !is_mul_ok(v81, 0x160uLL) )
    v83 = -1LL;
  IsBddFallbackDriver = __CFADD__(v83, 8LL);
  v85 = v83 + 8;
  if ( IsBddFallbackDriver )
    v85 = -1LL;
  v86 = (char *)operator new[](v85, 0x4B677844u, (POOL_TYPE)512);
  if ( v86 )
  {
    v88 = v86 + 8;
    *(_QWORD *)v86 = v81;
    `vector constructor iterator'(
      v86 + 8,
      352LL,
      (unsigned int)v81,
      (void (__fastcall *)(char *))DXGK_PHYSICALADAPTERINFO::DXGK_PHYSICALADAPTERINFO);
  }
  else
  {
    v88 = 0LL;
  }
  *((_QWORD *)this + 295) = v88;
  if ( !v88 )
  {
    v89 = WdLogNewEntry5_WdLowResource(v87);
    *(_QWORD *)(v89 + 24) = 6268LL;
    WdLogEvent5_WdLowResource(v89);
    return 3221225495LL;
  }
  memset(v88, 0, 352 * v81);
  v92 = 0;
  if ( *((int *)this + 526) < 0x2000 || v63 < 0x5005 )
  {
    v92 = 1;
  }
  else
  {
    *((_DWORD *)this + 592) = 0;
    v93 = 0;
    v181 = 0;
    if ( (_DWORD)v81 )
    {
      v94 = *((_QWORD *)this + 295);
      v91 = 0LL;
      while ( 1 )
      {
        v178.Type = DXGKQAITYPE_PHYSICALADAPTERCAPS;
        v178.pInputData = &v181;
        v178.InputDataSize = 4;
        v178.OutputDataSize = 24;
        v178.pOutputData = (void *)(v94 + 352LL * (unsigned int)v91);
        v95 = DXGADAPTER::DdiQueryAdapterInfo(this, &v178, v91);
        v98 = v95;
        if ( v95 < 0 )
          break;
        v94 = *((_QWORD *)this + 295);
        v90 = 352LL * v181;
        v93 = *(unsigned __int16 *)(v90 + v94) + *((_DWORD *)this + 592);
        v91 = ++v181;
        *((_DWORD *)this + 592) = v93;
        if ( (unsigned int)v91 >= (unsigned int)v81 )
          goto LABEL_99;
      }
      v99 = WdLogNewEntry5_WdEvent(v97, v96);
      *(_QWORD *)(v99 + 24) = v98;
      WdLogEvent5_WdEvent(v99);
      v92 = 1;
    }
    else
    {
LABEL_99:
      if ( v93 > 0x40 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v90);
        v65[3] = this;
        v65[4] = 64LL;
        v65[5] = *((unsigned int *)this + 592);
        goto LABEL_61;
      }
      if ( (*((_DWORD *)this + 458) & 1) == 0 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v90);
        v65[3] = this;
        v65[4] = 6333LL;
        goto LABEL_61;
      }
    }
    if ( (*((_DWORD *)this + 459) & 0x800) != 0 )
    {
      v179 = 0;
      if ( (_DWORD)v81 )
      {
        do
        {
          v171.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
          v168 = 0LL;
          v171.InputDataSize = 4;
          v171.pInputData = &v179;
          v171.OutputDataSize = 8;
          v171.pOutputData = &v168;
          v100 = DXGADAPTER::DdiQueryAdapterInfo(this, &v171, v91);
          v17 = v100;
          if ( v100 < 0 )
            goto LABEL_64;
          if ( (v168 & 0xFFF) != 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v68);
            v108 = v168;
            goto LABEL_119;
          }
          *(_QWORD *)(352LL * v179 + *((_QWORD *)this + 295) + 48) = v168;
          v101 = v179;
          v91 = *(_QWORD *)(352LL * v179 + *((_QWORD *)this + 295) + 48);
          if ( v91 )
          {
            result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v179, v91);
            if ( (int)result < 0 )
              return result;
            v101 = v179;
          }
          v179 = v101 + 1;
        }
        while ( v101 + 1 < (unsigned int)v81 );
      }
      v171.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
      v171.InputDataSize = 0;
      v171.pInputData = 0LL;
      *(_QWORD *)v169 = 0LL;
      v170 = 0LL;
      v171.pOutputData = v169;
      v171.OutputDataSize = 16;
      v102 = DXGADAPTER::DdiQueryAdapterInfo(this, &v171, v91);
      v17 = v102;
      if ( v102 < 0 )
      {
LABEL_64:
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v68);
        v38[3] = v17;
        goto LABEL_23;
      }
      if ( v169[0] )
      {
        v103 = 16LL * v169[0];
        if ( !is_mul_ok(v169[0], 0x10uLL) )
          v103 = -1LL;
        v104 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)operator new[](v103, 0x4B677844u, PagedPool);
        v107 = v104;
        if ( !v104 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v105);
          v38[3] = v169[0];
          goto LABEL_23;
        }
        v170 = v104;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v171, v106) < 0 )
        {
          v110 = WdLogNewEntry5_WdAssertion(v109);
          *(_QWORD *)(v110 + 24) = 6402LL;
          WdLogEvent5_WdAssertion(v110);
        }
        LODWORD(v17) = DXGADAPTER::ValidateHardwareReservedRanges(v109, v107, v169[0]);
        if ( (int)v17 < 0 )
        {
          operator delete[](v107);
          return (unsigned int)v17;
        }
        v111 = v169[0];
        *((_QWORD *)this + 523) = v107;
        v75 = (_DWORD *)((char *)this + 2352);
        *((_DWORD *)this + 1044) = v111;
      }
    }
  }
  if ( v92 && (_DWORD)v81 )
  {
    v112 = 0LL;
    do
    {
      *(_WORD *)(v112 + *((_QWORD *)this + 295)) = *((_WORD *)this + 922);
      *(_DWORD *)(v112 + *((_QWORD *)this + 295) + 16) ^= (*(_DWORD *)(v112 + *((_QWORD *)this + 295) + 16) ^ (*((_DWORD *)this + 459) >> 7)) & 1;
      *(_DWORD *)(v112 + *((_QWORD *)this + 295) + 16) ^= (*(_DWORD *)(v112 + *((_QWORD *)this + 295) + 16) ^ (*((_DWORD *)this + 459) >> 5)) & 2;
      *(_WORD *)(v112 + *((_QWORD *)this + 295) + 2) = *((_WORD *)this + 920);
      *(_QWORD *)(v112 + *((_QWORD *)this + 295) + 8) = *((_QWORD *)this + 24);
      v112 += 352LL;
      --v82;
    }
    while ( v82 );
  }
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 2400 )
  {
    v114 = *((_DWORD *)this + 586);
    if ( v114 >= 4 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v113);
      v65[3] = 6440LL;
      goto LABEL_61;
    }
    *((_BYTE *)this + 2418) = v114 & 1;
  }
  if ( v63 >= 0x3001 )
  {
    v117 = *((_DWORD *)this + 526);
    if ( v117 != 4096
      && v117 != 4608
      && v117 != 4864
      && v117 != 0x2000
      && v117 != 8448
      && v117 != 8704
      && v117 != 8960
      && v117 != 9216 )
    {
      v54 = WdLogNewEntry5_WdError(v113);
      *(_QWORD *)(v54 + 24) = *((int *)this + 526);
      goto LABEL_41;
    }
  }
  else
  {
    *((_DWORD *)this + 526) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v113) + 544) || (v116 = 1, (*((_DWORD *)this + 75) & 8) != 0) )
    v116 = 0;
  *((_BYTE *)this + 2372) = v116;
  if ( v116 )
  {
    v115 = *((unsigned int *)this + 526);
    if ( (int)v115 < 4608
      && (*((_DWORD *)this + 574)
       || *((_DWORD *)this + 575)
       || *((_BYTE *)this + 2304)
       || *((_BYTE *)this + 2305)
       || *((_BYTE *)this + 2306)
       || (*((_DWORD *)this + 455) & 0x10000000) != 0
       || (*((_DWORD *)this + 458) & 0x14) != 0
       || *((_BYTE *)this + 2307)
       || *((_BYTE *)this + 2309)
       || *((_BYTE *)this + 2310)) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6514LL;
      goto LABEL_61;
    }
    if ( (int)v115 < 4864
      && ((*((_DWORD *)this + 457) & 0x10) != 0
       || (*((_DWORD *)this + 459) & 0x10) != 0
       || *((_BYTE *)this + 2311)
       || *((_DWORD *)this + 578)) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6529LL;
      goto LABEL_61;
    }
    if ( (int)v115 < 0x2000 && *((_BYTE *)this + 2316) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6557LL;
      goto LABEL_61;
    }
  }
  v118 = *((_DWORD *)this + 459);
  if ( v63 < 0x4000 )
  {
    v118 &= ~0x10u;
    *((_BYTE *)this + 2311) = 0;
    *((_DWORD *)this + 459) = v118;
  }
  if ( v63 < 0x5011 )
  {
    v115 = *((unsigned int *)this + 75);
    if ( (v115 & 1) != 0 && (*((_DWORD *)this + 75) & 0x1000) != 0 && (v118 & 0x10) != 0 )
      *((_BYTE *)this + 2316) = 1;
  }
  v119 = v180;
  *(_BYTE *)v180 ^= (*(_BYTE *)v180 ^ (4 * *((_BYTE *)this + 2304))) & 4;
  LOBYTE(v115) = *(_BYTE *)v119 & 0xF7;
  v120 = v115 | (*((_BYTE *)this + 2310) != 0 ? 8 : 0);
  *(_BYTE *)v119 = v120;
  v121 = (v120 ^ (32 * (*((_DWORD *)this + 459) >> 4))) & 0x20 ^ v120;
  *(_BYTE *)v119 = v121;
  v122 = (v121 ^ (*((_BYTE *)this + 2311) << 6)) & 0x40 ^ v121;
  *(_BYTE *)v119 = v122;
  *((_DWORD *)v119 + 1) = *((_DWORD *)this + 451);
  v123 = (*(_BYTE *)v75 << 7) | v122 & 0x7F;
  v124 = *((_BYTE *)v119 + 1);
  *(_BYTE *)v119 = v123;
  v125 = v123 & 0xEF;
  v126 = v124 ^ (v124 ^ *((_BYTE *)this + 2316)) & 1;
  *((_BYTE *)v119 + 1) = v126;
  v127 = *((_DWORD *)this + 526);
  *((_DWORD *)v119 + 2) = v127;
  *(_BYTE *)v119 = v125;
  if ( v63 >= 0x5021 )
  {
    v125 |= 16 * (*((_BYTE *)this + 2336) & 1);
    *(_BYTE *)v119 = v125;
  }
  if ( !*((_BYTE *)this + 185) )
  {
    v128 = v125 & 0x40;
    if ( (v125 & 0x40) != 0 )
    {
      if ( v63 < 0x5005 && (*((_DWORD *)this + 320) || *((_DWORD *)this + 321)) )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
        v108 = *((_QWORD *)this + 24);
LABEL_119:
        v65[3] = v108;
        goto LABEL_61;
      }
      v126 ^= (v126 ^ (2 * *((_BYTE *)this + 2339))) & 2;
      *((_BYTE *)v119 + 1) = v126;
    }
    v115 = 0LL;
    if ( !v128 )
    {
      LOBYTE(v127) = !(v126 & 1);
      v115 = v127;
    }
    if ( !(_BYTE)v115 && (v125 & 0x20) == 0 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = *((_QWORD *)this + 24);
      v65[4] = 6635LL;
      goto LABEL_61;
    }
    if ( ((v128 != 0) & v126) != 0 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = *((_QWORD *)this + 24);
      v65[4] = 6642LL;
      goto LABEL_61;
    }
    if ( (v126 & 1) != 0 && !*((_DWORD *)this + 321) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = *((_QWORD *)this + 24);
      v65[4] = 6650LL;
      goto LABEL_61;
    }
    if ( *((_BYTE *)this + 2306) && (!*((_QWORD *)this + 85) || !*((_QWORD *)this + 86) || !*((_QWORD *)this + 87)) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6664LL;
      goto LABEL_61;
    }
    if ( (*((_DWORD *)this + 455) & 4) != 0 && !*((_QWORD *)this + 83) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6671LL;
      goto LABEL_61;
    }
    if ( *((_BYTE *)this + 2309) && (!*((_QWORD *)this + 89) || !*((_QWORD *)this + 90)) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6679LL;
      goto LABEL_61;
    }
    if ( v63 < 0x300C && *((_QWORD *)this + 89) && *((_QWORD *)this + 90) )
      *((_BYTE *)this + 2309) = 1;
  }
  *((_WORD *)this + 1187) = 0;
  *((_BYTE *)this + 2376) = 0;
  if ( *((_BYTE *)this + 2308) )
  {
    if ( v63 < 0x300B )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6701LL;
      goto LABEL_61;
    }
    if ( v63 >= 0x4000 )
    {
      if ( v63 == 0x4000 )
      {
        *((_BYTE *)this + 2375) = 1;
      }
      else
      {
        v129 = *((_DWORD *)this + 578);
        if ( !v129 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
          v65[3] = 6714LL;
          goto LABEL_61;
        }
        if ( v129 <= 8 )
        {
          if ( v63 > 0x5000 )
            *((_BYTE *)this + 2376) = 1;
        }
        else
        {
          v115 = *((unsigned int *)this + 526);
          if ( (int)v115 < 8704 )
          {
            if ( (int)v115 < 0x2000 || v129 != 10 )
            {
              v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
              v65[3] = 6737LL;
              goto LABEL_61;
            }
            *((_DWORD *)this + 578) = 8;
          }
          else if ( v129 > 0xA )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
            v65[3] = 6724LL;
            goto LABEL_61;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)this + 2374) = 1;
    }
    if ( !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) && !*((_QWORD *)this + 113) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6753LL;
      goto LABEL_61;
    }
    if ( v63 > 0x4002 && !*((_QWORD *)this + 97) && !*((_QWORD *)this + 108) && !*((_QWORD *)this + 112) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6765LL;
      goto LABEL_61;
    }
    if ( !*((_BYTE *)this + 2307) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      v65[3] = 6775LL;
      goto LABEL_61;
    }
  }
  v130 = *((_BYTE *)this + 185);
  *((_BYTE *)this + 2416) = 0;
  if ( v130 )
    goto LABEL_253;
  v131 = 0;
  if ( v63 >= 0x700A && *((int *)this + 526) >= 8704 && (!*((_QWORD *)this + 65) || *((_QWORD *)this + 132)) )
  {
    *((_BYTE *)this + 2416) = 1;
    v131 = 1;
  }
  if ( *((int *)this + 526) < 8960 )
  {
LABEL_253:
    *((_DWORD *)this + 454) &= 0xFFFFFFE3;
  }
  else
  {
    v132 = (*((_DWORD *)this + 454) >> 3) & 1;
    v133 = (*((_DWORD *)this + 454) >> 2) & 1;
    if ( v133 < (unsigned int)v132 || (unsigned int)v132 < ((*((_DWORD *)this + 454) >> 4) & 1u) || !v131 && v133 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v132);
      v65[3] = *((_QWORD *)this + 24);
      v65[4] = -1073741811LL;
      goto LABEL_61;
    }
  }
  v134 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v134 + 40) + 133LL) && !v130 )
  {
    v135 = *((_DWORD *)this + 526);
    v136 = DXGGLOBAL::GetGlobal(v134);
    v137 = DXGGLOBAL::DeferredInitialize(v136, v135 >= 0x2000);
    v17 = v137;
    if ( v137 < 0 )
      goto LABEL_64;
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, v119);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((int *)this + 526) < 9216 )
  {
LABEL_263:
    *((_QWORD *)this + 153) = SwapChainObOpenProcedure;
    *((_QWORD *)this + 154) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    goto LABEL_264;
  }
  v139 = *((_QWORD *)this + 154);
  if ( !*((_QWORD *)this + 153) )
  {
    if ( v139 )
    {
LABEL_260:
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v138);
      v65[3] = 6874LL;
      goto LABEL_61;
    }
    goto LABEL_263;
  }
  if ( !v139 )
    goto LABEL_260;
  DXGADAPTER::InitializeDriverDiagnosticReporting(this);
LABEL_264:
  v140 = (__int64 *)((char *)this + 2464);
  RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 308);
  v41 = RenderCore;
  if ( RenderCore >= 0 )
  {
    v143 = (_QWORD *)((char *)this + 2456);
    DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 307);
    v41 = DisplayCore;
    if ( DisplayCore < 0 )
    {
      if ( !*v143 )
        goto LABEL_25;
      v142 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v142 + 24) = 6911LL;
      goto LABEL_267;
    }
    if ( *v140 )
    {
      v145 = *v143 == 0LL;
    }
    else
    {
      v145 = *v143 == 0LL;
      if ( !*v143 )
      {
        v54 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v54 + 24) = this;
        *(_QWORD *)(v54 + 32) = -1073741735LL;
        goto LABEL_41;
      }
    }
    v146 = *(_BYTE *)v119 & 0xFE | !v145;
    *(_BYTE *)v119 = v146;
    v147 = v146 & 0xFD | (*v140 != 0 ? 2 : 0);
    *(_BYTE *)v119 = v147;
    if ( (v147 & 1) != 0 )
      *((_BYTE *)v119 + 1) = (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0) | *((_BYTE *)v119 + 1) & 0xFB;
    else
      *((_BYTE *)v119 + 1) &= ~4u;
    if ( !*v140 )
      *((_DWORD *)this + 455) |= 1u;
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v150 = *((_DWORD *)this + 75);
      if ( (v150 & 4) == 0
        && (v150 & 8) == 0
        && v148
        && v63 >= 0x5008
        && (!*((_QWORD *)this + 98) || !*((_QWORD *)this + 110)) )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v149);
        v65[3] = 6967LL;
        goto LABEL_61;
      }
    }
    if ( *((_BYTE *)this + 2372)
      && DXGADAPTER::IsFullWDDMAdapter(v149)
      && *((int *)this + 526) >= 4608
      && !*((_BYTE *)this + 2307) )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v151);
      v65[3] = 6982LL;
      goto LABEL_61;
    }
    if ( ((*((_BYTE *)this + 185) == 0) & *((_BYTE *)this + 2307)) != 0
      && (!v148
       || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v148 + 544) + 8LL) + 704LL))(*(_QWORD *)(v148 + 552))) )
    {
      *(_WORD *)((char *)this + 2307) = 0;
    }
    if ( *((_BYTE *)this + 185) )
      *((_QWORD *)this + 98) = 0LL;
    IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
    v152 = *((_DWORD *)this + 75);
    v153 = IsBddFallbackDriver ? 3 : 1;
    *((_DWORD *)this + 44) = v153;
    if ( (v152 & 0x10) != 0 && !*v143 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v176);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v176);
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v154) + 75) )
      {
        v156 = WdLogNewEntry5_WdError(v155);
        *(_QWORD *)(v156 + 24) = this;
        *(_QWORD *)(v156 + 32) = -1073741735LL;
        WdLogEvent5_WdError(v156);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        *((_QWORD *)this + 4) = -1LL;
        v157 = DXGGLOBAL::GetGlobal(v155);
        DXGGLOBAL::SetWarpAdapter(v157, this);
      }
      if ( v176[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v176);
    }
    if ( !*((_BYTE *)this + 185) )
    {
      v158 = DXGADAPTER::InitializePowerManagement(this);
      v41 = v158;
      if ( v158 >= 0 )
      {
LABEL_310:
        if ( *((_BYTE *)this + 2372) )
        {
          if ( *((int *)this + 526) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            v160 = *((_DWORD *)this + 75);
            if ( (v160 & 4) == 0 && (v160 & 0x20) == 0 && (*((_DWORD *)this + 457) & 0x10) == 0 )
            {
              v65 = (_QWORD *)WdLogNewEntry5_WdError(v153);
              v65[3] = 7063LL;
              goto LABEL_61;
            }
          }
        }
LABEL_317:
        v161 = *v140;
        if ( v161 && !*((_BYTE *)this + 185) )
        {
          v162 = DXGGLOBAL::GetGlobal(v153);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v161 + 520) + 8LL) + 920LL))(
            *(_QWORD *)(v161 + 528),
            (__int64)v162 + 864);
        }
        if ( (*((_BYTE *)this + 300) & 1) != 0 )
        {
          v163 = *(_QWORD *)((char *)this + 268);
          *((_QWORD *)DXGGLOBAL::GetGlobal(v153) + 78) = v163;
        }
        if ( *((_BYTE *)this + 185) && (int)v41 >= 0 && !*((_QWORD *)DXGGLOBAL::GetGlobal(v153) + 76) )
        {
          v165 = DXGGLOBAL::GetGlobal(v164);
          DXGGLOBAL::SetVirtualRenderAdapter(v165, this);
        }
        return (unsigned int)v41;
      }
      v159 = WdLogNewEntry5_WdError(v153);
      *(_QWORD *)(v159 + 24) = this;
      *(_QWORD *)(v159 + 32) = v41;
      WdLogEvent5_WdError(v159);
    }
    if ( (int)v41 < 0 )
      goto LABEL_317;
    goto LABEL_310;
  }
  if ( *v140 )
  {
    v142 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v142 + 24) = 6895LL;
LABEL_267:
    WdLogEvent5_WdAssertion(v142);
  }
LABEL_25:
  v42 = WdLogNewEntry5_WdError(v40);
  *(_QWORD *)(v42 + 24) = this;
  *(_QWORD *)(v42 + 32) = v41;
LABEL_26:
  WdLogEvent5_WdError(v42);
  return (unsigned int)v41;
}
