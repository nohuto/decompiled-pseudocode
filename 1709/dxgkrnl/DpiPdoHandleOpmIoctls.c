/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C00FD330
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00B9E40 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0032FF8 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     McTemplateK0ptpjq @ 0x1C00334B4 (McTemplateK0ptpjq.c)
 *     McTemplateK0ptpjqq @ 0x1C0033564 (McTemplateK0ptpjqq.c)
 *     McTemplateK0ptpq @ 0x1C0033624 (McTemplateK0ptpq.c)
 *     McTemplateK0ptpqq @ 0x1C00336BC (McTemplateK0ptpqq.c)
 *     McTemplateK0ptpqqq @ 0x1C0033764 (McTemplateK0ptpqqq.c)
 *     McTemplateK0ptqppq @ 0x1C003381C (McTemplateK0ptqppq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00FBB2C (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkOpmCreateHandle @ 0x1C00FD1F4 (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateHandle @ 0x1C00FD290 (DxgkOpmTranslateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00FDC00 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00FDC5C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C00FEA50 (DpiPdoVerifyOpmParameters.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C0178690 (DxgkOpmTranslateAndDestroyHandle.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctls(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // r12d
  void **v9; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  void *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 (__fastcall *v26)(__int64, void *, __int64, void **); // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  void **v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // r13d
  unsigned int v45; // r14d
  void *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r13
  int v52; // eax
  _QWORD *v53; // rax
  void *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  void *v59; // r15
  int v60; // eax
  _QWORD *v61; // rax
  unsigned int v62; // r15d
  int v63; // eax
  __int64 v64; // rax
  int v65; // r15d
  int v66; // r15d
  void *v67; // r15
  int v68; // eax
  const EVENT_DESCRIPTOR *v69; // rdx
  void *v70; // r15
  unsigned int v71; // r13d
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r13
  int v77; // eax
  __int64 (__fastcall *v78)(__int64, void *, __int64, _QWORD, void **); // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  _QWORD *v81; // rax
  void *v82; // r15
  __int64 v83; // r13
  int v84; // eax
  __int64 (__fastcall *v85)(__int64, void *, __int64, void **); // rax
  __int64 v86; // rcx
  const EVENT_DESCRIPTOR *v87; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rax
  const EVENT_DESCRIPTOR *v90; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  void **v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+28h] [rbp-D8h]
  int v94; // [rsp+30h] [rbp-D0h]
  __int64 v95; // [rsp+38h] [rbp-C8h]
  int v96; // [rsp+38h] [rbp-C8h]
  __int64 v97; // [rsp+40h] [rbp-C0h]
  unsigned int v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+54h] [rbp-ACh]
  unsigned int v100; // [rsp+54h] [rbp-ACh]
  unsigned int v101; // [rsp+54h] [rbp-ACh]
  unsigned int v102; // [rsp+54h] [rbp-ACh]
  unsigned int v103; // [rsp+58h] [rbp-A8h]
  unsigned int v104; // [rsp+58h] [rbp-A8h]
  void **v105; // [rsp+60h] [rbp-A0h]
  void **v106; // [rsp+60h] [rbp-A0h]
  int *v107; // [rsp+68h] [rbp-98h]
  void *v108; // [rsp+70h] [rbp-90h] BYREF
  int v109; // [rsp+78h] [rbp-88h]
  void *v110; // [rsp+80h] [rbp-80h] BYREF
  __int64 v111; // [rsp+88h] [rbp-78h]
  void *v112; // [rsp+90h] [rbp-70h] BYREF
  void *v113; // [rsp+98h] [rbp-68h] BYREF
  void *v114; // [rsp+A0h] [rbp-60h] BYREF
  void *v115; // [rsp+A8h] [rbp-58h] BYREF
  void *v116; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v117; // [rsp+B8h] [rbp-48h]
  struct _FDO_CONTEXT *v118; // [rsp+C0h] [rbp-40h]
  __int128 v119; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v120; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v121; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v111 = a2;
  LODWORD(v5) = -1073741637;
  v109 = 0;
  v6 = 0LL;
  v99 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  v8 = 0;
  v9 = *(void ***)(a2 + 112);
  v117 = v3;
  v105 = v9;
  RenderAdapterForSession = *(_QWORD *)(v7 + 64);
  v11 = *(_QWORD *)(a2 + 184);
  v118 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v12 = *(unsigned int *)(v11 + 8);
  v13 = *(_DWORD *)(v11 + 24);
  v107 = *(int **)(v11 + 32);
  v103 = *(_DWORD *)(v11 + 8);
  if ( *(_BYTE *)(RenderAdapterForSession + 1143) )
  {
    v63 = *(_DWORD *)(RenderAdapterForSession + 1144);
    if ( v63 == 2 )
    {
      v3 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_168:
        _InterlockedExchange64(&qword_1C0060888, 0LL);
        KeReleaseMutex(Mutex, 0);
        goto LABEL_42;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(RenderAdapterForSession + 483) )
        DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
      v8 = 1;
      if ( v13 == 2303115 )
      {
        v109 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C0060888, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v12 = v103;
      v4 = v111;
    }
    else
    {
      if ( v63 != 1 )
      {
        v64 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v64 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v64);
        goto LABEL_42;
      }
      v99 = 0;
    }
  }
  if ( *(_QWORD *)(RenderAdapterForSession + 2920) )
  {
    v14 = v13 - 2303107;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( v15 )
      {
        v16 = v15 - 4;
        if ( v16 )
        {
          v17 = v16 - 4;
          if ( !v17 )
          {
            v116 = 0LL;
            v6 = 16LL;
            v54 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 16LL);
            if ( (int)v5 >= 0 )
            {
              v59 = *(void **)v107;
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
              v60 = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3728), v59, &v116);
              v54 = v116;
              LODWORD(v5) = v60;
              if ( v60 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 2944))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v116,
                                v105);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              McTemplateK0ptpq(
                v56,
                &EventOPMGetRandomNumber,
                v57,
                *(_QWORD *)(RenderAdapterForSession + 48),
                Timeout,
                v54,
                v5);
            }
            v61 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
            v61[3] = (int)v5;
            v61[4] = *(_QWORD *)(RenderAdapterForSession + 48);
            v61[5] = v8;
            v61[6] = 0LL;
            WdLogEvent5_WdEvent(v61);
            goto LABEL_40;
          }
          v18 = v17 - 4;
          if ( !v18 )
          {
            v115 = 0LL;
            v46 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 0LL);
            if ( (int)v5 >= 0 )
            {
              v51 = *((_QWORD *)v107 + 1);
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
              v52 = DxgkOpmTranslateHandle(
                      *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3728),
                      *(void **)v107,
                      &v115);
              v46 = v115;
              LODWORD(v5) = v52;
              if ( v52 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(RenderAdapterForSession + 2952))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v115,
                                v51);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_71;
            v69 = (const EVENT_DESCRIPTOR *)&EventOPMSetSigningKeyAndSequenceNumbers;
            goto LABEL_154;
          }
          v19 = v18 - 4;
          if ( !v19 )
          {
            v100 = -1;
            v108 = 0LL;
            v121 = 0uLL;
            v20 = 0LL;
            v98 = 4096;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
            if ( (int)v5 >= 0 )
            {
              v25 = *((_QWORD *)v107 + 1);
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              v100 = *(_DWORD *)(v25 + 32);
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
              LODWORD(v5) = DxgkOpmTranslateHandle(
                              *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3728),
                              *(void **)v107,
                              &v108);
              if ( (int)v5 >= 0 )
              {
                v26 = *(__int64 (__fastcall **)(__int64, void *, __int64, void **))(RenderAdapterForSession + 2960);
                v27 = *(_QWORD *)(RenderAdapterForSession + 48);
                v121 = *(_OWORD *)(v25 + 32);
                LODWORD(v5) = v26(v27, v108, v25, v105);
              }
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              v28 = *(_QWORD *)(v25 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
              if ( !v28 )
                v28 = *(_QWORD *)(v25 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
              v22 = (__int64)v105;
              if ( !v28 && *((_DWORD *)v105 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v87 = (const EVENT_DESCRIPTOR *)&EventOPMGetConnectorType;
LABEL_148:
                  LODWORD(Timeout) = v8;
                  McTemplateK0ptpqq(
                    (__int64)v105,
                    v87,
                    v23,
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    Timeout,
                    v108,
                    *((_DWORD *)v105 + 10),
                    v5);
                  goto LABEL_29;
                }
                goto LABEL_29;
              }
              v29 = *(_QWORD *)(v25 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
              if ( !v29 )
                v29 = *(_QWORD *)(v25 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
              if ( !v29 && *((_DWORD *)v105 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v87 = (const EVENT_DESCRIPTOR *)&EventOPMGetSupportedProtectionTypes;
                  goto LABEL_148;
                }
LABEL_29:
                v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
                v31[3] = (int)v5;
                v31[4] = *(_QWORD *)(RenderAdapterForSession + 48);
                v31[5] = v8;
                v31[6] = v100;
LABEL_39:
                WdLogEvent5_WdEvent(v31);
                v6 = v98;
                goto LABEL_40;
              }
              v30 = *(_QWORD *)(v25 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
              if ( !v30 )
                v30 = *(_QWORD *)(v25 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
              if ( !v30 && *(_DWORD *)(v25 + 52) >= 4u && *((_DWORD *)v105 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  LODWORD(Timeout) = v8;
                  McTemplateK0ptpqqq(
                    (__int64)v105,
                    &EventOPMGetActualProtectionLevel,
                    v23,
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    Timeout,
                    v108,
                    *(_DWORD *)(v25 + 56),
                    *((_DWORD *)v105 + 10),
                    v5);
                }
                goto LABEL_29;
              }
              v20 = v108;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              McTemplateK0ptpjq(v22, v21, v23, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v20, &v121, v5);
            }
            goto LABEL_29;
          }
          v65 = v19 - 4;
          if ( v65 )
          {
            v66 = v65 - 4;
            if ( !v66 )
            {
              v113 = 0LL;
              v104 = 0;
              v119 = 0uLL;
              v70 = 0LL;
              v71 = -1;
              LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 32LL, 0LL);
              if ( (int)v5 >= 0 )
              {
                v76 = *((_QWORD *)v107 + 1);
                v104 = v107[4];
                v106 = (void **)*((_QWORD *)v107 + 3);
                LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
                if ( (int)v5 < 0 )
                  goto LABEL_157;
                v102 = *(_DWORD *)(v76 + 16);
                DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
                if ( v3 )
                  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
                DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
                v77 = DxgkOpmTranslateHandle(
                        *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3728),
                        *(void **)v107,
                        &v113);
                v70 = v113;
                LODWORD(v5) = v77;
                if ( v77 >= 0 )
                {
                  v78 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, void **))(RenderAdapterForSession
                                                                                            + 2976);
                  v79 = *(_QWORD *)(RenderAdapterForSession + 48);
                  v119 = *(_OWORD *)(v76 + 16);
                  LODWORD(v5) = v78(v79, v113, v76, v104, v106);
                }
                DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
                if ( v3 )
                  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
                DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
                DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
                v80 = *(_QWORD *)(v76 + 16) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v80 )
                  v80 = *(_QWORD *)(v76 + 24) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v80 && *(_DWORD *)(v76 + 36) >= 0x10u )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Timeout) = v8;
                    McTemplateK0ptpqqq(
                      v73,
                      &EventOPMSetProtectionLevel,
                      v74,
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      Timeout,
                      v70,
                      *(_DWORD *)(v76 + 40),
                      *(_DWORD *)(v76 + 44),
                      v5);
                  }
                  v81 = (_QWORD *)WdLogNewEntry5_WdEvent(v73, v72, v74, v75);
                  v81[3] = (int)v5;
                  v81[4] = *(_QWORD *)(RenderAdapterForSession + 48);
                  v81[5] = v8;
                  v81[6] = *(unsigned int *)(v76 + 40);
                  WdLogEvent5_WdEvent(v81);
                }
                v71 = v102;
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v97) = v5;
                LODWORD(v95) = v104;
                LODWORD(Timeout) = v8;
                McTemplateK0ptpjqq(
                  v73,
                  v72,
                  v74,
                  *(_QWORD *)(RenderAdapterForSession + 48),
                  Timeout,
                  v70,
                  &v119,
                  v95,
                  v97);
              }
              v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v73, v72, v74, v75);
              v53[3] = (int)v5;
              v53[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v53[5] = v8;
              v53[6] = v71;
              goto LABEL_72;
            }
            if ( v66 != 4 )
              goto LABEL_157;
            v112 = 0LL;
            v46 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 0LL);
            if ( (int)v5 >= 0 )
            {
              v67 = *(void **)v107;
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
              v68 = DxgkOpmTranslateAndDestroyHandle(*(DXGADAPTER **)(RenderAdapterForSession + 3728), v67, &v112);
              v46 = v112;
              LODWORD(v5) = v68;
              if ( v68 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2984))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v112);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            {
LABEL_71:
              v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
              v53[3] = (int)v5;
              v53[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v53[5] = v8;
              v53[6] = 0LL;
LABEL_72:
              WdLogEvent5_WdEvent(v53);
              v6 = 0LL;
LABEL_40:
              if ( (int)v5 >= 0 )
                goto LABEL_41;
LABEL_157:
              v89 = WdLogNewEntry5_WdWarning(v9, v12, a3);
              *(_QWORD *)(v89 + 24) = (int)v5;
              WdLogEvent5_WdWarning(v89);
              v6 = 0LL;
              goto LABEL_41;
            }
            v69 = (const EVENT_DESCRIPTOR *)&EventOPMDestroyProtectedOutput;
LABEL_154:
            LODWORD(Timeout) = v8;
            McTemplateK0ptpq(v48, v69, v49, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v46, v5);
            goto LABEL_71;
          }
          v114 = 0LL;
          v120 = 0uLL;
          v82 = 0LL;
          v98 = 4096;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
          if ( (int)v5 >= 0 )
          {
            v83 = *((_QWORD *)v107 + 1);
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 < 0 )
              goto LABEL_157;
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
            if ( v3 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
            v84 = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3728), *(void **)v107, &v114);
            v82 = v114;
            LODWORD(v5) = v84;
            if ( v84 >= 0 )
            {
              v85 = *(__int64 (__fastcall **)(__int64, void *, __int64, void **))(RenderAdapterForSession + 2968);
              v86 = *(_QWORD *)(RenderAdapterForSession + 48);
              v120 = *(_OWORD *)(v83 + 16);
              LODWORD(v5) = v85(v86, v114, v83, v105);
            }
            DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
            if ( v3 )
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
            DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Timeout) = v8;
            McTemplateK0ptpjq(v41, v40, v42, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v82, &v120, v5);
          }
        }
        else
        {
          v110 = 0LL;
          v98 = 8;
          v39 = 0LL;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 8LL);
          if ( (int)v5 < 0 )
          {
            v45 = -1;
          }
          else
          {
            v44 = *v107;
            if ( *v107 == 2 && v99 )
            {
              LODWORD(v5) = -1073741198;
              v88 = (_QWORD *)WdLogNewEntry5_WdEvent(v41, v40, v42, v43);
              v88[3] = -1073741198LL;
              v88[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v88[5] = v8;
              v88[6] = 0LL;
              WdLogEvent5_WdEvent(v88);
              goto LABEL_157;
            }
            v39 = v105;
            if ( v8 )
            {
              v45 = *(_DWORD *)(v117 + 504);
              LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                              (struct _FDO_CONTEXT *)RenderAdapterForSession,
                              v118,
                              v44,
                              v45,
                              v105,
                              &v110);
            }
            else
            {
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
              v101 = *(_DWORD *)(v3 + 504);
              LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2936))(
                              *(_QWORD *)(RenderAdapterForSession + 48),
                              v101,
                              v44,
                              &v110);
              if ( (int)v5 >= 0 )
              {
                LODWORD(v5) = DxgkOpmCreateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3728), v110, v105);
                if ( (int)v5 < 0 )
                {
                  (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2984))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    v110);
                  if ( (_DWORD)v5 == -1073741198 )
                    LODWORD(v5) = -1073741637;
                }
              }
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              v45 = v101;
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v92) = v45;
            LODWORD(Timeout) = v8;
            McTemplateK0ptqppq(v41, v40, v42, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v92, v110, *v39, v5);
          }
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v41, v40, v42, v43);
        v31[3] = (int)v5;
LABEL_38:
        v31[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v31[5] = v8;
        v31[6] = 0LL;
        goto LABEL_39;
      }
      v98 = v12;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, (unsigned int)v12);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      v62 = *v107;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
      v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2928))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             v62,
             v103,
             v105);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      {
LABEL_37:
        v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v33, v35, v36);
        v31[3] = v5;
        goto LABEL_38;
      }
      v96 = v5;
      v90 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificate;
      v94 = v103;
      v93 = v62;
    }
    else
    {
      v98 = 4;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 4LL);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      v32 = *v107;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
      v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 2920))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             v32,
             v105);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_37;
      v90 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificateSize;
      v96 = v5;
      v94 = *(_DWORD *)v105;
      v93 = v32;
    }
    LODWORD(Timeout) = v8;
    McTemplateK0pqqqq(v34, v90, v35, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v93, v94, v96);
    goto LABEL_37;
  }
LABEL_41:
  if ( v8 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v109 )
      goto LABEL_168;
  }
LABEL_42:
  v37 = v111;
  *(_DWORD *)(v111 + 48) = v5;
  *(_QWORD *)(v37 + 56) = v6;
  return (unsigned int)v5;
}
