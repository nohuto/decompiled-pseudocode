/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011BBC8 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0012A50 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C0013CA0 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C010E568 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C0119530 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C01197FC (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C011D8D8 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C01201A4 (CreateDxgkSharedObjectTypes.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C0121038 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C0123830 (--0QDC_CACHE@@QEAA@_N@Z.c)
 *     ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C01A9E54 (-DeAllocate@DripsBlockerInfoList@@QEAAXXZ.c)
 *     ?Initialize@DripsBlockerInfoList@@QEAAJXZ @ 0x1C01AA9D8 (-Initialize@DripsBlockerInfoList@@QEAAJXZ.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C01AC23C (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rbx
  __int128 v2; // xmm0
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  bool v18; // cf
  int v19; // eax
  int v20; // eax
  bool v21; // al
  bool v22; // al
  bool v23; // al
  bool v24; // al
  int DxgkSharedObjectTypes; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // edi
  unsigned int v30; // esi
  enum _POOL_TYPE v31; // r14d
  DXGDIAGNOSTICS *v32; // rax
  DXGDIAGNOSTICS *v33; // rax
  DXGDIAGNOSTICS *v34; // rax
  __int64 v35; // rcx
  DXGDIAGNOSTICS *v36; // rax
  DXGSESSIONMGR *v37; // rax
  __int64 v38; // rcx
  DXGSESSIONMGR *v39; // rax
  SIZE_T v40; // rax
  PVOID v41; // rax
  EDIDCACHE *v42; // rax
  __int64 v43; // rcx
  EDIDCACHE *v44; // rax
  __int64 v45; // rcx
  struct _KPROCESS *v46; // rcx
  QDC_CACHE *v47; // rax
  bool v48; // dl
  __int64 v49; // rcx
  QDC_CACHE *v50; // rax
  NTSTATUS v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  int OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v64; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v65; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-B4h] BYREF
  int v67; // [rsp+58h] [rbp-B0h] BYREF
  int v68; // [rsp+5Ch] [rbp-ACh] BYREF
  int v69; // [rsp+60h] [rbp-A8h] BYREF
  int v70; // [rsp+64h] [rbp-A4h] BYREF
  int v71; // [rsp+68h] [rbp-A0h] BYREF
  int v72; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v73; // [rsp+70h] [rbp-98h] BYREF
  int v74; // [rsp+74h] [rbp-94h] BYREF
  int v75; // [rsp+78h] [rbp-90h] BYREF
  int v76; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v77; // [rsp+80h] [rbp-88h] BYREF
  int v78; // [rsp+84h] [rbp-84h] BYREF
  int v79; // [rsp+88h] [rbp-80h] BYREF
  int v80; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v81; // [rsp+90h] [rbp-78h] BYREF
  int v82; // [rsp+94h] [rbp-74h] BYREF
  int v83; // [rsp+98h] [rbp-70h] BYREF
  int v84; // [rsp+9Ch] [rbp-6Ch] BYREF
  _OWORD v85[6]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v86; // [rsp+108h] [rbp+0h] BYREF
  int v87; // [rsp+110h] [rbp+8h]
  const wchar_t *v88; // [rsp+118h] [rbp+10h]
  unsigned int *v89; // [rsp+120h] [rbp+18h]
  int v90; // [rsp+128h] [rbp+20h]
  _OWORD *v91; // [rsp+130h] [rbp+28h]
  int v92; // [rsp+138h] [rbp+30h]
  __int64 v93; // [rsp+140h] [rbp+38h]
  int v94; // [rsp+148h] [rbp+40h]
  const wchar_t *v95; // [rsp+150h] [rbp+48h]
  int *v96; // [rsp+158h] [rbp+50h]
  int v97; // [rsp+160h] [rbp+58h]
  int *v98; // [rsp+168h] [rbp+60h]
  int v99; // [rsp+170h] [rbp+68h]
  __int64 v100; // [rsp+178h] [rbp+70h]
  int v101; // [rsp+180h] [rbp+78h]
  const wchar_t *v102; // [rsp+188h] [rbp+80h]
  unsigned int *v103; // [rsp+190h] [rbp+88h]
  int v104; // [rsp+198h] [rbp+90h]
  int *v105; // [rsp+1A0h] [rbp+98h]
  int v106; // [rsp+1A8h] [rbp+A0h]
  __int64 v107; // [rsp+1B0h] [rbp+A8h]
  int v108; // [rsp+1B8h] [rbp+B0h]
  const wchar_t *v109; // [rsp+1C0h] [rbp+B8h]
  unsigned int *v110; // [rsp+1C8h] [rbp+C0h]
  int v111; // [rsp+1D0h] [rbp+C8h]
  int *v112; // [rsp+1D8h] [rbp+D0h]
  int v113; // [rsp+1E0h] [rbp+D8h]
  __int64 v114; // [rsp+1E8h] [rbp+E0h]
  int v115; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v116; // [rsp+1F8h] [rbp+F0h]
  int *v117; // [rsp+200h] [rbp+F8h]
  int v118; // [rsp+208h] [rbp+100h]
  int *v119; // [rsp+210h] [rbp+108h]
  int v120; // [rsp+218h] [rbp+110h]
  __int64 v121; // [rsp+220h] [rbp+118h]
  int v122; // [rsp+228h] [rbp+120h]
  const wchar_t *v123; // [rsp+230h] [rbp+128h]
  int *v124; // [rsp+238h] [rbp+130h]
  int v125; // [rsp+240h] [rbp+138h]
  int *v126; // [rsp+248h] [rbp+140h]
  int v127; // [rsp+250h] [rbp+148h]
  __int64 v128; // [rsp+258h] [rbp+150h]
  int v129; // [rsp+260h] [rbp+158h]
  const wchar_t *v130; // [rsp+268h] [rbp+160h]
  int *v131; // [rsp+270h] [rbp+168h]
  int v132; // [rsp+278h] [rbp+170h]
  int *v133; // [rsp+280h] [rbp+178h]
  int v134; // [rsp+288h] [rbp+180h]
  __int64 v135; // [rsp+290h] [rbp+188h]
  int v136; // [rsp+298h] [rbp+190h]
  const wchar_t *v137; // [rsp+2A0h] [rbp+198h]
  int *v138; // [rsp+2A8h] [rbp+1A0h]
  int v139; // [rsp+2B0h] [rbp+1A8h]
  int *v140; // [rsp+2B8h] [rbp+1B0h]
  int v141; // [rsp+2C0h] [rbp+1B8h]
  __int64 v142; // [rsp+2C8h] [rbp+1C0h]
  int v143; // [rsp+2D0h] [rbp+1C8h]
  const wchar_t *v144; // [rsp+2D8h] [rbp+1D0h]
  int *v145; // [rsp+2E0h] [rbp+1D8h]
  int v146; // [rsp+2E8h] [rbp+1E0h]
  int *v147; // [rsp+2F0h] [rbp+1E8h]
  int v148; // [rsp+2F8h] [rbp+1F0h]
  __int64 v149; // [rsp+300h] [rbp+1F8h]
  int v150; // [rsp+308h] [rbp+200h]
  const wchar_t *v151; // [rsp+310h] [rbp+208h]
  int *v152; // [rsp+318h] [rbp+210h]
  int v153; // [rsp+320h] [rbp+218h]
  int *v154; // [rsp+328h] [rbp+220h]
  int v155; // [rsp+330h] [rbp+228h]
  __int64 v156; // [rsp+338h] [rbp+230h]
  int v157; // [rsp+340h] [rbp+238h]
  const wchar_t *v158; // [rsp+348h] [rbp+240h]
  int *v159; // [rsp+350h] [rbp+248h]
  int v160; // [rsp+358h] [rbp+250h]
  int *v161; // [rsp+360h] [rbp+258h]
  int v162; // [rsp+368h] [rbp+260h]
  __int64 v163; // [rsp+370h] [rbp+268h]
  int v164; // [rsp+378h] [rbp+270h]
  _BYTE v165[40]; // [rsp+380h] [rbp+278h] BYREF

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset((char *)v85 + 8, 0, 0x58uLL);
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = *((_QWORD *)&v85[0] + 1);
  *((_OWORD *)v1 + 1) = v85[1];
  *((_OWORD *)v1 + 2) = v85[2];
  *((_OWORD *)v1 + 3) = v85[3];
  *((_QWORD *)v1 + 8) = *(_QWORD *)&v85[4];
  *((_DWORD *)v1 + 18) = DWORD2(v85[4]);
  v2 = v85[5];
  *((_DWORD *)v1 + 19) = HIDWORD(v85[4]);
  *((_OWORD *)v1 + 5) = v2;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 176)) )
  {
    v55 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    goto LABEL_40;
  }
  v4 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 42) = v4;
  if ( !v4 )
  {
    v56 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v56 + 24) = v1;
    *(_QWORD *)(v56 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v56);
    return 3221225495LL;
  }
  v8 = ExInitializeResourceLite(v4);
  v12 = v8;
  if ( v8 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
LABEL_45:
    v57[4] = v12;
    v57[3] = v1;
    goto LABEL_47;
  }
  v13 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 688), 0LL, 0LL, PagedPool, 0, 0x5F0uLL, 0x4B677844u, 0);
  v12 = v13;
  if ( v13 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v57[5] = 0LL;
    goto LABEL_45;
  }
  v1[801] = 1;
  v66 = 0;
  v75 = 0;
  v88 = L"TerminationListSizeLimit";
  v67 = 0;
  v89 = &v66;
  *(_QWORD *)&v85[0] = 0x4000000LL;
  v91 = v85;
  v95 = L"ValidateWDDMCaps";
  v96 = &v67;
  v76 = 1;
  v98 = &v75;
  v102 = L"WDDM2LockManagement";
  v103 = &v65;
  v105 = &v76;
  v109 = L"MaximumAdapterCount";
  v110 = &v64;
  v112 = &v77;
  v116 = L"InvestigationDebugParameter";
  v117 = &v68;
  v119 = &v78;
  v65 = 0;
  v77 = 32;
  v64 = 0;
  v68 = 0;
  v78 = 0;
  v79 = 0;
  v69 = 0;
  v70 = 0;
  v80 = 0;
  v81 = 0;
  v71 = 0;
  v82 = 0;
  v72 = 0;
  v83 = 0;
  v73 = 0;
  v84 = 0;
  v74 = 0;
  v86 = 0LL;
  v87 = 288;
  v90 = 67108868;
  v92 = 4;
  v93 = 0LL;
  v94 = 288;
  v97 = 67108868;
  v99 = 4;
  v100 = 0LL;
  v101 = 288;
  v104 = 67108868;
  v106 = 4;
  v107 = 0LL;
  v108 = 288;
  v111 = 67108868;
  v113 = 4;
  v114 = 0LL;
  v115 = 288;
  v118 = 67108868;
  v120 = 4;
  v121 = 0LL;
  v122 = 288;
  v123 = L"EnableIgnoreWin32ProcessStatus";
  v125 = 67108868;
  v124 = &v69;
  v126 = &v79;
  v130 = L"EnableHMDTestMode";
  v131 = &v70;
  v133 = &v80;
  v137 = L"DisableCcdDatabase";
  v138 = &v71;
  v140 = &v81;
  v144 = L"DisableHpdHandling";
  v145 = &v72;
  v147 = &v82;
  v151 = L"PreserveFirmwareMode";
  v152 = &v73;
  v154 = &v83;
  v158 = L"PreventFullscreenWireFormatChange";
  v159 = &v74;
  v129 = 288;
  v132 = 67108868;
  v136 = 288;
  v139 = 67108868;
  v143 = 288;
  v146 = 67108868;
  v150 = 288;
  v153 = 67108868;
  v157 = 288;
  v160 = 67108868;
  v161 = &v84;
  v127 = 4;
  v128 = 0LL;
  v134 = 4;
  v135 = 0LL;
  v141 = 4;
  v142 = 0LL;
  v148 = 4;
  v149 = 0LL;
  v155 = 4;
  v156 = 0LL;
  v162 = 4;
  v163 = 0LL;
  v164 = 0;
  memset(v165, 0, sizeof(v165));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v86, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 66) = 0x4000000LL;
    v1[536] = 0;
    *((_DWORD *)v1 + 203) = 1;
    *((_DWORD *)v1 + 204) = 32;
    *((_DWORD *)v1 + 276) = 0;
    *((_DWORD *)v1 + 280) = 0;
  }
  else
  {
    v17 = v67 == 0;
    *((_QWORD *)v1 + 66) = v66;
    v18 = v65 < 2;
    v1[536] = !v17;
    v19 = 1;
    if ( v18 )
      v19 = v65;
    *((_DWORD *)v1 + 203) = v19;
    v20 = v64;
    if ( v64 < 4 )
    {
      v20 = 4;
    }
    else if ( v64 > 0x400 )
    {
      v20 = 1024;
    }
    v17 = v70 == 1;
    v64 = v20;
    *((_DWORD *)v1 + 204) = v20;
    *((_DWORD *)v1 + 276) = v68;
    *((_DWORD *)v1 + 280) = v69;
    v21 = v17;
    v17 = v71 == 0;
    v1[1569] = v21;
    v22 = !v17;
    v17 = v72 == 0;
    v1[1616] = v22;
    v23 = !v17;
    v17 = v73 == 0;
    v1[1617] = v23;
    v24 = !v17;
    v17 = v74 == 0;
    v1[1618] = v24;
    v1[1619] = !v17;
  }
  *((_DWORD *)v1 + 131) = 0;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v12 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes >= 0 )
  {
    v29 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
    v30 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
    v31 = g_IsInternalReleaseOrDbg != 0 ? 512 : PagedPool;
    v32 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4B677844u, PagedPool);
    if ( v32 )
      v33 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v32, v29, v31);
    else
      v33 = 0LL;
    *((_QWORD *)v1 + 71) = v33;
    v34 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4B677844u, PagedPool);
    if ( v34 )
      v36 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v34, v30, v31);
    else
      v36 = 0LL;
    *((_QWORD *)v1 + 72) = v36;
    if ( *((_QWORD *)v1 + 71) )
    {
      if ( v36 )
      {
        v37 = (DXGSESSIONMGR *)operator new(0xF8uLL, 0x4B677844u, (POOL_TYPE)512);
        if ( v37 )
          v39 = DXGSESSIONMGR::DXGSESSIONMGR(v37);
        else
          v39 = 0LL;
        *((_QWORD *)v1 + 73) = v39;
        if ( v39 )
        {
          v40 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 204) + 31) >> 5);
          if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 204) + 31) >> 5, 4uLL) )
            v40 = -1LL;
          v41 = operator new(v40, 0x4B677844u, PagedPool);
          *((_QWORD *)v1 + 64) = v41;
          if ( v41 )
          {
            memset(v41, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 204) + 31) >> 5));
            RtlInitializeBitMap((PRTL_BITMAP)v1 + 31, *((PULONG *)v1 + 64), *((_DWORD *)v1 + 204));
            v42 = (EDIDCACHE *)operator new(0x278uLL, 0x4B677844u, PagedPool);
            if ( v42 )
              v44 = EDIDCACHE::EDIDCACHE(v42);
            else
              v44 = 0LL;
            *((_QWORD *)v1 + 85) = v44;
            if ( !v44 )
            {
              v59 = WdLogNewEntry5_WdLowResource(v43);
              *(_QWORD *)(v59 + 24) = 1695LL;
              WdLogEvent5_WdLowResource(v59);
            }
            if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 103, 0LL, 0LL) < 0 )
            {
              v55 = WdLogNewEntry5_WdLowResource(v45);
              *(_QWORD *)(v55 + 24) = 1706LL;
            }
            else
            {
              v46 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 103) + 48LL);
              if ( PsInitialSystemProcess != v46 )
              {
                v60 = WdLogNewEntry5_WdAssertion(v46);
                *(_QWORD *)(v60 + 24) = 1709LL;
                WdLogEvent5_WdAssertion(v60);
              }
              v47 = (QDC_CACHE *)operator new(0x258uLL, 0x4B677844u, PagedPool);
              if ( v47 )
                v50 = QDC_CACHE::QDC_CACHE(v47, v48);
              else
                v50 = 0LL;
              *((_QWORD *)v1 + 117) = v50;
              if ( v50 )
              {
                KeInitializeSpinLock(&SpinLock);
                DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1108));
                DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
                KeInitializeTimer((PKTIMER)v1 + 20);
                KeInitializeDpc((PRKDPC)v1 + 21, (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
                LOBYTE(OutputBuffer) = 0;
                v51 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
                v53 = v51;
                if ( v51 < 0 )
                {
                  v61 = WdLogNewEntry5_WdError(v52);
                  *(_QWORD *)(v61 + 24) = v53;
                }
                else
                {
                  if ( !(_BYTE)OutputBuffer )
                  {
LABEL_37:
                    *((_QWORD *)v1 + 179) = v1;
                    *((_QWORD *)v1 + 178) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
                    *((_QWORD *)v1 + 176) = 0LL;
                    DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
                    *((_DWORD *)v1 + 389) &= ~1u;
                    *((_DWORD *)v1 + 386) = 10;
                    *((_DWORD *)v1 + 387) = 50;
                    *((_DWORD *)v1 + 388) = 30;
                    KeInitializeSpinLock((PKSPIN_LOCK)v1 + 143);
                    return 0LL;
                  }
                  if ( (int)DripsBlockerInfoList::Initialize((DripsBlockerInfoList *)(v1 + 1528)) >= 0 )
                  {
                    DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
                    goto LABEL_37;
                  }
                  DripsBlockerInfoList::DeAllocate((DripsBlockerInfoList *)(v1 + 1528));
                  v61 = WdLogNewEntry5_WdError(v62);
                  *(_QWORD *)(v61 + 24) = 1766LL;
                }
                WdLogEvent5_WdError(v61);
                goto LABEL_37;
              }
              v55 = WdLogNewEntry5_WdLowResource(v49);
              *(_QWORD *)(v55 + 24) = 1714LL;
            }
          }
          else
          {
            v55 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v55 + 24) = 1685LL;
          }
        }
        else
        {
          v55 = WdLogNewEntry5_WdLowResource(v38);
          *(_QWORD *)(v55 + 24) = 1678LL;
        }
        goto LABEL_40;
      }
      v55 = WdLogNewEntry5_WdLowResource(v35);
      v58 = v30;
    }
    else
    {
      v55 = WdLogNewEntry5_WdLowResource(v35);
      v58 = v29;
    }
    *(_QWORD *)(v55 + 24) = v58;
LABEL_40:
    WdLogEvent5_WdLowResource(v55);
    return 3221225495LL;
  }
  v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
  v57[3] = v12;
LABEL_47:
  WdLogEvent5_WdWarning(v57);
  return (unsigned int)v12;
}
