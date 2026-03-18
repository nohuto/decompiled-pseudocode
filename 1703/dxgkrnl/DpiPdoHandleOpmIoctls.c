/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C01CFA78
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00A86E0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00436DC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     Template_ptpjq @ 0x1C00438E0 (Template_ptpjq.c)
 *     Template_ptpjqq @ 0x1C0043994 (Template_ptpjqq.c)
 *     Template_ptpq @ 0x1C0043A58 (Template_ptpq.c)
 *     Template_ptpqq @ 0x1C0043AEC (Template_ptpqq.c)
 *     Template_ptpqqq @ 0x1C0043B98 (Template_ptpqqq.c)
 *     Template_ptqppq @ 0x1C0043C54 (Template_ptqppq.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C008CBDC (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01748A4 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkOpmCreateHandle @ 0x1C017497C (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C0174C78 (DxgkOpmTranslateAndDestroyHandle.c)
 *     DxgkOpmTranslateHandle @ 0x1C0174D6C (DxgkOpmTranslateHandle.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0174EA4 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C01D0A50 (DpiPdoVerifyOpmParameters.c)
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
  int v14; // eax
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  int v20; // r15d
  int v21; // r15d
  int v22; // r15d
  void *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // r15
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rax
  void *v35; // r15
  unsigned int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // r13
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rdx
  __int64 (__fastcall *v44)(__int64, void *, _QWORD *, _QWORD, void **); // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  void *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // r13
  __int64 v57; // r9
  int v58; // eax
  __int64 v59; // rdx
  __int64 (__fastcall *v60)(__int64, void *, _QWORD *, void **); // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rax
  void *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  _QWORD *v70; // r15
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 (__fastcall *v73)(__int64, void *, _QWORD *, void **); // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  const EVENT_DESCRIPTOR *v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // r13
  __int64 v83; // r9
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  void *v89; // r15
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // r15
  __int64 v93; // r9
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rax
  void **v100; // r15
  __int64 v101; // rdx
  __int64 v102; // r8
  unsigned int v103; // r13d
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned int v110; // r14d
  unsigned int v111; // r15d
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // r8
  const EVENT_DESCRIPTOR *v118; // rdx
  unsigned int v119; // r13d
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  void **v128; // [rsp+28h] [rbp-D8h]
  int v129; // [rsp+28h] [rbp-D8h]
  int v130; // [rsp+30h] [rbp-D0h]
  __int64 v131; // [rsp+38h] [rbp-C8h]
  int v132; // [rsp+38h] [rbp-C8h]
  __int64 v133; // [rsp+40h] [rbp-C0h]
  unsigned int v134; // [rsp+50h] [rbp-B0h]
  int v135; // [rsp+54h] [rbp-ACh]
  unsigned int v136; // [rsp+54h] [rbp-ACh]
  unsigned int v137; // [rsp+54h] [rbp-ACh]
  unsigned int v138; // [rsp+54h] [rbp-ACh]
  unsigned int v139; // [rsp+58h] [rbp-A8h]
  unsigned int v140; // [rsp+58h] [rbp-A8h]
  void **v141; // [rsp+60h] [rbp-A0h]
  void **v142; // [rsp+60h] [rbp-A0h]
  _QWORD **v143; // [rsp+68h] [rbp-98h]
  void *v144; // [rsp+70h] [rbp-90h] BYREF
  int v145; // [rsp+78h] [rbp-88h]
  void *v146; // [rsp+80h] [rbp-80h] BYREF
  __int64 v147; // [rsp+88h] [rbp-78h]
  void *v148; // [rsp+90h] [rbp-70h] BYREF
  void *v149; // [rsp+98h] [rbp-68h] BYREF
  void *v150; // [rsp+A0h] [rbp-60h] BYREF
  void *v151; // [rsp+A8h] [rbp-58h] BYREF
  void *v152; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v153; // [rsp+B8h] [rbp-48h]
  struct _FDO_CONTEXT *v154; // [rsp+C0h] [rbp-40h]
  __int128 v155; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v156; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v157; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v147 = a2;
  LODWORD(v5) = -1073741637;
  v145 = 0;
  v6 = 0LL;
  v135 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  v8 = 0;
  v9 = *(void ***)(a2 + 112);
  v153 = v3;
  v141 = v9;
  RenderAdapterForSession = *(_QWORD *)(v7 + 64);
  v11 = *(_QWORD *)(a2 + 184);
  v154 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v12 = *(unsigned int *)(v11 + 8);
  v13 = *(_DWORD *)(v11 + 24);
  v143 = *(_QWORD ***)(v11 + 32);
  v139 = *(_DWORD *)(v11 + 8);
  if ( *(_BYTE *)(RenderAdapterForSession + 1143) )
  {
    v14 = *(_DWORD *)(RenderAdapterForSession + 1144);
    if ( v14 == 2 )
    {
      v3 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_166:
        _InterlockedExchange64(&qword_1C006FA08, 0LL);
        KeReleaseMutex(Mutex, 0);
        goto LABEL_167;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(RenderAdapterForSession + 483) )
        DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
      v8 = 1;
      if ( v13 == 2303115 )
      {
        v145 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C006FA08, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v12 = v139;
      v4 = v147;
    }
    else
    {
      if ( v14 != 1 )
      {
        v34 = WdLogNewEntry5_WdError(v9, v12);
        *(_QWORD *)(v34 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_167;
      }
      v135 = 0;
    }
  }
  if ( !*(_QWORD *)(RenderAdapterForSession + 2904) )
    goto LABEL_162;
  v15 = v13 - 2303107;
  if ( !v15 )
  {
    v134 = 4;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 4LL);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    v119 = *(_DWORD *)v143;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
    if ( v3 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
    v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 2904))(
           *(_QWORD *)(RenderAdapterForSession + 48),
           v119,
           v141);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v120);
    if ( v3 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v121, v122, v123);
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_157;
    v118 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificateSize;
    v132 = v5;
    v130 = *(_DWORD *)v141;
    v129 = v119;
LABEL_156:
    LODWORD(Timeout) = v8;
    Template_pdqqq(v116, v118, v117, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v129, v130, v132);
LABEL_157:
    v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v116);
    v65[3] = v5;
    goto LABEL_158;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    v134 = v12;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, (unsigned int)v12);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    v111 = *(_DWORD *)v143;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
    if ( v3 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
    v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2912))(
           *(_QWORD *)(RenderAdapterForSession + 48),
           v111,
           v139,
           v141);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v112);
    if ( v3 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v113, v114, v115);
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_157;
    v132 = v5;
    v118 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificate;
    v130 = v139;
    v129 = v111;
    goto LABEL_156;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    v146 = 0LL;
    v134 = 8;
    v100 = 0LL;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 8LL);
    if ( (int)v5 < 0 )
    {
      v110 = -1;
    }
    else
    {
      v103 = *(_DWORD *)v143;
      if ( v135 && v103 == 2 )
      {
        LODWORD(v5) = -1073741198;
        v104 = (_QWORD *)WdLogNewEntry5_WdEvent(v54);
        v104[3] = -1073741198LL;
        v104[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v104[5] = v8;
        v104[6] = 0LL;
        WdLogEvent5_WdEvent(v104);
        goto LABEL_161;
      }
      v100 = v141;
      if ( v8 )
      {
        v110 = *(_DWORD *)(v153 + 504);
        LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                        (struct _FDO_CONTEXT *)RenderAdapterForSession,
                        v154,
                        v103,
                        v110,
                        v141,
                        &v146);
      }
      else
      {
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 < 0 )
          goto LABEL_161;
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
        if ( v3 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
        v138 = *(_DWORD *)(v3 + 504);
        LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2920))(
                        *(_QWORD *)(RenderAdapterForSession + 48),
                        v138,
                        v103,
                        &v146);
        if ( (int)v5 >= 0 )
        {
          LODWORD(v5) = DxgkOpmCreateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3704), v146, v141, v106);
          if ( (int)v5 < 0 )
          {
            (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2968))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              v146);
            if ( (_DWORD)v5 == -1073741198 )
              LODWORD(v5) = -1073741637;
          }
        }
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v105);
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v107, v108, v109);
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        v110 = v138;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v128) = v110;
      LODWORD(Timeout) = v8;
      Template_ptqppq(v54, v101, v102, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v128, v146, *v100, v5);
    }
LABEL_64:
    v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v54);
    v65[3] = (int)v5;
LABEL_158:
    v65[4] = *(_QWORD *)(RenderAdapterForSession + 48);
    v65[5] = v8;
    v65[6] = 0LL;
    goto LABEL_159;
  }
  v18 = v17 - 4;
  if ( v18 )
  {
    v19 = v18 - 4;
    if ( !v19 )
    {
      v151 = 0LL;
      v23 = 0LL;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 0LL);
      if ( (int)v5 >= 0 )
      {
        v82 = v143[1];
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 < 0 )
          goto LABEL_161;
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
        if ( v3 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
        v84 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3704), *v143, &v151, v83);
        v23 = v151;
        LODWORD(v5) = v84;
        if ( v84 >= 0 )
          LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD *))(RenderAdapterForSession + 2936))(
                          *(_QWORD *)(RenderAdapterForSession + 48),
                          v151,
                          v82);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v85);
        if ( v3 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v86, v87, v88);
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v33 = (const EVENT_DESCRIPTOR *)&EventOPMSetSigningKeyAndSequenceNumbers;
        goto LABEL_108;
      }
LABEL_109:
      v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v24);
      v51[3] = (int)v5;
      v51[4] = *(_QWORD *)(RenderAdapterForSession + 48);
      v51[5] = v8;
      v51[6] = 0LL;
LABEL_110:
      WdLogEvent5_WdEvent(v51);
      v6 = 0LL;
      goto LABEL_160;
    }
    v20 = v19 - 4;
    if ( v20 )
    {
      v21 = v20 - 4;
      if ( v21 )
      {
        v22 = v21 - 4;
        if ( v22 )
        {
          if ( v22 == 4 )
          {
            v148 = 0LL;
            v23 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 0LL);
            if ( (int)v5 < 0 )
              goto LABEL_29;
            v26 = *v143;
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 >= 0 )
            {
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
              v28 = DxgkOpmTranslateAndDestroyHandle(
                      *(DXGADAPTER ****)(RenderAdapterForSession + 3704),
                      v26,
                      &v148,
                      v27);
              v23 = v148;
              LODWORD(v5) = v28;
              if ( v28 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2968))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v148);
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v29);
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v30, v31, v32);
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
LABEL_29:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v33 = (const EVENT_DESCRIPTOR *)&EventOPMDestroyProtectedOutput;
LABEL_108:
                LODWORD(Timeout) = v8;
                Template_ptpq(v24, v33, v25, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v23, v5);
                goto LABEL_109;
              }
              goto LABEL_109;
            }
          }
LABEL_161:
          v124 = WdLogNewEntry5_WdWarning(v9, v12, a3, v4);
          *(_QWORD *)(v124 + 24) = (int)v5;
          WdLogEvent5_WdWarning(v124);
          v6 = 0LL;
          goto LABEL_162;
        }
        v149 = 0LL;
        v140 = 0;
        v155 = 0uLL;
        v35 = 0LL;
        v36 = -1;
        LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 32LL, 0LL);
        if ( (int)v5 >= 0 )
        {
          v40 = v143[1];
          v140 = *((_DWORD *)v143 + 4);
          v142 = (void **)v143[3];
          LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          if ( (int)v5 < 0 )
            goto LABEL_161;
          v136 = *((_DWORD *)v40 + 4);
          DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
          if ( v3 )
            KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
          v42 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3704), *v143, &v149, v41);
          v35 = v149;
          LODWORD(v5) = v42;
          if ( v42 >= 0 )
          {
            v44 = *(__int64 (__fastcall **)(__int64, void *, _QWORD *, _QWORD, void **))(RenderAdapterForSession + 2960);
            v45 = *(_QWORD *)(RenderAdapterForSession + 48);
            v155 = *((_OWORD *)v40 + 1);
            LODWORD(v5) = v44(v45, v149, v40, v140, v142);
          }
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v43);
          if ( v3 )
            KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v46, v47, v48);
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          v49 = v40[2] - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
          if ( !v49 )
            v49 = v40[3] - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
          if ( !v49 && *((_DWORD *)v40 + 9) >= 0x10u )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              Template_ptpqqq(
                v38,
                &EventOPMSetProtectionLevel,
                v39,
                *(_QWORD *)(RenderAdapterForSession + 48),
                Timeout,
                v35,
                *((_DWORD *)v40 + 10),
                *((_DWORD *)v40 + 11),
                v5);
            }
            v50 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
            v50[3] = (int)v5;
            v50[4] = *(_QWORD *)(RenderAdapterForSession + 48);
            v50[5] = v8;
            v50[6] = *((unsigned int *)v40 + 10);
            WdLogEvent5_WdEvent(v50);
          }
          v36 = v136;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v133) = v5;
          LODWORD(v131) = v140;
          LODWORD(Timeout) = v8;
          Template_ptpjqq(v38, v37, v39, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v35, &v155, v131, v133);
        }
        v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
        v51[3] = (int)v5;
        v51[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v51[5] = v8;
        v51[6] = v36;
        goto LABEL_110;
      }
      v150 = 0LL;
      v156 = 0uLL;
      v52 = 0LL;
      v134 = 4096;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
      if ( (int)v5 >= 0 )
      {
        v56 = v143[1];
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 < 0 )
          goto LABEL_161;
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
        if ( v3 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
        v58 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3704), *v143, &v150, v57);
        v52 = v150;
        LODWORD(v5) = v58;
        if ( v58 >= 0 )
        {
          v60 = *(__int64 (__fastcall **)(__int64, void *, _QWORD *, void **))(RenderAdapterForSession + 2952);
          v61 = *(_QWORD *)(RenderAdapterForSession + 48);
          v156 = *((_OWORD *)v56 + 1);
          LODWORD(v5) = v60(v61, v150, v56, v141);
        }
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v59);
        if ( v3 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v62, v63, v64);
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(Timeout) = v8;
        Template_ptpjq(v54, v53, v55, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v52, &v156, v5);
      }
      goto LABEL_64;
    }
    v137 = -1;
    v144 = 0LL;
    v157 = 0uLL;
    v66 = 0LL;
    v134 = 4096;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
    if ( (int)v5 >= 0 )
    {
      v70 = v143[1];
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_161;
      v137 = *((_DWORD *)v70 + 8);
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
      LODWORD(v5) = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3704), *v143, &v144, v71);
      if ( (int)v5 >= 0 )
      {
        v73 = *(__int64 (__fastcall **)(__int64, void *, _QWORD *, void **))(RenderAdapterForSession + 2944);
        v74 = *(_QWORD *)(RenderAdapterForSession + 48);
        v157 = *((_OWORD *)v70 + 2);
        LODWORD(v5) = v73(v74, v144, v70, v141);
      }
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v72);
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v75, v76, v77);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      v78 = v70[4] - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
      if ( !v78 )
        v78 = v70[5] - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
      v68 = (__int64)v141;
      if ( !v78 && *((_DWORD *)v141 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_96:
          v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v68);
          v65[3] = (int)v5;
          v65[4] = *(_QWORD *)(RenderAdapterForSession + 48);
          v65[5] = v8;
          v65[6] = v137;
LABEL_159:
          WdLogEvent5_WdEvent(v65);
          v6 = v134;
          goto LABEL_160;
        }
        v79 = (const EVENT_DESCRIPTOR *)&EventOPMGetConnectorType;
LABEL_79:
        LODWORD(Timeout) = v8;
        Template_ptpqq(
          (__int64)v141,
          v79,
          v69,
          *(_QWORD *)(RenderAdapterForSession + 48),
          Timeout,
          v144,
          *((_DWORD *)v141 + 10),
          v5);
        goto LABEL_96;
      }
      v80 = v70[4] - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
      if ( !v80 )
        v80 = v70[5] - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
      if ( !v80 && *((_DWORD *)v141 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_96;
        v79 = (const EVENT_DESCRIPTOR *)&EventOPMGetSupportedProtectionTypes;
        goto LABEL_79;
      }
      v81 = v70[4] - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
      if ( !v81 )
        v81 = v70[5] - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
      if ( !v81 && *((_DWORD *)v70 + 13) >= 4u && *((_DWORD *)v141 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(Timeout) = v8;
          Template_ptpqqq(
            (__int64)v141,
            &EventOPMGetActualProtectionLevel,
            v69,
            *(_QWORD *)(RenderAdapterForSession + 48),
            Timeout,
            v144,
            *((_DWORD *)v70 + 14),
            *((_DWORD *)v141 + 10),
            v5);
        }
        goto LABEL_96;
      }
      v66 = v144;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = v8;
      Template_ptpjq(v68, v67, v69, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v66, &v157, v5);
    }
    goto LABEL_96;
  }
  v152 = 0LL;
  v6 = 16LL;
  v89 = 0LL;
  LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 16LL);
  if ( (int)v5 >= 0 )
  {
    v92 = *v143;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v12, a3, v4);
    if ( v3 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3704), 1LL);
    v94 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3704), v92, &v152, v93);
    v89 = v152;
    LODWORD(v5) = v94;
    if ( v94 >= 0 )
      LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 2928))(
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      v152,
                      v141);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3704), v95);
    if ( v3 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3704), v96, v97, v98);
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Timeout) = v8;
    Template_ptpq(v90, &EventOPMGetRandomNumber, v91, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v89, v5);
  }
  v99 = (_QWORD *)WdLogNewEntry5_WdEvent(v90);
  v99[3] = (int)v5;
  v99[4] = *(_QWORD *)(RenderAdapterForSession + 48);
  v99[5] = v8;
  v99[6] = 0LL;
  WdLogEvent5_WdEvent(v99);
LABEL_160:
  if ( (int)v5 < 0 )
    goto LABEL_161;
LABEL_162:
  if ( v8 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v145 )
      goto LABEL_166;
  }
LABEL_167:
  v125 = v147;
  *(_DWORD *)(v147 + 48) = v5;
  *(_QWORD *)(v125 + 56) = v6;
  return (unsigned int)v5;
}
