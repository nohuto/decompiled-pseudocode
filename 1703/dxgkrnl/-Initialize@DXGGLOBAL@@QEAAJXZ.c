/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011D064 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0010F74 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C0012984 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C0110610 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C011B48C (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C011D458 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C0120E54 (CreateDxgkSharedObjectTypes.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C0121798 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C01231E8 (--0QDC_CACHE@@QEAA@_N@Z.c)
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
  __int64 v8; // r9
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  bool v21; // cf
  int v22; // eax
  int v23; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
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
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _KPROCESS *v49; // rcx
  QDC_CACHE *v50; // rax
  bool v51; // dl
  __int64 v52; // rcx
  QDC_CACHE *v53; // rax
  __int64 result; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v62; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v63; // [rsp+50h] [rbp-B8h] BYREF
  int v64; // [rsp+54h] [rbp-B4h] BYREF
  int v65; // [rsp+58h] [rbp-B0h] BYREF
  int v66; // [rsp+5Ch] [rbp-ACh] BYREF
  int v67; // [rsp+60h] [rbp-A8h] BYREF
  int v68; // [rsp+64h] [rbp-A4h] BYREF
  int v69; // [rsp+68h] [rbp-A0h] BYREF
  int v70; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v72[14]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v73; // [rsp+E8h] [rbp-20h] BYREF
  int v74; // [rsp+F0h] [rbp-18h]
  const wchar_t *v75; // [rsp+F8h] [rbp-10h]
  unsigned int *v76; // [rsp+100h] [rbp-8h]
  int v77; // [rsp+108h] [rbp+0h]
  _QWORD *v78; // [rsp+110h] [rbp+8h]
  int v79; // [rsp+118h] [rbp+10h]
  __int64 v80; // [rsp+120h] [rbp+18h]
  int v81; // [rsp+128h] [rbp+20h]
  const wchar_t *v82; // [rsp+130h] [rbp+28h]
  int *v83; // [rsp+138h] [rbp+30h]
  int v84; // [rsp+140h] [rbp+38h]
  int *v85; // [rsp+148h] [rbp+40h]
  int v86; // [rsp+150h] [rbp+48h]
  __int64 v87; // [rsp+158h] [rbp+50h]
  int v88; // [rsp+160h] [rbp+58h]
  const wchar_t *v89; // [rsp+168h] [rbp+60h]
  unsigned int *v90; // [rsp+170h] [rbp+68h]
  int v91; // [rsp+178h] [rbp+70h]
  int *v92; // [rsp+180h] [rbp+78h]
  int v93; // [rsp+188h] [rbp+80h]
  __int64 v94; // [rsp+190h] [rbp+88h]
  int v95; // [rsp+198h] [rbp+90h]
  const wchar_t *v96; // [rsp+1A0h] [rbp+98h]
  unsigned int *v97; // [rsp+1A8h] [rbp+A0h]
  int v98; // [rsp+1B0h] [rbp+A8h]
  int *v99; // [rsp+1B8h] [rbp+B0h]
  int v100; // [rsp+1C0h] [rbp+B8h]
  __int64 v101; // [rsp+1C8h] [rbp+C0h]
  int v102; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v103; // [rsp+1D8h] [rbp+D0h]
  int *v104; // [rsp+1E0h] [rbp+D8h]
  int v105; // [rsp+1E8h] [rbp+E0h]
  int *v106; // [rsp+1F0h] [rbp+E8h]
  int v107; // [rsp+1F8h] [rbp+F0h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  int v109; // [rsp+208h] [rbp+100h]
  const wchar_t *v110; // [rsp+210h] [rbp+108h]
  int *v111; // [rsp+218h] [rbp+110h]
  int v112; // [rsp+220h] [rbp+118h]
  __int64 *v113; // [rsp+228h] [rbp+120h]
  int v114; // [rsp+230h] [rbp+128h]
  __int64 v115; // [rsp+238h] [rbp+130h]
  int v116; // [rsp+240h] [rbp+138h]
  _BYTE v117[40]; // [rsp+248h] [rbp+140h] BYREF

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset(&v72[2], 0, 0x58uLL);
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = v72[2];
  *((_QWORD *)v1 + 2) = v72[3];
  *((_QWORD *)v1 + 3) = v72[4];
  *((_QWORD *)v1 + 4) = v72[5];
  *((_QWORD *)v1 + 5) = v72[6];
  *((_QWORD *)v1 + 6) = v72[7];
  *((_QWORD *)v1 + 7) = v72[8];
  *((_QWORD *)v1 + 8) = v72[9];
  *((_DWORD *)v1 + 18) = v72[10];
  v2 = *(_OWORD *)&v72[11];
  *((_DWORD *)v1 + 19) = HIDWORD(v72[10]);
  *((_OWORD *)v1 + 5) = v2;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 176)) )
  {
    v55 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    goto LABEL_38;
  }
  v4 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 42) = v4;
  if ( !v4 )
  {
    v56 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v56 + 24) = v1;
    *(_QWORD *)(v56 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v56);
    return 3221225495LL;
  }
  v9 = ExInitializeResourceLite(v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
LABEL_43:
    v57[4] = v14;
    v57[3] = v1;
    goto LABEL_45;
  }
  v15 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 688), 0LL, 0LL, PagedPool, 0, 0x5F0uLL, 0x4B677844u, 0);
  v14 = v15;
  if ( v15 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v57[5] = 0LL;
    goto LABEL_43;
  }
  v1[801] = 1;
  v74 = 288;
  v81 = 288;
  v75 = L"TerminationListSizeLimit";
  v88 = 288;
  v76 = &v63;
  v95 = 288;
  v78 = v72;
  v82 = L"ValidateWDDMCaps";
  v83 = &v64;
  v102 = 288;
  v85 = &v67;
  v89 = L"WDDM2LockManagement";
  v90 = &v62;
  v92 = &v68;
  v96 = L"MaximumAdapterCount";
  v97 = &v61;
  v99 = &v69;
  v103 = L"InvestigationDebugParameter";
  v104 = &v65;
  v106 = &v70;
  v110 = L"EnableIgnoreWin32ProcessStatus";
  v111 = &v66;
  v109 = 288;
  v113 = &v71;
  v72[0] = 0x4000000LL;
  v63 = 0;
  v67 = 0;
  v64 = 0;
  v68 = 1;
  v62 = 0;
  v69 = 32;
  v61 = 0;
  v65 = 0;
  v70 = 0;
  LODWORD(v71) = 0;
  v66 = 0;
  v73 = 0LL;
  v77 = 67108868;
  v79 = 4;
  v80 = 0LL;
  v84 = 67108868;
  v86 = 4;
  v87 = 0LL;
  v91 = 67108868;
  v93 = 4;
  v94 = 0LL;
  v98 = 67108868;
  v100 = 4;
  v101 = 0LL;
  v105 = 67108868;
  v107 = 4;
  v108 = 0LL;
  v112 = 67108868;
  v114 = 4;
  v115 = 0LL;
  v116 = 0;
  memset(v117, 0, sizeof(v117));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v73, 0LL, 0LL) < 0 )
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
    v20 = v64 == 0;
    *((_QWORD *)v1 + 66) = v63;
    v21 = v62 < 2;
    v1[536] = !v20;
    v22 = 1;
    if ( v21 )
      v22 = v62;
    *((_DWORD *)v1 + 203) = v22;
    v23 = v61;
    if ( v61 < 4 )
    {
      v23 = 4;
    }
    else if ( v61 > 0x400 )
    {
      v23 = 1024;
    }
    v61 = v23;
    *((_DWORD *)v1 + 204) = v23;
    *((_DWORD *)v1 + 276) = v65;
    *((_DWORD *)v1 + 280) = v66;
  }
  *((_DWORD *)v1 + 131) = 0;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v14 = DxgkSharedObjectTypes;
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
              *(_QWORD *)(v59 + 24) = 1604LL;
              WdLogEvent5_WdLowResource(v59);
            }
            if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 103, 0, 0LL) < 0 )
            {
              v55 = WdLogNewEntry5_WdLowResource(v46);
              *(_QWORD *)(v55 + 24) = 1615LL;
            }
            else
            {
              v49 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 103) + 48LL);
              if ( PsInitialSystemProcess != v49 )
              {
                v60 = WdLogNewEntry5_WdAssertion(v49, v45, v47, v48);
                *(_QWORD *)(v60 + 24) = 1618LL;
                WdLogEvent5_WdAssertion(v60);
              }
              v50 = (QDC_CACHE *)operator new(0x378uLL, 0x4B677844u, PagedPool);
              if ( v50 )
                v53 = QDC_CACHE::QDC_CACHE(v50, v51);
              else
                v53 = 0LL;
              *((_QWORD *)v1 + 117) = v53;
              if ( v53 )
              {
                KeInitializeSpinLock(&SpinLock);
                DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1108));
                DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
                KeInitializeTimer((PKTIMER)(v1 + 1296));
                KeInitializeDpc((PRKDPC)(v1 + 1360), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
                *((_QWORD *)v1 + 181) = v1;
                *((_QWORD *)v1 + 180) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
                *((_QWORD *)v1 + 178) = 0LL;
                *((_DWORD *)v1 + 368) &= ~1u;
                result = 0LL;
                *((_DWORD *)v1 + 365) = 10;
                *((_DWORD *)v1 + 366) = 50;
                *((_DWORD *)v1 + 367) = 30;
                return result;
              }
              v55 = WdLogNewEntry5_WdLowResource(v52);
              *(_QWORD *)(v55 + 24) = 1623LL;
            }
          }
          else
          {
            v55 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v55 + 24) = 1594LL;
          }
        }
        else
        {
          v55 = WdLogNewEntry5_WdLowResource(v38);
          *(_QWORD *)(v55 + 24) = 1587LL;
        }
        goto LABEL_38;
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
LABEL_38:
    WdLogEvent5_WdLowResource(v55);
    return 3221225495LL;
  }
  v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
  v57[3] = v14;
LABEL_45:
  WdLogEvent5_WdWarning(v57);
  return (unsigned int)v14;
}
