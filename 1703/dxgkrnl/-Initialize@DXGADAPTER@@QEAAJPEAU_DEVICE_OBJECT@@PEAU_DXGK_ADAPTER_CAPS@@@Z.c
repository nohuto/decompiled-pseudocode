/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0010498 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00216C8 (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D31BC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010AC8C (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C010C860 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C010D948 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C010DD28 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C0110460 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C01104D0 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     DpiGetAdapterInfo @ 0x1C01127F8 (DpiGetAdapterInfo.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01187B4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0120958 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0196F18 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(
        DXGADAPTER *this,
        struct _DEVICE_OBJECT *a2,
        struct _DXGK_ADAPTER_CAPS *a3,
        __int64 a4)
{
  __int64 v7; // rax
  struct _ERESOURCE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  DXGGLOBAL *v22; // rcx
  unsigned int v23; // eax
  struct _ERESOURCE *v24; // rax
  NTSTATUS v25; // eax
  int AdapterInfo; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  const struct _GUID *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned __int8 v52; // r8
  _QWORD *v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  int v59; // eax
  _DWORD *v60; // r13
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rbx
  SIZE_T v67; // rax
  unsigned __int64 v68; // r14
  PVOID v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r9
  char v83; // al
  int v84; // eax
  char v85; // dl
  char v86; // dl
  char v87; // dl
  char v88; // dl
  unsigned int v89; // eax
  __int64 v90; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int v92; // edx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 *v95; // r12
  int RenderCore; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  _QWORD *v102; // rbx
  int DisplayCore; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r14
  __int64 v109; // rax
  __int64 v110; // rax
  bool v111; // zf
  char v112; // dl
  char v113; // cl
  __int64 v114; // rdx
  DXGADAPTER *v115; // rcx
  int v116; // eax
  __int64 v117; // rcx
  bool IsBddFallbackDriver; // cf
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  struct DXGGLOBAL *v133; // rax
  int v134; // eax
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rbx
  struct DXGGLOBAL *v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  DXGGLOBAL *v144; // rax
  int v145; // [rsp+28h] [rbp-69h]
  struct _DXGKARG_QUERYADAPTERINFO v146; // [rsp+38h] [rbp-59h] BYREF
  char v147; // [rsp+68h] [rbp-29h]
  struct _DXGKARG_QUERYADAPTERINFO v148; // [rsp+70h] [rbp-21h] BYREF
  unsigned int *v149; // [rsp+A0h] [rbp+Fh]
  int v150; // [rsp+A8h] [rbp+17h]
  __int64 v151; // [rsp+B0h] [rbp+1Fh]
  int v152; // [rsp+B8h] [rbp+27h]
  unsigned int v153; // [rsp+F8h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 5424LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 44) )
    return 3221225485LL;
  v8 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 18) = v8;
  if ( !v8 )
    goto LABEL_5;
  v15 = ExInitializeResourceLite(v8);
  v20 = v15;
  if ( v15 < 0 )
    goto LABEL_8;
  v22 = (DXGGLOBAL *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 24) = a2;
  v23 = DXGGLOBAL::AcquireAdapterOrdinal(v22);
  *((_DWORD *)this + 50) = v23;
  if ( v23 == -1 )
    return 3221225495LL;
  v24 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 29) = v24;
  if ( !v24 )
  {
LABEL_5:
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v13);
    return 3221225495LL;
  }
  v25 = ExInitializeResourceLite(v24);
  v20 = v25;
  if ( v25 < 0 )
  {
LABEL_8:
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = v20;
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v20;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *((_QWORD *)this + 5) = -1LL;
  AdapterInfo = DpiGetAdapterInfo(a2, (char *)this + 1120, (char *)this + 240, (char *)this + 1512);
  v20 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = v20;
    WdLogEvent5_WdWarning(v31);
    memset((char *)this + 240, 0, 0x370uLL);
    memset((char *)this + 1120, 0, 0xC8uLL);
    return (unsigned int)v20;
  }
  if ( DXGADAPTER::IsXBoxOneDevice(this) )
    *((_BYTE *)DXGGLOBAL::GetGlobal(v33, v32, v34, v35) + 1488) = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (__int64)&unk_1C00497CC,
    0,
    v145);
  v40 = *((_DWORD *)this + 75);
  if ( (v40 & 8) != 0 && (v40 & 0x10) != 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
    *(_QWORD *)(v41 + 24) = 5591LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !*((_QWORD *)this + 39) )
  {
    v42 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v42 + 24) = 5598LL;
LABEL_22:
    WdLogEvent5_WdError(v42);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 56) )
    *((_QWORD *)this + 56) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 118) )
    *((_QWORD *)this + 118) = DxgkQueryFSEBlock;
  v43 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v36, v38, v39, (char *)this + 1320);
  v48 = v43;
  if ( v43 < 0 )
  {
    v49 = WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = v48;
LABEL_30:
    memset((char *)this + 1320, 0, 0xB8uLL);
    goto LABEL_31;
  }
  if ( *((_WORD *)this + 661) < 4u )
    goto LABEL_30;
LABEL_31:
  v50 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v51 = *(unsigned int *)(*(_QWORD *)(v50 + 40) + 28LL);
  *((_DWORD *)this + 376) = v51;
  if ( (unsigned int)v51 >= 0x7000 && *((_DWORD *)this + 290) && *((_DWORD *)this + 291) )
  {
    v52 = 0;
LABEL_39:
    DXGADAPTER::SetModeBehavior(this, v44, v52);
    goto LABEL_40;
  }
  if ( (unsigned int)v51 >= 0x6002 && *((_DWORD *)this + 290) && *((_DWORD *)this + 291) )
  {
    v52 = 1;
    goto LABEL_39;
  }
LABEL_40:
  if ( (unsigned int)(v51 - 20480) > 5 )
  {
    v146.Type = DXGKQAITYPE_DRIVERCAPS;
    v146.pOutputData = (char *)this + 1608;
    v146.OutputDataSize = 576;
    v146.pInputData = 0LL;
    v146.InputDataSize = 0;
    if ( (unsigned int)v51 <= 0x5010 )
    {
      if ( (unsigned int)v51 < 0x4000 )
      {
        if ( (unsigned int)v51 < 0x3000 )
        {
          if ( (unsigned int)v51 < 0x2001 )
          {
            if ( (unsigned int)v51 >= 0x2000 || (unsigned int)v51 < 0x104E )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v50, v44);
              v53[3] = v51;
              goto LABEL_265;
            }
            v146.OutputDataSize = 336;
          }
          else
          {
            v146.OutputDataSize = 528;
          }
        }
        else
        {
          v146.OutputDataSize = 544;
        }
      }
      else
      {
        v146.OutputDataSize = 552;
      }
    }
    else
    {
      v146.OutputDataSize = 576;
    }
    v54 = DXGADAPTER::DdiQueryAdapterInfo(this, &v146, v46);
    v20 = v54;
    if ( v54 < 0 )
    {
      v58 = WdLogNewEntry5_WdError(v56, v55);
      *(_QWORD *)(v58 + 24) = v20;
LABEL_55:
      WdLogEvent5_WdError(v58);
      return (unsigned int)v20;
    }
    if ( *((_BYTE *)this + 186) )
    {
      *((_BYTE *)a3 + 1) &= ~1u;
      *(_BYTE *)a3 &= 0x7Bu;
      *((_BYTE *)this + 2148) = 0;
    }
    if ( (unsigned int)v51 >= 0x5023 )
    {
      if ( g_bCreateParavirtualizedGpu )
      {
        v59 = *((_DWORD *)this + 75);
        if ( (v59 & 4) == 0 && (v59 & 0x10) == 0 )
          *((_DWORD *)this + 419) |= 0x400u;
      }
    }
    v60 = (_DWORD *)((char *)this + 2184);
    *((_DWORD *)this + 546) = 0;
    if ( (unsigned int)v51 >= 0x5010 && !*((_BYTE *)this + 186) )
    {
      v148.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
      v148.pInputData = 0LL;
      v148.InputDataSize = 0;
      v148.pOutputData = (char *)this + 2184;
      v148.OutputDataSize = 4;
      v61 = DXGADAPTER::DdiQueryAdapterInfo(this, &v148, v57);
      if ( v61 < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v63, v62, v64, v65) + 24) = v61;
        *v60 = 0;
        if ( *((int *)this + 486) >= 8704 )
          *v60 |= 2u;
      }
    }
    v66 = *((unsigned int *)this + 62);
    v67 = 48 * v66;
    v68 = v66;
    if ( !is_mul_ok(v66, 0x30uLL) )
      v67 = -1LL;
    v69 = operator new[](v67, 0x4B677844u, (POOL_TYPE)512);
    *((_QWORD *)this + 274) = v69;
    if ( !v69 )
    {
      v71 = WdLogNewEntry5_WdLowResource(v70);
      *(_QWORD *)(v71 + 24) = 5942LL;
      WdLogEvent5_WdLowResource(v71);
      return 3221225495LL;
    }
    memset(v69, 0, 48 * v66);
    if ( *((int *)this + 486) >= 0x2000 && (unsigned int)v51 >= 0x5005 )
    {
      *((_DWORD *)this + 550) = 0;
      v72 = 0LL;
      v153 = 0;
      if ( !(_DWORD)v66 )
      {
LABEL_77:
        if ( *((_DWORD *)this + 550) > 0x40u )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
          v53[3] = this;
          v53[4] = 64LL;
          v53[5] = *((unsigned int *)this + 550);
          goto LABEL_265;
        }
        if ( (*((_DWORD *)this + 418) & 1) == 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
          v53[3] = this;
          v53[4] = 6007LL;
          goto LABEL_265;
        }
LABEL_83:
        if ( (unsigned int)v51 >= 0x3001 )
        {
          v84 = *((_DWORD *)this + 486);
          if ( v84 != 4096 && v84 != 4608 && v84 != 4864 && v84 != 0x2000 && v84 != 8448 && v84 != 8704 )
          {
            v42 = WdLogNewEntry5_WdError(v73, v72);
            *(_QWORD *)(v42 + 24) = *((int *)this + 486);
            goto LABEL_22;
          }
        }
        else
        {
          *((_DWORD *)this + 486) = 4096;
        }
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v73, v72, v74, v75) + 536) || (v83 = 1, (*((_DWORD *)this + 75) & 8) != 0) )
          v83 = 0;
        *((_BYTE *)this + 2204) = v83;
        if ( v83 )
        {
          v81 = *((unsigned int *)this + 486);
          if ( (int)v81 < 4608
            && (*((_DWORD *)this + 534)
             || *((_DWORD *)this + 535)
             || *((_BYTE *)this + 2144)
             || *((_BYTE *)this + 2145)
             || *((_BYTE *)this + 2146)
             || (*((_DWORD *)this + 415) & 0x10000000) != 0
             || (*((_DWORD *)this + 418) & 0x14) != 0
             || *((_BYTE *)this + 2147)
             || *((_BYTE *)this + 2149)
             || *((_BYTE *)this + 2150)) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6098LL;
            goto LABEL_265;
          }
          if ( (int)v81 < 4864
            && ((*((_DWORD *)this + 417) & 0x10) != 0
             || (*((_DWORD *)this + 419) & 0x10) != 0
             || *((_BYTE *)this + 2151)
             || *((_DWORD *)this + 538)) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6113LL;
            goto LABEL_265;
          }
          if ( (int)v81 < 0x2000 && *((_BYTE *)this + 2156) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6141LL;
            goto LABEL_265;
          }
        }
        if ( (unsigned int)v51 < 0x4000 )
        {
          *((_DWORD *)this + 419) &= ~0x10u;
          *((_BYTE *)this + 2151) = 0;
        }
        if ( (unsigned int)v51 < 0x5011 )
        {
          v81 = *((unsigned int *)this + 75);
          if ( (v81 & 1) != 0 && (*((_DWORD *)this + 419) & 0x10) != 0 && (v81 & 0x1000) != 0 )
            *((_BYTE *)this + 2156) = 1;
        }
        *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2144))) & 4;
        v85 = *(_BYTE *)a3 & 0xF7 | (8 * (*((_BYTE *)this + 2150) != 0));
        *(_BYTE *)a3 = v85;
        v86 = (v85 ^ (32 * (*((_DWORD *)this + 419) >> 4))) & 0x20 ^ v85;
        *(_BYTE *)a3 = v86;
        v87 = (v86 ^ (*((_BYTE *)this + 2151) << 6)) & 0x40 ^ v86;
        *(_BYTE *)a3 = v87;
        *((_DWORD *)a3 + 1) = *((_DWORD *)this + 411);
        v88 = (*(_BYTE *)v60 << 7) | v87 & 0x7F;
        *(_BYTE *)a3 = v88;
        LOBYTE(v80) = v88 & 0xEF;
        LOBYTE(v81) = (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2156)) & 1;
        *((_BYTE *)a3 + 1) ^= v81;
        *((_DWORD *)a3 + 2) = *((_DWORD *)this + 486);
        *(_BYTE *)a3 = v80;
        if ( (unsigned int)v51 >= 0x5021 )
          *(_BYTE *)a3 = v80 ^ (v80 ^ (16 * *((_BYTE *)this + 2176))) & 0x10;
        if ( !*((_BYTE *)this + 186) )
        {
          if ( (*(_BYTE *)a3 & 0x40) != 0 )
          {
            if ( (unsigned int)v51 < 0x5005 && (*((_DWORD *)this + 290) || *((_DWORD *)this + 291)) )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
              v53[3] = *((_QWORD *)this + 24);
              goto LABEL_265;
            }
            *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ (2 * *((_BYTE *)this + 2179))) & 2;
          }
          LOBYTE(v80) = *(_BYTE *)a3;
          LOBYTE(v81) = *(_BYTE *)a3 & 0x40;
          if ( ((_BYTE)v81 || (*((_BYTE *)a3 + 1) & 1) != 0) && (v80 & 0x20) == 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = *((_QWORD *)this + 24);
            v53[4] = 6219LL;
            goto LABEL_265;
          }
          if ( (_BYTE)v81 )
          {
            if ( (*((_BYTE *)a3 + 1) & 1) != 0 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
              v53[3] = *((_QWORD *)this + 24);
              v53[4] = 6226LL;
              goto LABEL_265;
            }
          }
          else if ( (*((_BYTE *)a3 + 1) & 1) != 0 && !*((_DWORD *)this + 291) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = *((_QWORD *)this + 24);
            v53[4] = 6234LL;
            goto LABEL_265;
          }
          if ( *((_BYTE *)this + 2146)
            && (!*((_QWORD *)this + 85) || !*((_QWORD *)this + 86) || !*((_QWORD *)this + 87)) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6248LL;
            goto LABEL_265;
          }
          if ( (*((_DWORD *)this + 415) & 4) != 0 && !*((_QWORD *)this + 83) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6255LL;
            goto LABEL_265;
          }
          if ( *((_BYTE *)this + 2149) && (!*((_QWORD *)this + 89) || !*((_QWORD *)this + 90)) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6263LL;
            goto LABEL_265;
          }
          if ( (unsigned int)v51 < 0x300C && *((_QWORD *)this + 89) && *((_QWORD *)this + 90) )
            *((_BYTE *)this + 2149) = 1;
        }
        *((_WORD *)this + 1103) = 0;
        *((_BYTE *)this + 2208) = 0;
        if ( *((_BYTE *)this + 2148) )
        {
          if ( (unsigned int)v51 < 0x300B )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6285LL;
            goto LABEL_265;
          }
          if ( (unsigned int)v51 >= 0x4000 )
          {
            if ( (_DWORD)v51 == 0x4000 )
            {
              *((_BYTE *)this + 2207) = 1;
            }
            else
            {
              v89 = *((_DWORD *)this + 538);
              if ( !v89 )
              {
                v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
                v53[3] = 6298LL;
                goto LABEL_265;
              }
              if ( v89 > 8 )
              {
                v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
                v53[3] = 6303LL;
                goto LABEL_265;
              }
              if ( (unsigned int)v51 > 0x5000 )
                *((_BYTE *)this + 2208) = 1;
            }
          }
          else
          {
            *((_BYTE *)this + 2206) = 1;
          }
          if ( !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) && !*((_QWORD *)this + 113) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6318LL;
            goto LABEL_265;
          }
          if ( (unsigned int)v51 > 0x4002
            && !*((_QWORD *)this + 97)
            && !*((_QWORD *)this + 108)
            && !*((_QWORD *)this + 112) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6330LL;
            goto LABEL_265;
          }
          if ( !*((_BYTE *)this + 2147) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
            v53[3] = 6340LL;
            goto LABEL_265;
          }
        }
        LOBYTE(v80) = *((_BYTE *)this + 186);
        *((_BYTE *)this + 2246) = 0;
        if ( !(_BYTE)v80
          && (unsigned int)v51 >= 0x700A
          && *((int *)this + 486) >= 8704
          && (!*((_QWORD *)this + 65) || *((_QWORD *)this + 131)) )
        {
          *((_BYTE *)this + 2246) = 1;
        }
        v90 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
        if ( !*(_BYTE *)(*(_QWORD *)(v90 + 40) + 133LL) && !(_BYTE)v80 )
        {
          if ( *((int *)this + 486) >= 0x2000 )
          {
            Global = DXGGLOBAL::GetGlobal(v90, v80, 0x4000LL, v82);
            v92 = 1;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal(v90, v80, 0x4000LL, v82);
            v92 = 0;
          }
          LODWORD(v20) = DXGGLOBAL::DeferredInitialize(Global, v92);
          if ( (int)v20 < 0 )
          {
            v58 = WdLogNewEntry5_WdError(v94, v93);
            *(_QWORD *)(v58 + 24) = (int)v20;
            goto LABEL_55;
          }
        }
        DXGADAPTER::Config = 0;
        DXGADAPTER::ReadConfig(this, a3);
        DXGADAPTER::InitializeDriverWorkarounds(this);
        v95 = (__int64 *)((char *)this + 2288);
        *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ (32 * (*((_DWORD *)this + 967) >> 6))) & 0x20;
        RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 286);
        v20 = RenderCore;
        if ( RenderCore < 0 )
        {
          if ( *v95 )
          {
            v101 = WdLogNewEntry5_WdAssertion(v98, v97, v99, v100);
            *(_QWORD *)(v101 + 24) = 6409LL;
            WdLogEvent5_WdAssertion(v101);
          }
          v58 = WdLogNewEntry5_WdError(v98, v97);
          *(_QWORD *)(v58 + 24) = this;
          *(_QWORD *)(v58 + 32) = v20;
          goto LABEL_55;
        }
        v102 = (_QWORD *)((char *)this + 2280);
        DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 285);
        v108 = DisplayCore;
        if ( DisplayCore < 0 )
        {
          if ( *v102 )
          {
            v109 = WdLogNewEntry5_WdAssertion(v105, v104, v106, v107);
            *(_QWORD *)(v109 + 24) = 6425LL;
            WdLogEvent5_WdAssertion(v109);
          }
          v110 = WdLogNewEntry5_WdError(v105, v104);
          *(_QWORD *)(v110 + 24) = this;
          *(_QWORD *)(v110 + 32) = v108;
          WdLogEvent5_WdError(v110);
          return (unsigned int)v108;
        }
        if ( *v95 )
        {
          v111 = *v102 == 0LL;
        }
        else
        {
          v111 = *v102 == 0LL;
          if ( !*v102 )
          {
            v42 = WdLogNewEntry5_WdError(v105, v104);
            *(_QWORD *)(v42 + 24) = this;
            *(_QWORD *)(v42 + 32) = -1073741735LL;
            goto LABEL_22;
          }
        }
        v112 = *(_BYTE *)a3 & 0xFE | !v111;
        *(_BYTE *)a3 = v112;
        v113 = v112 & 0xFD | (*v95 != 0 ? 2 : 0);
        *(_BYTE *)a3 = v113;
        if ( (v113 & 1) != 0 )
          *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ (4 * (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0))) & 4;
        else
          *((_BYTE *)a3 + 1) &= ~4u;
        if ( !*v95 )
          *((_DWORD *)this + 415) |= 1u;
        if ( DXGADAPTER::IsDxgmms2(this) )
        {
          v116 = *((_DWORD *)this + 75);
          if ( (v116 & 4) == 0
            && (v116 & 8) == 0
            && v114
            && (unsigned int)v51 >= 0x5008
            && (!*((_QWORD *)this + 98) || !*((_QWORD *)this + 110)) )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v115, v114);
            v53[3] = 6481LL;
            goto LABEL_265;
          }
        }
        if ( *((_BYTE *)this + 2204)
          && DXGADAPTER::IsFullWDDMAdapter(v115)
          && *((int *)this + 486) >= 4608
          && !*((_BYTE *)this + 2147) )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v117, v114);
          v53[3] = 6496LL;
          goto LABEL_265;
        }
        if ( ((*((_BYTE *)this + 186) == 0) & *((_BYTE *)this + 2147)) != 0
          && (!v114
           || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v114 + 432) + 8LL) + 704LL))(*(_QWORD *)(v114 + 440))) )
        {
          *(_WORD *)((char *)this + 2147) = 0;
        }
        if ( *((_BYTE *)this + 186) )
          *((_QWORD *)this + 98) = 0LL;
        IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
        v122 = *((_DWORD *)this + 75);
        v123 = IsBddFallbackDriver ? 3 : 1;
        *((_DWORD *)this + 44) = v123;
        if ( (v122 & 0x10) != 0 && !*v102 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v146.hKmdProcessHandle);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v146.hKmdProcessHandle);
          if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v125, v124, v126, v127) + 74) )
          {
            v132 = WdLogNewEntry5_WdError(v129, v128);
            *(_QWORD *)(v132 + 24) = this;
            *(_QWORD *)(v132 + 32) = -1073741735LL;
            WdLogEvent5_WdError(v132);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)this + 3);
            *((_QWORD *)this + 4) = -1LL;
            v133 = DXGGLOBAL::GetGlobal(v129, v128, v130, v131);
            v123 = *((_QWORD *)v133 + 76);
            *((_QWORD *)v133 + 74) = this;
            if ( !v123 || (DXGADAPTER *)v123 == this )
              *((_QWORD *)v133 + 76) = this;
          }
          if ( v147 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v146.hKmdProcessHandle, v119, v120, v121);
        }
        if ( !*((_BYTE *)this + 186) )
        {
          v134 = DXGADAPTER::InitializePowerManagement(this);
          v108 = v134;
          if ( v134 >= 0 )
            goto LABEL_248;
          v135 = WdLogNewEntry5_WdError(v123, v119);
          *(_QWORD *)(v135 + 24) = this;
          *(_QWORD *)(v135 + 32) = v108;
          WdLogEvent5_WdError(v135);
        }
        if ( (int)v108 < 0 )
        {
LABEL_255:
          v137 = *v95;
          if ( *v95 && !*((_BYTE *)this + 186) )
          {
            v138 = DXGGLOBAL::GetGlobal(v123, v119, v120, v121);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v137 + 408) + 8LL) + 808LL))(
              *(_QWORD *)(v137 + 416),
              (__int64)v138 + 784);
          }
          if ( (*((_BYTE *)this + 300) & 1) != 0 )
          {
            v139 = *(_QWORD *)((char *)this + 268);
            *((_QWORD *)DXGGLOBAL::GetGlobal(v123, v119, v120, v121) + 77) = v139;
          }
          if ( *((_BYTE *)this + 186)
            && (int)v108 >= 0
            && !*((_QWORD *)DXGGLOBAL::GetGlobal(v123, v119, v120, v121) + 75) )
          {
            v144 = DXGGLOBAL::GetGlobal(v141, v140, v142, v143);
            DXGGLOBAL::SetVirtualRenderAdapter(v144, this);
          }
          return (unsigned int)v108;
        }
LABEL_248:
        if ( *((_BYTE *)this + 2204) )
        {
          if ( *((int *)this + 486) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            v136 = *((_DWORD *)this + 75);
            if ( (v136 & 4) == 0 && (v136 & 0x20) == 0 && (*((_DWORD *)this + 417) & 0x10) == 0 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v123, v119);
              v53[3] = 6577LL;
              goto LABEL_265;
            }
          }
        }
        goto LABEL_255;
      }
      while ( 1 )
      {
        LODWORD(v148.hKmdProcessHandle) = 15;
        v149 = &v153;
        v150 = 4;
        v152 = 24;
        v151 = *((_QWORD *)this + 274) + 48LL * (unsigned int)v72;
        v76 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)&v148.hKmdProcessHandle, v74);
        v78 = v76;
        if ( v76 < 0 )
          break;
        v72 = v153 + 1;
        v73 = *(unsigned __int16 *)(*((_QWORD *)this + 274) + 48LL * v153);
        *((_DWORD *)this + 550) += v73;
        v153 = v72;
        if ( (unsigned int)v72 >= (unsigned int)v66 )
          goto LABEL_77;
      }
      v79 = WdLogNewEntry5_WdEvent(v77);
      *(_QWORD *)(v79 + 24) = v78;
      WdLogEvent5_WdEvent(v79);
    }
    if ( (_DWORD)v66 )
    {
      v72 = 0LL;
      do
      {
        *(_WORD *)(v72 + *((_QWORD *)this + 274)) = *((_WORD *)this + 842);
        *(_DWORD *)(*((_QWORD *)this + 274) + v72 + 16) ^= (*(_DWORD *)(*((_QWORD *)this + 274) + v72 + 16) ^ (*((_DWORD *)this + 419) >> 7)) & 1;
        *(_DWORD *)(*((_QWORD *)this + 274) + v72 + 16) ^= (*(_DWORD *)(*((_QWORD *)this + 274) + v72 + 16) ^ (*((_DWORD *)this + 419) >> 5)) & 2;
        *(_WORD *)(*((_QWORD *)this + 274) + v72 + 2) = *((_WORD *)this + 840);
        v73 = *((_QWORD *)this + 274);
        *(_QWORD *)(v73 + v72 + 8) = *((_QWORD *)this + 24);
        v72 += 48LL;
        --v68;
      }
      while ( v68 );
    }
    goto LABEL_83;
  }
  v53 = (_QWORD *)WdLogNewEntry5_WdError(v50, v44);
  v53[3] = 5673LL;
LABEL_265:
  WdLogEvent5_WdError(v53);
  return 3221225485LL;
}
