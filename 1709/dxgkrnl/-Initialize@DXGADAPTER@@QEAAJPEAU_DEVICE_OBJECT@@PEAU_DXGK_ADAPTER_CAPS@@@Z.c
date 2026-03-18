/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002850 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844DC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0111D60 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C0113588 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0114144 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0114200 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0114290 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116864 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116C2C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C0117154 (DpiGetAdapterInfo.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C011964C (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C01196BC (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01AC07C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, struct _DEVICE_OBJECT *a2, struct _DXGK_ADAPTER_CAPS *a3)
{
  struct _ERESOURCE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  DXGGLOBAL *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rax
  NTSTATUS v19; // eax
  int AdapterInfo; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const struct _GUID *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  unsigned __int8 v37; // r8
  int v38; // eax
  __int64 v39; // rcx
  int PnpRegistryValue; // eax
  __int64 v41; // r8
  int v42; // ecx
  bool v43; // cc
  char v44; // al
  _DWORD *v45; // r13
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  SIZE_T v50; // rax
  unsigned __int64 v51; // r14
  PVOID v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // edx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  char v65; // al
  char v66; // dl
  char v67; // dl
  char v68; // dl
  char v69; // r8
  char v70; // r8
  char v71; // r9
  char v72; // r8
  char v73; // dl
  char v74; // r8
  __int64 v75; // rcx
  DXGGLOBAL *v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rcx
  __int64 *v79; // r15
  int RenderCore; // eax
  __int64 v81; // rcx
  _QWORD *v82; // rbx
  int DisplayCore; // eax
  __int64 v84; // rcx
  __int64 v85; // r14
  bool v86; // zf
  char v87; // dl
  char v88; // cl
  __int64 v89; // rdx
  DXGADAPTER *v90; // rcx
  int v91; // eax
  bool IsBddFallbackDriver; // cf
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rbx
  struct DXGGLOBAL *v97; // rax
  __int64 v99; // rcx
  unsigned int v100; // edx
  __int64 v101; // rcx
  __int64 v102; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // eax
  _QWORD *v115; // rax
  unsigned int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  int v123; // eax
  __int64 v124; // rcx
  DXGGLOBAL *v125; // rax
  int v126; // [rsp+20h] [rbp-79h]
  struct _DXGKARG_QUERYADAPTERINFO v127; // [rsp+30h] [rbp-69h] BYREF
  char v128; // [rsp+60h] [rbp-39h]
  struct _DXGKARG_QUERYADAPTERINFO v129; // [rsp+68h] [rbp-31h] BYREF
  unsigned int *v130; // [rsp+98h] [rbp-1h]
  int v131; // [rsp+A0h] [rbp+7h]
  __int64 v132; // [rsp+A8h] [rbp+Fh]
  int v133; // [rsp+B0h] [rbp+17h]
  unsigned int v134; // [rsp+100h] [rbp+67h] BYREF
  int v135; // [rsp+118h] [rbp+7Fh] BYREF

  if ( KeGetCurrentIrql() )
  {
    v105 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v105 + 24) = 5470LL;
    WdLogEvent5_WdAssertion(v105);
  }
  if ( *((_DWORD *)this + 44) )
    return 3221225485LL;
  v6 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 18) = v6;
  if ( !v6 )
    goto LABEL_149;
  v10 = ExInitializeResourceLite(v6);
  v14 = v10;
  if ( v10 < 0 )
  {
LABEL_152:
    v108 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v108 + 24) = this;
    *(_QWORD *)(v108 + 32) = v14;
    WdLogEvent5_WdWarning(v108);
    return (unsigned int)v14;
  }
  v15 = (DXGGLOBAL *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 24) = a2;
  v16 = DXGGLOBAL::AcquireAdapterOrdinal(v15);
  *((_DWORD *)this + 50) = v16;
  if ( v16 == -1 )
    return 3221225495LL;
  LODWORD(v14) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 3916));
  if ( (int)v14 < 0 )
  {
    v110 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v110 + 24) = 5522LL;
    WdLogEvent5_WdLowResource(v110);
    return (unsigned int)v14;
  }
  v18 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 29) = v18;
  if ( !v18 )
  {
LABEL_149:
    v106 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v106 + 24) = this;
    *(_QWORD *)(v106 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v106);
    return 3221225495LL;
  }
  v19 = ExInitializeResourceLite(v18);
  v14 = v19;
  if ( v19 < 0 )
    goto LABEL_152;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *((_QWORD *)this + 5) = -1LL;
  AdapterInfo = DpiGetAdapterInfo(a2, (char *)this + 1144, (char *)this + 240, (char *)this + 1536);
  v14 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v111 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v111 + 24) = this;
    *(_QWORD *)(v111 + 32) = v14;
    WdLogEvent5_WdWarning(v111);
    memset((char *)this + 240, 0, 0x388uLL);
    memset((char *)this + 1144, 0, 0xC8uLL);
    return (unsigned int)v14;
  }
  if ( (*((_DWORD *)this + 75) & 0x200) != 0 )
    *((_BYTE *)DXGGLOBAL::GetGlobal(v22) + 1568) = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (__int64)&unk_1C003CEE8,
    0,
    v126);
  v28 = *((_DWORD *)this + 75);
  if ( (v28 & 8) != 0 && (v28 & 0x10) != 0 )
  {
    v112 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v112 + 24) = 5651LL;
    WdLogEvent5_WdAssertion(v112);
  }
  if ( !*((_QWORD *)this + 39) )
  {
    v113 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v113 + 24) = 5658LL;
    goto LABEL_161;
  }
  if ( !*((_QWORD *)this + 56) )
    *((_QWORD *)this + 56) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 118) )
    *((_QWORD *)this + 118) = DxgkQueryFSEBlock;
  v29 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v24, v26, v27, (char *)this + 1344);
  v33 = v29;
  if ( v29 >= 0 )
  {
    if ( *((_WORD *)this + 673) >= 4u )
      goto LABEL_22;
  }
  else
  {
    v34 = WdLogNewEntry5_WdTrace(v31, v30);
    *(_QWORD *)(v34 + 24) = this;
    *(_QWORD *)(v34 + 32) = v33;
  }
  memset((char *)this + 1344, 0, 0xB8uLL);
LABEL_22:
  v35 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v36 = *(unsigned int *)(*(_QWORD *)(v35 + 40) + 28LL);
  *((_DWORD *)this + 382) = v36;
  if ( (unsigned int)v36 >= 0x7000 && *((_DWORD *)this + 296) && *((_DWORD *)this + 297) )
  {
    v37 = 0;
LABEL_26:
    DXGADAPTER::SetModeBehavior(this, v30, v37);
    goto LABEL_27;
  }
  if ( (unsigned int)v36 >= 0x6002 && *((_DWORD *)this + 296) && *((_DWORD *)this + 297) )
  {
    v37 = 1;
    goto LABEL_26;
  }
LABEL_27:
  if ( (unsigned int)(v36 - 20480) <= 5 )
  {
    v115 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v115[3] = 5733LL;
    goto LABEL_290;
  }
  v127.Type = DXGKQAITYPE_DRIVERCAPS;
  v127.pOutputData = (char *)this + 1632;
  v127.OutputDataSize = 576;
  v127.pInputData = 0LL;
  v127.InputDataSize = 0;
  if ( (unsigned int)v36 <= 0x5010 )
  {
    if ( (unsigned int)v36 < 0x4000 )
    {
      if ( (unsigned int)v36 < 0x3000 )
      {
        if ( (unsigned int)v36 < 0x2001 )
        {
          if ( (unsigned int)v36 >= 0x2000 || (unsigned int)v36 < 0x104E )
          {
            v115 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v115[3] = v36;
            goto LABEL_290;
          }
          v127.OutputDataSize = 336;
        }
        else
        {
          v127.OutputDataSize = 528;
        }
      }
      else
      {
        v127.OutputDataSize = 544;
      }
    }
    else
    {
      v127.OutputDataSize = 552;
    }
  }
  else
  {
    v127.OutputDataSize = 576;
  }
  v38 = DXGADAPTER::DdiQueryAdapterInfo(this, &v127, v32);
  v14 = v38;
  if ( v38 < 0 )
  {
    v109 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v109 + 24) = v14;
LABEL_154:
    WdLogEvent5_WdError(v109);
    return (unsigned int)v14;
  }
  PnpRegistryValue = DpiReadPnpRegistryValue(*((_QWORD *)this + 24), L"ACGSupported", (char *)&v135, 4u, 2u);
  v42 = v135;
  if ( PnpRegistryValue < 0 )
    v42 = 0;
  v135 = v42;
  if ( v42 || (v43 = (int)DXGADAPTER::GetDriverVersion(this) < 2200, v44 = 0, !v43) )
    v44 = 1;
  *((_BYTE *)this + 186) = v44;
  if ( *((_BYTE *)this + 185) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_BYTE *)this + 2172) = 0;
  }
  if ( g_bCreateParavirtualizedGpu )
  {
    if ( (unsigned int)v36 >= 0x5023 )
    {
      v114 = *((_DWORD *)this + 75);
      if ( (v114 & 4) == 0 && (v114 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)a2->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 425) |= 0x400u;
    }
  }
  v45 = (_DWORD *)((char *)this + 2208);
  *((_DWORD *)this + 552) = 0;
  if ( (unsigned int)v36 >= 0x5010 && !*((_BYTE *)this + 185) )
  {
    v129.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v129.pInputData = 0LL;
    v129.InputDataSize = 0;
    v129.pOutputData = (char *)this + 2208;
    v129.OutputDataSize = 4;
    v46 = DXGADAPTER::DdiQueryAdapterInfo(this, &v129, v41);
    if ( v46 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v48, v47) + 24) = v46;
      *v45 = 0;
      if ( *((int *)this + 492) >= 8704 )
        *v45 |= 2u;
    }
  }
  v49 = *((unsigned int *)this + 62);
  v50 = 48 * v49;
  v51 = v49;
  if ( !is_mul_ok(v49, 0x30uLL) )
    v50 = -1LL;
  v52 = operator new[](v50, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 277) = v52;
  if ( !v52 )
  {
    v107 = WdLogNewEntry5_WdLowResource(v53);
    *(_QWORD *)(v107 + 24) = 6009LL;
    WdLogEvent5_WdLowResource(v107);
    return 3221225495LL;
  }
  memset(v52, 0, 48 * v49);
  if ( *((int *)this + 492) < 0x2000 || (unsigned int)v36 < 0x5005 )
  {
LABEL_49:
    if ( (_DWORD)v49 )
    {
      v63 = 0LL;
      do
      {
        *(_WORD *)(v63 + *((_QWORD *)this + 277)) = *((_WORD *)this + 854);
        *(_DWORD *)(*((_QWORD *)this + 277) + v63 + 16) ^= (*(_DWORD *)(*((_QWORD *)this + 277) + v63 + 16) ^ (*((_DWORD *)this + 425) >> 7)) & 1;
        *(_DWORD *)(*((_QWORD *)this + 277) + v63 + 16) ^= (*(_DWORD *)(*((_QWORD *)this + 277) + v63 + 16) ^ (*((_DWORD *)this + 425) >> 5)) & 2;
        *(_WORD *)(*((_QWORD *)this + 277) + v63 + 2) = *((_WORD *)this + 852);
        v54 = *((_QWORD *)this + 277);
        *(_QWORD *)(v54 + v63 + 8) = *((_QWORD *)this + 24);
        v63 += 48LL;
        --v51;
      }
      while ( v51 );
    }
    goto LABEL_52;
  }
  *((_DWORD *)this + 556) = 0;
  v56 = 0;
  v134 = 0;
  if ( (_DWORD)v49 )
  {
    while ( 1 )
    {
      LODWORD(v129.hKmdProcessHandle) = 15;
      v130 = &v134;
      v131 = 4;
      v133 = 24;
      v132 = *((_QWORD *)this + 277) + 48LL * v56;
      v57 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)&v129.hKmdProcessHandle, v55);
      v61 = v57;
      if ( v57 < 0 )
        break;
      v56 = v134 + 1;
      v54 = *(unsigned __int16 *)(*((_QWORD *)this + 277) + 48LL * v134);
      *((_DWORD *)this + 556) += v54;
      v134 = v56;
      if ( v56 >= (unsigned int)v49 )
        goto LABEL_123;
    }
    v62 = WdLogNewEntry5_WdEvent(v59, v58, v55, v60);
    *(_QWORD *)(v62 + 24) = v61;
    WdLogEvent5_WdEvent(v62);
    goto LABEL_49;
  }
LABEL_123:
  if ( *((_DWORD *)this + 556) > 0x40u )
  {
    v115 = (_QWORD *)WdLogNewEntry5_WdError(v54);
    v115[3] = this;
    v115[4] = 64LL;
    v115[5] = *((unsigned int *)this + 556);
    goto LABEL_290;
  }
  if ( (*((_DWORD *)this + 424) & 1) != 0 )
  {
LABEL_52:
    if ( (unsigned int)v36 < 0x3001 )
    {
      *((_DWORD *)this + 492) = 4096;
    }
    else
    {
      v54 = *((unsigned int *)this + 492);
      if ( (((_DWORD)v54 - 4096) & 0xFFFFECFF) != 0 || (_DWORD)v54 == 4352 )
      {
        v113 = WdLogNewEntry5_WdError(v54);
        *(_QWORD *)(v113 + 24) = *((int *)this + 492);
        goto LABEL_161;
      }
    }
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v54) + 536) || (v65 = 1, (*((_DWORD *)this + 75) & 8) != 0) )
      v65 = 0;
    *((_BYTE *)this + 2228) = v65;
    if ( v65 )
    {
      v64 = *((unsigned int *)this + 492);
      if ( (int)v64 < 4608
        && (*((_DWORD *)this + 540)
         || *((_DWORD *)this + 541)
         || *((_BYTE *)this + 2168)
         || *((_BYTE *)this + 2169)
         || *((_BYTE *)this + 2170)
         || (*((_DWORD *)this + 421) & 0x10000000) != 0
         || (*((_DWORD *)this + 424) & 0x14) != 0
         || *((_BYTE *)this + 2171)
         || *((_BYTE *)this + 2173)
         || *((_BYTE *)this + 2174)) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6166LL;
        goto LABEL_290;
      }
      if ( (int)v64 < 4864
        && ((*((_DWORD *)this + 423) & 0x10) != 0
         || (*((_DWORD *)this + 425) & 0x10) != 0
         || *((_BYTE *)this + 2175)
         || *((_DWORD *)this + 544)) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6181LL;
        goto LABEL_290;
      }
      if ( (int)v64 < 0x2000 && *((_BYTE *)this + 2180) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6209LL;
        goto LABEL_290;
      }
    }
    if ( (unsigned int)v36 < 0x4000 )
    {
      *((_DWORD *)this + 425) &= ~0x10u;
      *((_BYTE *)this + 2175) = 0;
    }
    if ( (unsigned int)v36 < 0x5011
      && (*((_DWORD *)this + 75) & 1) != 0
      && (*((_DWORD *)this + 425) & 0x10) != 0
      && (*((_DWORD *)this + 75) & 0x1000) != 0 )
    {
      *((_BYTE *)this + 2180) = 1;
    }
    *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2168))) & 4;
    v66 = *(_BYTE *)a3 & 0xF7 | (*((_BYTE *)this + 2174) != 0 ? 8 : 0);
    *(_BYTE *)a3 = v66;
    v67 = (v66 ^ (32 * (*((_DWORD *)this + 425) >> 4))) & 0x20 ^ v66;
    *(_BYTE *)a3 = v67;
    v68 = (v67 ^ (*((_BYTE *)this + 2175) << 6)) & 0x40 ^ v67;
    *(_BYTE *)a3 = v68;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 417);
    v69 = v68 & 0x7F | (*(_BYTE *)v45 << 7);
    *(_BYTE *)a3 = v69;
    v70 = v69 & 0xEF;
    LOBYTE(v64) = (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2180)) & 1;
    *((_BYTE *)a3 + 1) ^= v64;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 492);
    *(_BYTE *)a3 = v70;
    if ( (unsigned int)v36 >= 0x5021 )
      *(_BYTE *)a3 = v70 | (16 * (*((_BYTE *)this + 2200) & 1));
    if ( !*((_BYTE *)this + 185) )
    {
      v71 = *(_BYTE *)a3;
      v72 = *(_BYTE *)a3 & 0x40;
      if ( v72 )
      {
        if ( (unsigned int)v36 < 0x5005 && (*((_DWORD *)this + 296) || *((_DWORD *)this + 297)) )
        {
          v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
          v115[3] = *((_QWORD *)this + 24);
          goto LABEL_290;
        }
        *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ (2 * *((_BYTE *)this + 2203))) & 2;
      }
      v73 = *((_BYTE *)a3 + 1) & 1;
      LOBYTE(v64) = v72 == 0;
      if ( (v72 != 0 || v73) && (v71 & 0x20) == 0 )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = *((_QWORD *)this + 24);
        v115[4] = 6287LL;
        goto LABEL_290;
      }
      if ( v72 )
      {
        if ( v73 )
        {
          v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
          v115[3] = *((_QWORD *)this + 24);
          v115[4] = 6294LL;
          goto LABEL_290;
        }
      }
      else if ( v73 && !*((_DWORD *)this + 297) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = *((_QWORD *)this + 24);
        v115[4] = 6302LL;
        goto LABEL_290;
      }
      if ( *((_BYTE *)this + 2170) && (!*((_QWORD *)this + 85) || !*((_QWORD *)this + 86) || !*((_QWORD *)this + 87)) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6316LL;
        goto LABEL_290;
      }
      if ( (*((_DWORD *)this + 421) & 4) != 0 && !*((_QWORD *)this + 83) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6323LL;
        goto LABEL_290;
      }
      if ( *((_BYTE *)this + 2173) && (!*((_QWORD *)this + 89) || !*((_QWORD *)this + 90)) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6331LL;
        goto LABEL_290;
      }
      if ( (unsigned int)v36 < 0x300C && *((_QWORD *)this + 89) && *((_QWORD *)this + 90) )
        *((_BYTE *)this + 2173) = 1;
    }
    *((_WORD *)this + 1115) = 0;
    *((_BYTE *)this + 2232) = 0;
    if ( *((_BYTE *)this + 2172) )
    {
      if ( (unsigned int)v36 < 0x300B )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6353LL;
        goto LABEL_290;
      }
      if ( (unsigned int)v36 >= 0x4000 )
      {
        if ( (_DWORD)v36 == 0x4000 )
        {
          *((_BYTE *)this + 2231) = 1;
        }
        else
        {
          v116 = *((_DWORD *)this + 544);
          if ( !v116 )
          {
            v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
            v115[3] = 6366LL;
            goto LABEL_290;
          }
          if ( v116 <= 8 )
          {
            if ( (unsigned int)v36 > 0x5000 )
              *((_BYTE *)this + 2232) = 1;
          }
          else
          {
            v64 = *((unsigned int *)this + 492);
            if ( (int)v64 < 8704 )
            {
              if ( (int)v64 < 0x2000 || v116 != 10 )
              {
                v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
                v115[3] = 6389LL;
                goto LABEL_290;
              }
              *((_DWORD *)this + 544) = 8;
            }
            else if ( v116 > 0xA )
            {
              v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
              v115[3] = 6376LL;
              goto LABEL_290;
            }
          }
        }
      }
      else
      {
        *((_BYTE *)this + 2230) = 1;
      }
      if ( !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) && !*((_QWORD *)this + 113) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6405LL;
        goto LABEL_290;
      }
      if ( (unsigned int)v36 > 0x4002 && !*((_QWORD *)this + 97) && !*((_QWORD *)this + 108) && !*((_QWORD *)this + 112) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6417LL;
        goto LABEL_290;
      }
      if ( !*((_BYTE *)this + 2171) )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v115[3] = 6427LL;
        goto LABEL_290;
      }
    }
    v74 = *((_BYTE *)this + 185);
    *((_BYTE *)this + 2271) = 0;
    if ( v74 )
      goto LABEL_80;
    if ( (unsigned int)v36 >= 0x700A
      && *((int *)this + 492) >= 8704
      && (!*((_QWORD *)this + 65) || *((_QWORD *)this + 131)) )
    {
      *((_BYTE *)this + 2271) = 1;
    }
    if ( *((int *)this + 492) < 8960 )
    {
LABEL_80:
      *((_DWORD *)this + 420) &= 0xFFFFFFE3;
    }
    else
    {
      v99 = (*((_DWORD *)this + 420) >> 3) & 1;
      v100 = (*((_DWORD *)this + 420) >> 2) & 1;
      if ( v100 < (unsigned int)v99
        || (unsigned int)v99 < ((*((_DWORD *)this + 420) >> 4) & 1u)
        || !*((_BYTE *)this + 2271) && v100 )
      {
        v115 = (_QWORD *)WdLogNewEntry5_WdError(v99);
        v115[3] = *((_QWORD *)this + 24);
        v115[4] = -1073741811LL;
        goto LABEL_290;
      }
    }
    v75 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
    if ( *(_BYTE *)(*(_QWORD *)(v75 + 40) + 133LL)
      || v74
      || (*((int *)this + 492) < 0x2000
        ? (v76 = DXGGLOBAL::GetGlobal(v75), v77 = 0)
        : (v76 = DXGGLOBAL::GetGlobal(v75), v77 = 1),
          LODWORD(v14) = DXGGLOBAL::DeferredInitialize(v76, v77),
          (int)v14 >= 0) )
    {
      DXGADAPTER::Config = 0;
      DXGADAPTER::ReadConfig(this, a3);
      DXGADAPTER::InitializeDriverWorkarounds(this);
      v79 = (__int64 *)((char *)this + 2312);
      RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 289);
      v14 = RenderCore;
      if ( RenderCore >= 0 )
      {
        v82 = (_QWORD *)((char *)this + 2304);
        DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 288);
        v85 = DisplayCore;
        if ( DisplayCore < 0 )
        {
          if ( *v82 )
          {
            v118 = WdLogNewEntry5_WdAssertion(v84);
            *(_QWORD *)(v118 + 24) = 6537LL;
            WdLogEvent5_WdAssertion(v118);
          }
          v119 = WdLogNewEntry5_WdError(v84);
          *(_QWORD *)(v119 + 24) = this;
          *(_QWORD *)(v119 + 32) = v85;
          WdLogEvent5_WdError(v119);
          return (unsigned int)v85;
        }
        if ( *v79 )
        {
          v86 = *v82 == 0LL;
          goto LABEL_90;
        }
        v86 = *v82 == 0LL;
        if ( *v82 )
        {
LABEL_90:
          v87 = *(_BYTE *)a3 & 0xFE | !v86;
          *(_BYTE *)a3 = v87;
          v88 = v87 & 0xFD | (*v79 != 0 ? 2 : 0);
          *(_BYTE *)a3 = v88;
          if ( (v88 & 1) != 0 )
            *((_BYTE *)a3 + 1) = (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0) | *((_BYTE *)a3 + 1) & 0xFB;
          else
            *((_BYTE *)a3 + 1) &= ~4u;
          if ( !*v79 )
            *((_DWORD *)this + 421) |= 1u;
          if ( DXGADAPTER::IsDxgmms2(this) )
          {
            v91 = *((_DWORD *)this + 75);
            if ( (v91 & 4) == 0
              && (v91 & 8) == 0
              && v89
              && (unsigned int)v36 >= 0x5008
              && (!*((_QWORD *)this + 98) || !*((_QWORD *)this + 110)) )
            {
              v115 = (_QWORD *)WdLogNewEntry5_WdError(v90);
              v115[3] = 6593LL;
              goto LABEL_290;
            }
          }
          if ( *((_BYTE *)this + 2228)
            && DXGADAPTER::IsFullWDDMAdapter(v90)
            && *((int *)this + 492) >= 4608
            && !*((_BYTE *)this + 2171) )
          {
            v115 = (_QWORD *)WdLogNewEntry5_WdError(v120);
            v115[3] = 6608LL;
            goto LABEL_290;
          }
          if ( ((*((_BYTE *)this + 185) == 0) & *((_BYTE *)this + 2171)) != 0
            && (!v89
             || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v89 + 528) + 8LL) + 704LL))(*(_QWORD *)(v89 + 536))) )
          {
            *(_WORD *)((char *)this + 2171) = 0;
          }
          if ( *((_BYTE *)this + 185) )
            *((_QWORD *)this + 98) = 0LL;
          IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
          v93 = *((_DWORD *)this + 75);
          v94 = IsBddFallbackDriver ? 3 : 1;
          *((_DWORD *)this + 44) = v94;
          if ( (v93 & 0x10) != 0 && !*v82 )
          {
            DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v127.hKmdProcessHandle);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v127.hKmdProcessHandle);
            if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v101) + 74) )
            {
              v121 = WdLogNewEntry5_WdError(v102);
              *(_QWORD *)(v121 + 24) = this;
              *(_QWORD *)(v121 + 32) = -1073741735LL;
              WdLogEvent5_WdError(v121);
            }
            else
            {
              _InterlockedIncrement64((volatile signed __int64 *)this + 3);
              *((_QWORD *)this + 4) = -1LL;
              Global = DXGGLOBAL::GetGlobal(v102);
              v94 = *((_QWORD *)Global + 76);
              *((_QWORD *)Global + 74) = this;
              if ( !v94 || (DXGADAPTER *)v94 == this )
                *((_QWORD *)Global + 76) = this;
            }
            if ( v128 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v127.hKmdProcessHandle);
          }
          if ( !*((_BYTE *)this + 185) )
          {
            v95 = DXGADAPTER::InitializePowerManagement(this);
            v85 = v95;
            if ( v95 >= 0 )
              goto LABEL_105;
            v122 = WdLogNewEntry5_WdError(v94);
            *(_QWORD *)(v122 + 24) = this;
            *(_QWORD *)(v122 + 32) = v85;
            WdLogEvent5_WdError(v122);
          }
          if ( (int)v85 < 0 )
          {
LABEL_106:
            v96 = *v79;
            if ( *v79 && !*((_BYTE *)this + 185) )
            {
              v97 = DXGGLOBAL::GetGlobal(v94);
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v96 + 504) + 8LL) + 808LL))(
                *(_QWORD *)(v96 + 512),
                (__int64)v97 + 784);
            }
            if ( (*((_BYTE *)this + 300) & 1) != 0 )
            {
              v104 = *(_QWORD *)((char *)this + 268);
              *((_QWORD *)DXGGLOBAL::GetGlobal(v94) + 77) = v104;
            }
            if ( *((_BYTE *)this + 185) && (int)v85 >= 0 && !*((_QWORD *)DXGGLOBAL::GetGlobal(v94) + 75) )
            {
              v125 = DXGGLOBAL::GetGlobal(v124);
              DXGGLOBAL::SetVirtualRenderAdapter(v125, this);
            }
            return (unsigned int)v85;
          }
LABEL_105:
          if ( *((_BYTE *)this + 2228) )
          {
            if ( *((int *)this + 492) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
            {
              v123 = *((_DWORD *)this + 75);
              if ( (v123 & 4) == 0 && (v123 & 0x20) == 0 && (*((_DWORD *)this + 423) & 0x10) == 0 )
              {
                v115 = (_QWORD *)WdLogNewEntry5_WdError(v94);
                v115[3] = 6689LL;
                goto LABEL_290;
              }
            }
          }
          goto LABEL_106;
        }
        v113 = WdLogNewEntry5_WdError(v84);
        *(_QWORD *)(v113 + 24) = this;
        *(_QWORD *)(v113 + 32) = -1073741735LL;
LABEL_161:
        WdLogEvent5_WdError(v113);
        return 3221225561LL;
      }
      if ( *v79 )
      {
        v117 = WdLogNewEntry5_WdAssertion(v81);
        *(_QWORD *)(v117 + 24) = 6521LL;
        WdLogEvent5_WdAssertion(v117);
      }
      v109 = WdLogNewEntry5_WdError(v81);
      *(_QWORD *)(v109 + 24) = this;
      *(_QWORD *)(v109 + 32) = v14;
    }
    else
    {
      v109 = WdLogNewEntry5_WdError(v78);
      *(_QWORD *)(v109 + 24) = (int)v14;
    }
    goto LABEL_154;
  }
  v115 = (_QWORD *)WdLogNewEntry5_WdError(v54);
  v115[3] = this;
  v115[4] = 6074LL;
LABEL_290:
  WdLogEvent5_WdError(v115);
  return 3221225485LL;
}
