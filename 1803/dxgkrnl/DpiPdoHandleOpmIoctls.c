/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C0109590
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     McTemplateK0ptpjq @ 0x1C0041D84 (McTemplateK0ptpjq.c)
 *     McTemplateK0ptpjqq @ 0x1C0041E34 (McTemplateK0ptpjqq.c)
 *     McTemplateK0ptpq @ 0x1C0041EF4 (McTemplateK0ptpq.c)
 *     McTemplateK0ptpqq @ 0x1C0041F8C (McTemplateK0ptpqq.c)
 *     McTemplateK0ptpqqq @ 0x1C0042034 (McTemplateK0ptpqqq.c)
 *     McTemplateK0ptqppq @ 0x1C00420EC (McTemplateK0ptqppq.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00DD19C (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkOpmTranslateHandle @ 0x1C010920C (DxgkOpmTranslateHandle.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C01092AC (DpiPdoVerifyOpmParameters.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0109E60 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0109EBC (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkOpmCreateHandle @ 0x1C010F930 (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C015C870 (DxgkOpmTranslateAndDestroyHandle.c)
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
  __int64 v24; // r15
  __int64 (__fastcall *v25)(__int64, void *, __int64, void **); // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  void **v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // r13d
  unsigned int v42; // r14d
  void *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r13
  int v48; // eax
  _QWORD *v49; // rax
  void *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  void *v54; // r15
  int v55; // eax
  _QWORD *v56; // rax
  unsigned int v57; // r15d
  int v58; // eax
  __int64 v59; // rax
  int v60; // r15d
  int v61; // r15d
  void *v62; // r15
  int v63; // eax
  const EVENT_DESCRIPTOR *v64; // rdx
  void *v65; // r15
  unsigned int v66; // r13d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r13
  int v71; // eax
  __int64 (__fastcall *v72)(__int64, void *, __int64, _QWORD, void **); // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  _QWORD *v75; // rax
  void *v76; // r15
  __int64 v77; // r8
  __int64 v78; // r13
  int v79; // eax
  __int64 (__fastcall *v80)(__int64, void *, __int64, void **); // rax
  __int64 v81; // rcx
  const EVENT_DESCRIPTOR *v82; // rdx
  _QWORD *v83; // rax
  __int64 v84; // rax
  const EVENT_DESCRIPTOR *v85; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  void **v87; // [rsp+28h] [rbp-D8h]
  int v88; // [rsp+28h] [rbp-D8h]
  int v89; // [rsp+30h] [rbp-D0h]
  __int64 v90; // [rsp+38h] [rbp-C8h]
  int v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+40h] [rbp-C0h]
  unsigned int v93; // [rsp+50h] [rbp-B0h]
  int v94; // [rsp+54h] [rbp-ACh]
  unsigned int v95; // [rsp+54h] [rbp-ACh]
  unsigned int v96; // [rsp+54h] [rbp-ACh]
  unsigned int v97; // [rsp+54h] [rbp-ACh]
  unsigned int v98; // [rsp+58h] [rbp-A8h]
  unsigned int v99; // [rsp+58h] [rbp-A8h]
  void **v100; // [rsp+60h] [rbp-A0h]
  void **v101; // [rsp+60h] [rbp-A0h]
  int *v102; // [rsp+68h] [rbp-98h]
  void *v103; // [rsp+70h] [rbp-90h] BYREF
  int v104; // [rsp+78h] [rbp-88h]
  void *v105; // [rsp+80h] [rbp-80h] BYREF
  __int64 v106; // [rsp+88h] [rbp-78h]
  void *v107; // [rsp+90h] [rbp-70h] BYREF
  void *v108; // [rsp+98h] [rbp-68h] BYREF
  void *v109; // [rsp+A0h] [rbp-60h] BYREF
  void *v110; // [rsp+A8h] [rbp-58h] BYREF
  void *v111; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v112; // [rsp+B8h] [rbp-48h]
  struct _FDO_CONTEXT *v113; // [rsp+C0h] [rbp-40h]
  __int128 v114; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v115; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v116; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v106 = a2;
  LODWORD(v5) = -1073741637;
  v104 = 0;
  v6 = 0LL;
  v94 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  v8 = 0;
  v9 = *(void ***)(a2 + 112);
  v112 = v3;
  v100 = v9;
  RenderAdapterForSession = *(_QWORD *)(v7 + 64);
  v11 = *(_QWORD *)(a2 + 184);
  v113 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v12 = *(unsigned int *)(v11 + 8);
  v13 = *(_DWORD *)(v11 + 24);
  v102 = *(int **)(v11 + 32);
  v98 = *(_DWORD *)(v11 + 8);
  if ( *(_BYTE *)(RenderAdapterForSession + 1143) )
  {
    v58 = *(_DWORD *)(RenderAdapterForSession + 1144);
    if ( v58 == 2 )
    {
      v3 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_168:
        _InterlockedExchange64(&qword_1C007A788, 0LL);
        KeReleaseMutex((PRKMUTEX)Mutex, 0);
        goto LABEL_42;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(RenderAdapterForSession + 483) )
        DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
      v8 = 1;
      if ( v13 == 2303115 )
      {
        v104 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C007A788, 0LL);
        KeReleaseMutex((PRKMUTEX)Mutex, 0);
      }
      v12 = v98;
      v4 = v106;
    }
    else
    {
      if ( v58 != 1 )
      {
        v59 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v59 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v59);
        goto LABEL_42;
      }
      v94 = 0;
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
            v111 = 0LL;
            v6 = 16LL;
            v50 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8u, 0x10u);
            if ( (int)v5 >= 0 )
            {
              v54 = *(void **)v102;
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
              v55 = DxgkOpmTranslateHandle(*(struct _KTHREAD ****)(RenderAdapterForSession + 3728), v54, &v111);
              v50 = v111;
              LODWORD(v5) = v55;
              if ( v55 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 2944))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v111,
                                v100);
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              McTemplateK0ptpq(
                v52,
                &EventOPMGetRandomNumber,
                v53,
                *(_QWORD *)(RenderAdapterForSession + 48),
                Timeout,
                v50,
                v5);
            }
            v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51);
            v56[3] = (int)v5;
            v56[4] = *(_QWORD *)(RenderAdapterForSession + 48);
            v56[5] = v8;
            v56[6] = 0LL;
            WdLogEvent5_WdEvent(v56);
            goto LABEL_40;
          }
          v18 = v17 - 4;
          if ( !v18 )
          {
            v110 = 0LL;
            v43 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 0x10u, 0);
            if ( (int)v5 >= 0 )
            {
              v47 = *((_QWORD *)v102 + 1);
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
              v48 = DxgkOpmTranslateHandle(
                      *(struct _KTHREAD ****)(RenderAdapterForSession + 3728),
                      *(void **)v102,
                      &v110);
              v43 = v110;
              LODWORD(v5) = v48;
              if ( v48 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(RenderAdapterForSession + 2952))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v110,
                                v47);
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_71;
            v64 = (const EVENT_DESCRIPTOR *)&EventOPMSetSigningKeyAndSequenceNumbers;
            goto LABEL_154;
          }
          v19 = v18 - 4;
          if ( !v19 )
          {
            v95 = -1;
            v103 = 0LL;
            v116 = 0uLL;
            v20 = 0LL;
            v93 = 4096;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 0x10u, 0x1000u);
            if ( (int)v5 >= 0 )
            {
              v24 = *((_QWORD *)v102 + 1);
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              v95 = *(_DWORD *)(v24 + 32);
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
              LODWORD(v5) = DxgkOpmTranslateHandle(
                              *(struct _KTHREAD ****)(RenderAdapterForSession + 3728),
                              *(void **)v102,
                              &v103);
              if ( (int)v5 >= 0 )
              {
                v25 = *(__int64 (__fastcall **)(__int64, void *, __int64, void **))(RenderAdapterForSession + 2960);
                v26 = *(_QWORD *)(RenderAdapterForSession + 48);
                v116 = *(_OWORD *)(v24 + 32);
                LODWORD(v5) = v25(v26, v103, v24, v100);
              }
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              v27 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
              if ( !v27 )
                v27 = *(_QWORD *)(v24 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
              v22 = (__int64)v100;
              if ( !v27 && *((_DWORD *)v100 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v82 = (const EVENT_DESCRIPTOR *)&EventOPMGetConnectorType;
LABEL_148:
                  LODWORD(Timeout) = v8;
                  McTemplateK0ptpqq(
                    (__int64)v100,
                    v82,
                    v23,
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    Timeout,
                    v103,
                    *((_DWORD *)v100 + 10),
                    v5);
                  goto LABEL_29;
                }
                goto LABEL_29;
              }
              v28 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
              if ( !v28 )
                v28 = *(_QWORD *)(v24 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
              if ( !v28 && *((_DWORD *)v100 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v82 = (const EVENT_DESCRIPTOR *)&EventOPMGetSupportedProtectionTypes;
                  goto LABEL_148;
                }
LABEL_29:
                v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21);
                v30[3] = (int)v5;
                v30[4] = *(_QWORD *)(RenderAdapterForSession + 48);
                v30[5] = v8;
                v30[6] = v95;
LABEL_39:
                WdLogEvent5_WdEvent(v30);
                v6 = v93;
                goto LABEL_40;
              }
              v29 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
              if ( !v29 )
                v29 = *(_QWORD *)(v24 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
              if ( !v29 && *(_DWORD *)(v24 + 52) >= 4u && *((_DWORD *)v100 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  LODWORD(Timeout) = v8;
                  McTemplateK0ptpqqq(
                    (__int64)v100,
                    &EventOPMGetActualProtectionLevel,
                    v23,
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    Timeout,
                    v103,
                    *(_DWORD *)(v24 + 56),
                    *((_DWORD *)v100 + 10),
                    v5);
                }
                goto LABEL_29;
              }
              v20 = v103;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              McTemplateK0ptpjq(v22, v21, v23, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v20, &v116, v5);
            }
            goto LABEL_29;
          }
          v60 = v19 - 4;
          if ( v60 )
          {
            v61 = v60 - 4;
            if ( !v61 )
            {
              v108 = 0LL;
              v99 = 0;
              v114 = 0uLL;
              v65 = 0LL;
              v66 = -1;
              LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 0x20u, 0);
              if ( (int)v5 >= 0 )
              {
                v70 = *((_QWORD *)v102 + 1);
                v99 = v102[4];
                v101 = (void **)*((_QWORD *)v102 + 3);
                LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
                if ( (int)v5 < 0 )
                  goto LABEL_157;
                v97 = *(_DWORD *)(v70 + 16);
                DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
                if ( v3 )
                  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
                DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
                v71 = DxgkOpmTranslateHandle(
                        *(struct _KTHREAD ****)(RenderAdapterForSession + 3728),
                        *(void **)v102,
                        &v108);
                v65 = v108;
                LODWORD(v5) = v71;
                if ( v71 >= 0 )
                {
                  v72 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, void **))(RenderAdapterForSession
                                                                                            + 2976);
                  v73 = *(_QWORD *)(RenderAdapterForSession + 48);
                  v114 = *(_OWORD *)(v70 + 16);
                  LODWORD(v5) = v72(v73, v108, v70, v99, v101);
                }
                DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
                if ( v3 )
                  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
                DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
                DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
                v74 = *(_QWORD *)(v70 + 16) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v74 )
                  v74 = *(_QWORD *)(v70 + 24) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v74 && *(_DWORD *)(v70 + 36) >= 0x10u )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Timeout) = v8;
                    McTemplateK0ptpqqq(
                      v68,
                      &EventOPMSetProtectionLevel,
                      v69,
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      Timeout,
                      v65,
                      *(_DWORD *)(v70 + 40),
                      *(_DWORD *)(v70 + 44),
                      v5);
                  }
                  v75 = (_QWORD *)WdLogNewEntry5_WdEvent(v68, v67);
                  v75[3] = (int)v5;
                  v75[4] = *(_QWORD *)(RenderAdapterForSession + 48);
                  v75[5] = v8;
                  v75[6] = *(unsigned int *)(v70 + 40);
                  WdLogEvent5_WdEvent(v75);
                }
                v66 = v97;
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v92) = v5;
                LODWORD(v90) = v99;
                LODWORD(Timeout) = v8;
                McTemplateK0ptpjqq(
                  v68,
                  v67,
                  v69,
                  *(_QWORD *)(RenderAdapterForSession + 48),
                  Timeout,
                  v65,
                  &v114,
                  v90,
                  v92);
              }
              v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v68, v67);
              v49[3] = (int)v5;
              v49[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v49[5] = v8;
              v49[6] = v66;
              goto LABEL_72;
            }
            if ( v61 != 4 )
              goto LABEL_157;
            v107 = 0LL;
            v43 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8u, 0);
            if ( (int)v5 >= 0 )
            {
              v62 = *(void **)v102;
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
              v63 = DxgkOpmTranslateAndDestroyHandle(*(DXGADAPTER **)(RenderAdapterForSession + 3728), v62, &v107);
              v43 = v107;
              LODWORD(v5) = v63;
              if ( v63 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2984))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v107);
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            {
LABEL_71:
              v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v44);
              v49[3] = (int)v5;
              v49[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v49[5] = v8;
              v49[6] = 0LL;
LABEL_72:
              WdLogEvent5_WdEvent(v49);
              v6 = 0LL;
LABEL_40:
              if ( (int)v5 >= 0 )
                goto LABEL_41;
LABEL_157:
              v84 = WdLogNewEntry5_WdWarning(v9, v12, a3);
              *(_QWORD *)(v84 + 24) = (int)v5;
              WdLogEvent5_WdWarning(v84);
              v6 = 0LL;
              goto LABEL_41;
            }
            v64 = (const EVENT_DESCRIPTOR *)&EventOPMDestroyProtectedOutput;
LABEL_154:
            LODWORD(Timeout) = v8;
            McTemplateK0ptpq(v45, v64, v46, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v43, v5);
            goto LABEL_71;
          }
          v109 = 0LL;
          v115 = 0uLL;
          v76 = 0LL;
          v93 = 4096;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 0x10u, 0x1000u);
          if ( (int)v5 >= 0 )
          {
            v78 = *((_QWORD *)v102 + 1);
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 < 0 )
              goto LABEL_157;
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
            if ( v3 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
            v79 = DxgkOpmTranslateHandle(*(struct _KTHREAD ****)(RenderAdapterForSession + 3728), *(void **)v102, &v109);
            v76 = v109;
            LODWORD(v5) = v79;
            if ( v79 >= 0 )
            {
              v80 = *(__int64 (__fastcall **)(__int64, void *, __int64, void **))(RenderAdapterForSession + 2968);
              v81 = *(_QWORD *)(RenderAdapterForSession + 48);
              v115 = *(_OWORD *)(v78 + 16);
              LODWORD(v5) = v80(v81, v109, v78, v100);
            }
            DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
            if ( v3 )
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
            DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Timeout) = v8;
            McTemplateK0ptpjq(v39, v38, v77, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v76, &v115, v5);
          }
        }
        else
        {
          v105 = 0LL;
          v93 = 8;
          v37 = 0LL;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4u, 8u);
          if ( (int)v5 < 0 )
          {
            v42 = -1;
          }
          else
          {
            v41 = *v102;
            if ( *v102 == 2 && v94 )
            {
              LODWORD(v5) = -1073741198;
              v83 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, v38);
              v83[3] = -1073741198LL;
              v83[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v83[5] = v8;
              v83[6] = 0LL;
              WdLogEvent5_WdEvent(v83);
              goto LABEL_157;
            }
            v37 = v100;
            if ( v8 )
            {
              v42 = *(_DWORD *)(v112 + 504);
              LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                              (struct _FDO_CONTEXT *)RenderAdapterForSession,
                              v113,
                              v41,
                              v42,
                              v100,
                              &v105);
            }
            else
            {
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
              v96 = *(_DWORD *)(v3 + 504);
              LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2936))(
                              *(_QWORD *)(RenderAdapterForSession + 48),
                              v96,
                              v41,
                              &v105);
              if ( (int)v5 >= 0 )
              {
                LODWORD(v5) = DxgkOpmCreateHandle(*(DXGADAPTER **)(RenderAdapterForSession + 3728), v105, v100);
                if ( (int)v5 < 0 )
                {
                  (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2984))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    v105);
                  if ( (_DWORD)v5 == -1073741198 )
                    LODWORD(v5) = -1073741637;
                }
              }
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              v42 = v96;
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v87) = v42;
            LODWORD(Timeout) = v8;
            McTemplateK0ptqppq(v39, v38, v40, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v87, v105, *v37, v5);
          }
        }
        v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, v38);
        v30[3] = (int)v5;
LABEL_38:
        v30[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v30[5] = v8;
        v30[6] = 0LL;
        goto LABEL_39;
      }
      v93 = v12;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4u, v12);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      v57 = *v102;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
      v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2928))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             v57,
             v98,
             v100);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      {
LABEL_37:
        v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v33, v32);
        v30[3] = v5;
        goto LABEL_38;
      }
      v91 = v5;
      v85 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificate;
      v89 = v98;
      v88 = v57;
    }
    else
    {
      v93 = 4;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4u, 4u);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      v31 = *v102;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1);
      v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 2920))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             v31,
             v100);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3728));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_37;
      v85 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificateSize;
      v91 = v5;
      v89 = *(_DWORD *)v100;
      v88 = v31;
    }
    LODWORD(Timeout) = v8;
    McTemplateK0pqqqq(v33, v85, v34, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v88, v89, v91);
    goto LABEL_37;
  }
LABEL_41:
  if ( v8 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v104 )
      goto LABEL_168;
  }
LABEL_42:
  v35 = v106;
  *(_DWORD *)(v106 + 48) = v5;
  *(_QWORD *)(v35 + 56) = v6;
  return (unsigned int)v5;
}
