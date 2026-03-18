/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C019D420 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0032648 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C0038348 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00F84AC (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C019D8D8 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C019D95C (-DeAllocate@DripsBlockerInfoList@@QEAAXXZ.c)
 *     ?Initialize@DripsBlockerInfoList@@QEAAJXZ @ 0x1C019F64C (-Initialize@DripsBlockerInfoList@@QEAAJXZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C019F7C4 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C01A1600 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C01A8624 (--0EDIDCACHE@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C01A9F78 (CreateDxgkSharedObjectTypes.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C01C43CC (--0QDC_CACHE@@QEAA@_N@Z.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C01CE034 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C01EB48C (-Initialize@DXGBLACKBOX@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rbx
  __int128 v2; // xmm0
  __int64 v3; // rcx
  __int64 v4; // rax
  struct _ERESOURCE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  bool v22; // cf
  int v23; // eax
  int v24; // eax
  bool v25; // al
  bool v26; // al
  bool v27; // al
  bool v28; // al
  int DxgkSharedObjectTypes; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // edi
  unsigned int v34; // esi
  POOL_TYPE v35; // r14d
  DXGDIAGNOSTICS *v36; // rax
  DXGDIAGNOSTICS *v37; // rax
  DXGDIAGNOSTICS *v38; // rax
  __int64 v39; // rcx
  DXGDIAGNOSTICS *v40; // rax
  __int64 v41; // rcx
  DXGSESSIONMGR *v42; // rax
  __int64 v43; // rcx
  DXGSESSIONMGR *v44; // rax
  SIZE_T v45; // rax
  PVOID v46; // rax
  EDIDCACHE *v47; // rax
  __int64 v48; // rcx
  EDIDCACHE *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  struct _KPROCESS *v52; // rcx
  __int64 v53; // rax
  QDC_CACHE *v54; // rax
  bool v55; // dl
  __int64 v56; // rcx
  QDC_CACHE *v57; // rax
  NTSTATUS v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdi
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
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = -1073741801LL;
LABEL_3:
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
  v6 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 43) = v6;
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = v1;
    *(_QWORD *)(v10 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v10);
    return 3221225495LL;
  }
  v11 = ExInitializeResourceLite(v6);
  v15 = v11;
  if ( v11 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
LABEL_9:
    v16[4] = v15;
    v16[3] = v1;
LABEL_10:
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v15;
  }
  v17 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)v1 + 8, 0LL, 0LL, PagedPool, 0, 0x600uLL, 0x4B677844u, 0);
  v15 = v17;
  if ( v17 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v16[5] = 0LL;
    goto LABEL_9;
  }
  v1[881] = 1;
  v66 = 0;
  v88 = L"TerminationListSizeLimit";
  *(_QWORD *)&v85[0] = 0x4000000LL;
  v89 = &v66;
  v75 = 0;
  v91 = v85;
  v67 = 0;
  v95 = L"ValidateWDDMCaps";
  v76 = 1;
  v96 = &v67;
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
    *((_QWORD *)v1 + 67) = 0x4000000LL;
    v1[544] = 0;
    *((_DWORD *)v1 + 223) = 1;
    *((_DWORD *)v1 + 224) = 32;
    *((_DWORD *)v1 + 296) = 0;
    *((_DWORD *)v1 + 300) = 0;
  }
  else
  {
    v21 = v67 == 0;
    *((_QWORD *)v1 + 67) = v66;
    v22 = v65 < 2;
    v1[544] = !v21;
    v23 = 1;
    if ( v22 )
      v23 = v65;
    *((_DWORD *)v1 + 223) = v23;
    v24 = v64;
    if ( v64 >= 4 )
    {
      if ( v64 > 0x400 )
        v24 = 1024;
    }
    else
    {
      v24 = 4;
    }
    v21 = v70 == 1;
    v64 = v24;
    *((_DWORD *)v1 + 224) = v24;
    *((_DWORD *)v1 + 296) = v68;
    *((_DWORD *)v1 + 300) = v69;
    v25 = v21;
    v21 = v71 == 0;
    v1[1697] = v25;
    v26 = !v21;
    v21 = v72 == 0;
    v1[1744] = v26;
    v27 = !v21;
    v21 = v73 == 0;
    v1[1745] = v27;
    v28 = !v21;
    v21 = v74 == 0;
    v1[1746] = v28;
    v1[1747] = !v21;
  }
  *((_DWORD *)v1 + 133) = 0;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v15 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
    v16[3] = v15;
    goto LABEL_10;
  }
  v33 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  v34 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v35 = g_IsInternalReleaseOrDbg != 0 ? 512 : PagedPool;
  v36 = (DXGDIAGNOSTICS *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  if ( v36 )
    v37 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v36, v33, v35);
  else
    v37 = 0LL;
  *((_QWORD *)v1 + 72) = v37;
  v38 = (DXGDIAGNOSTICS *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  if ( v38 )
    v40 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v38, v34, v35);
  else
    v40 = 0LL;
  *((_QWORD *)v1 + 73) = v40;
  if ( !*((_QWORD *)v1 + 72) )
  {
    v4 = WdLogNewEntry5_WdLowResource(v39);
    v41 = v33;
LABEL_32:
    *(_QWORD *)(v4 + 24) = v41;
    goto LABEL_3;
  }
  if ( !v40 )
  {
    v4 = WdLogNewEntry5_WdLowResource(v39);
    v41 = v34;
    goto LABEL_32;
  }
  v42 = (DXGSESSIONMGR *)operator new[](0xF8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v42 )
    v44 = DXGSESSIONMGR::DXGSESSIONMGR(v42);
  else
    v44 = 0LL;
  *((_QWORD *)v1 + 74) = v44;
  if ( !v44 )
  {
    v4 = WdLogNewEntry5_WdLowResource(v43);
    *(_QWORD *)(v4 + 24) = 1693LL;
    goto LABEL_3;
  }
  v45 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 224) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 224) + 31) >> 5, 4uLL) )
    v45 = -1LL;
  v46 = operator new[](v45, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 65) = v46;
  if ( !v46 )
  {
    v4 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v4 + 24) = 1700LL;
    goto LABEL_3;
  }
  memset(v46, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 224) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 504), *((PULONG *)v1 + 65), *((_DWORD *)v1 + 224));
  v47 = (EDIDCACHE *)operator new[](0x278uLL, 0x4B677844u, PagedPool);
  if ( v47 )
    v49 = EDIDCACHE::EDIDCACHE(v47);
  else
    v49 = 0LL;
  *((_QWORD *)v1 + 95) = v49;
  if ( !v49 )
  {
    v50 = WdLogNewEntry5_WdLowResource(v48);
    *(_QWORD *)(v50 + 24) = 1710LL;
    WdLogEvent5_WdLowResource(v50);
  }
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 113, 0LL, 0LL, 0LL) < 0 )
  {
    v4 = WdLogNewEntry5_WdLowResource(v51);
    *(_QWORD *)(v4 + 24) = 1721LL;
    goto LABEL_3;
  }
  v52 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 113) + 56LL);
  if ( PsInitialSystemProcess != v52 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v52);
    *(_QWORD *)(v53 + 24) = 1724LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v54 = (QDC_CACHE *)operator new[](0x258uLL, 0x4B677844u, PagedPool);
  if ( v54 )
    v57 = QDC_CACHE::QDC_CACHE(v54, v55);
  else
    v57 = 0LL;
  *((_QWORD *)v1 + 127) = v57;
  if ( !v57 )
  {
    v4 = WdLogNewEntry5_WdLowResource(v56);
    *(_QWORD *)(v4 + 24) = 1729LL;
    goto LABEL_3;
  }
  KeInitializeSpinLock(&SpinLock);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1188));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)v1 + 22);
  KeInitializeDpc((PRKDPC)v1 + 23, (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
  LOBYTE(OutputBuffer) = 0;
  v58 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v60 = v58;
  if ( v58 < 0 )
  {
    v61 = WdLogNewEntry5_WdError(v59);
    *(_QWORD *)(v61 + 24) = v60;
LABEL_64:
    WdLogEvent5_WdError(v61);
    goto LABEL_65;
  }
  if ( (_BYTE)OutputBuffer )
  {
    if ( (int)DripsBlockerInfoList::Initialize((DripsBlockerInfoList *)(v1 + 1656)) < 0 )
    {
      DripsBlockerInfoList::DeAllocate((DripsBlockerInfoList *)(v1 + 1656));
      v61 = WdLogNewEntry5_WdError(v62);
      *(_QWORD *)(v61 + 24) = 1781LL;
      goto LABEL_64;
    }
    DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
LABEL_65:
  *((_QWORD *)v1 + 195) = v1;
  *((_QWORD *)v1 + 194) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *((_QWORD *)v1 + 192) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *((_DWORD *)v1 + 421) &= ~1u;
  *((_DWORD *)v1 + 418) = 10;
  *((_DWORD *)v1 + 419) = 50;
  *((_DWORD *)v1 + 420) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 159);
  return DXGBLACKBOX::Initialize((DXGBLACKBOX *)(v1 + 1800));
}
