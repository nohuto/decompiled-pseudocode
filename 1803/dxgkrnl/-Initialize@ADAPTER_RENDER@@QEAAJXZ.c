/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0158DB8 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0002444 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AECC (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AEF8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001616C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0023D58 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     RtlStringLengthWorkerW @ 0x1C0028F58 (RtlStringLengthWorkerW.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0028FA0 (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0097778 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015A224 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C015B4C0 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z @ 0x1C015B5A8 (-IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z.c)
 *     ?UpdateUMDPathsWithComponentizedLocation@ADAPTER_RENDER@@AEAAXXZ @ 0x1C015C4C4 (-UpdateUMDPathsWithComponentizedLocation@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C015FBF4 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  _WORD *v2; // rbx
  __int64 v4; // rcx
  UINT64 v5; // r13
  __int64 v6; // rax
  union _LARGE_INTEGER v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // r12d
  int v10; // eax
  int KmdFileVersion; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int16 v17; // r15
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rbx
  const wchar_t *v20; // r11
  unsigned int v21; // eax
  union _LARGE_INTEGER *v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned int v28; // ebx
  unsigned int *v29; // r12
  unsigned int v30; // r14d
  unsigned int v31; // edi
  __int64 v32; // rax
  int v33; // eax
  NTSTATUS v34; // eax
  __int64 v35; // rax
  size_t v36; // rdi
  __int64 v37; // rcx
  const GUID *v38; // r9
  _DWORD *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  DXGADAPTER *v48; // rcx
  __int64 v49; // rcx
  _BOOL8 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // r15
  SIZE_T v55; // rax
  PVOID v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // r14d
  unsigned int *v60; // rbx
  DXGADAPTER *v61; // rcx
  __int64 v62; // r8
  DWORD v63; // edi
  DXGADAPTER *v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdi
  unsigned int i; // r12d
  SIZE_T v68; // r8
  unsigned __int16 *v69; // r15
  DWORD v70; // r14d
  bool v71; // of
  SIZE_T v72; // rax
  char *v73; // rax
  __int64 v74; // rcx
  SIZE_T v75; // rax
  PVOID v76; // rax
  SIZE_T v77; // rax
  PVOID v78; // rax
  DXGADAPTER *v79; // rbx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  DXGADAPTER *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  char *v90; // rdx
  _BYTE *v91; // r14
  __int64 v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rcx
  int v105; // eax
  unsigned int v106; // r14d
  __int64 v107; // rax
  unsigned int v108; // ebx
  SIZE_T v109; // rax
  unsigned __int64 v110; // kr00_8
  unsigned int *v111; // rdi
  __int64 v112; // r8
  signed int LowPart; // r15d
  __int64 v114; // rcx
  __int64 v115; // r12
  unsigned int *v116; // r15
  __int64 v117; // rbx
  _QWORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v123; // [rsp+48h] [rbp-C0h] BYREF
  char *v124; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  union _LARGE_INTEGER v126; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v127; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String; // [rsp+70h] [rbp-98h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v129; // [rsp+80h] [rbp-88h] BYREF
  size_t v130; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v132; // [rsp+C0h] [rbp-48h]
  union _LARGE_INTEGER v133; // [rsp+C8h] [rbp-40h] BYREF
  int v134; // [rsp+D0h] [rbp-38h]
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 pData; // [rsp+D8h] [rbp-30h] BYREF
  PVOID *v136; // [rsp+138h] [rbp+30h]
  __int64 v137; // [rsp+140h] [rbp+38h]
  __int64 *v138; // [rsp+148h] [rbp+40h]
  __int64 v139; // [rsp+150h] [rbp+48h]
  __int64 *v140; // [rsp+158h] [rbp+50h]
  __int64 v141; // [rsp+160h] [rbp+58h]
  union _LARGE_INTEGER *v142; // [rsp+168h] [rbp+60h]
  __int64 v143; // [rsp+170h] [rbp+68h]
  size_t *p_pcchLength; // [rsp+178h] [rbp+70h]
  __int64 v145; // [rsp+180h] [rbp+78h]
  wchar_t psz[8]; // [rsp+188h] [rbp+80h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = (_WORD *)((char *)this + 264);
  *(_OWORD *)((char *)this + 392) = *(_OWORD *)(v1 + 1352);
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)(v1 + 1368);
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)(v1 + 1288);
  *((_OWORD *)this + 30) = *(_OWORD *)(v1 + 1312);
  *((_DWORD *)this + 118) = *(_DWORD *)(v1 + 1304);
  *((_DWORD *)this + 119) = *(_DWORD *)(v1 + 1308);
  *((_DWORD *)this + 124) = *(_DWORD *)(v1 + 1328);
  *((_DWORD *)this + 125) = *(_DWORD *)(v1 + 1332);
  *(_OWORD *)((char *)this + 424) = *(_OWORD *)(v1 + 1384);
  *(_OWORD *)((char *)this + 440) = *(_OWORD *)(v1 + 1400);
  v5 = 0LL;
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v1 + 1248),
              (struct _UNICODE_STRING *)((char *)this + 264)) < 0
    || (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1264LL),
              (struct _UNICODE_STRING *)((char *)this + 328)) < 0 )
  {
    goto LABEL_3;
  }
  ADAPTER_RENDER::UpdateUMDPathsWithComponentizedLocation(this);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 136);
  v8 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 64LL);
  v9 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL);
  LODWORD(v123) = v9;
  if ( *(_BYTE *)(v8 + 185) )
    goto LABEL_55;
  if ( !*v2 )
  {
LABEL_3:
    v6 = WdLogNewEntry5_WdError(v4);
    v7.LowPart = -1073741438;
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v6 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v6);
    return v7.LowPart;
  }
  if ( (v9 >= 0x6000 && *(_DWORD *)(v8 + 276) != 1297040209 || v9 >= 0x8000 && *(_DWORD *)(v8 + 276) == 1297040209)
    && !*(_BYTE *)(v8 + 2419) )
  {
    v10 = *(_DWORD *)(v8 + 300);
    if ( (v10 & 0x10) == 0 && (v10 & 8) == 0 && (v10 & 0x200) == 0 && (v10 & 0x4000) == 0 && (v10 & 0x2000) == 0 )
    {
      v126.QuadPart = 0LL;
      KmdFileVersion = ADAPTER_RENDER::GetKmdFileVersion((union _LARGE_INTEGER *)this, &v126);
      v15 = KmdFileVersion;
      if ( KmdFileVersion < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v16 + 32) = v15;
        WdLogEvent5_WdWarning(v16);
        goto LABEL_55;
      }
      v131 = 0LL;
      v17 = 0;
      v132 = 0LL;
      v18 = 0LL;
      v19 = *(const wchar_t **)(*((_QWORD *)this + 2) + 1416LL);
      if ( v19 && RtlStringLengthWorkerW(v19, 0x7FFFuLL, &pcchLength) >= 0 )
      {
        v5 = (UINT64)v19;
        v18 = v19;
        v17 = 2 * pcchLength;
        WORD1(v131) = 2 * pcchLength + 2;
      }
      wcscpy(psz, L"00000");
      *(_DWORD *)(&String.MaximumLength + 1) = 0;
      *(_DWORD *)&String.Length = 0;
      String.Buffer = 0LL;
      if ( RtlStringLengthWorkerW(psz, 0x7FFFuLL, &pcchLength) >= 0 )
      {
        v20 = v18;
        String.Length = 2 * pcchLength;
        String.MaximumLength = 2 * pcchLength + 2;
        String.Buffer = psz;
      }
      v21 = 0;
      v22 = &v133;
      v23 = 0LL;
      v131 = 0LL;
      v24 = v17;
      v132 = 0LL;
      v25 = v17 >> 1;
      LODWORD(v26) = -1073741275;
      v133.QuadPart = 0LL;
      v134 = 0;
      LODWORD(v124) = v24;
      if ( v25 )
      {
        while ( 1 )
        {
          if ( *v20 == 46 )
          {
            v22->LowPart = v21;
            v22 = (union _LARGE_INTEGER *)((char *)v22 + 4);
            v23 = (unsigned int)(v23 + 1);
          }
          if ( (_DWORD)v23 == 3 )
            break;
          ++v21;
          ++v20;
          if ( v21 >= v25 )
            goto LABEL_30;
        }
        LODWORD(v26) = 0;
      }
LABEL_30:
      if ( (int)v26 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v27 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v27 + 32) = (int)v26;
        WdLogEvent5_WdError(v27);
        goto LABEL_46;
      }
      v28 = 0;
      v29 = (unsigned int *)&v133;
      while ( v28 )
      {
        v31 = v25;
        v30 = *((_DWORD *)&v133 + v28 - 1) + 1;
        if ( v28 != 3 )
          goto LABEL_36;
LABEL_37:
        if ( v30 >= v31 || v31 > v25 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v32 + 24) = 1018LL;
          WdLogEvent5_WdAssertion(v32);
        }
        v33 = RtlUnicodeStringCchCopyStringN(&String, (const unsigned __int16 *)(v5 + 2LL * v30), v31 - v30);
        v26 = v33;
        if ( v33 < 0 || (v34 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v131 + v28), v26 = v34, v34 < 0) )
        {
          v35 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v35 + 24) = *((_QWORD *)this + 2);
          *(_QWORD *)(v35 + 32) = v26;
          WdLogEvent5_WdError(v35);
LABEL_45:
          v24 = (unsigned int)v124;
LABEL_46:
          v7 = v126;
          HIDWORD(pcchLength) = WORD2(v131) | ((_DWORD)v131 << 16);
          LODWORD(pcchLength) = WORD2(v132) | ((_DWORD)v132 << 16);
          v36 = pcchLength;
          if ( ((int)v26 < 0 || pcchLength != v126.QuadPart)
            && !ADAPTER_RENDER::IsKnownMismatchedVersionedDriver(this, (union _LARGE_INTEGER *)&pcchLength, &v126) )
          {
            if ( dword_1C0079090 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x400000000100uLL) )
            {
              v39 = (_DWORD *)*((_QWORD *)this + 2);
              pData.Info.MonitoredFence.FenceValueGPUVirtualAddress = (D3DGPU_VIRTUAL_ADDRESS)&pData.Info.Reserved.Reserved[5];
              pData.Info.Reserved.Reserved[6] = (UINT64)&v130;
              *(_QWORD *)&pData.Info.SharedHandle = &v133;
              pData.Info.PeriodicMonitoredFence.FenceValueGPUVirtualAddress = 2LL;
              pData.Info.Reserved.Reserved[4] = v5;
              pData.Info.Reserved.Reserved[5] = v24;
              v130 = v36;
              pData.Info.Reserved.Reserved[7] = 8LL;
              v133 = v7;
              *(_QWORD *)&pData.hSyncObject = 8LL;
              LODWORD(v124) = v39[69];
              v136 = (PVOID *)&v124;
              v137 = 4LL;
              LODWORD(v123) = v39[70];
              v138 = &v123;
              v139 = 4LL;
              LODWORD(v127) = v39[71];
              v140 = &v127;
              v141 = 4LL;
              v126.LowPart = v39[72];
              v142 = &v126;
              v143 = 4LL;
              LODWORD(pcchLength) = v39[73];
              p_pcchLength = &pcchLength;
              v145 = 4LL;
              TlgWrite(
                (TraceLoggingHProvider)&dword_1C0079090,
                &unk_1C00581BA,
                0LL,
                v38,
                0xBu,
                (EVENT_DATA_DESCRIPTOR *)&pData);
            }
            v40 = (_QWORD *)WdLogNewEntry5_WdError(v37);
            v41 = *((_QWORD *)this + 2);
            v40[5] = v7.QuadPart;
            v7.LowPart = -1073741438;
            v40[3] = v41;
            v40[7] = -1073741438LL;
            v40[4] = v36;
            v40[6] = (int)v26;
            WdLogEvent5_WdError(v40);
            DxgCreateLiveDumpWithWdLogs(0x193u, 0x80BuLL, 0LL, 0LL, 0LL);
            LOBYTE(v42) = 1;
            if ( (unsigned __int8)WdIsDebuggerPresent(v42) )
            {
              DbgPrintEx(
                0x65u,
                0,
                "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detecte"
                "d. The adapter will fail to start.");
              __debugbreak();
            }
            return v7.LowPart;
          }
          v9 = v123;
          LODWORD(v5) = 0;
          goto LABEL_55;
        }
        ++v28;
        ++v29;
        if ( v28 > 3 )
          goto LABEL_45;
      }
      v30 = 0;
LABEL_36:
      v31 = *v29;
      goto LABEL_37;
    }
  }
LABEL_55:
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1120),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
    v7.LowPart = -1073741801;
    v47[3] = this;
    v47[4] = -1073741801LL;
    v47[5] = 0LL;
    WdLogEvent5_WdWarning(v47);
    return v7.LowPart;
  }
  *((_BYTE *)this + 1073) = 1;
  BYTE1(v123) = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v123);
  v48 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !*((_BYTE *)v48 + 185) )
  {
    v50 = DXGADAPTER::IsDxgmms2(v48) != 0;
    *((_QWORD *)this + 68) = *((_QWORD *)DXGGLOBAL::GetGlobal(v49) + v50 + 13);
    v52 = *((_QWORD *)DXGGLOBAL::GetGlobal(v51) + v50 + 15);
    *((_QWORD *)this + 65) = v52;
    if ( !*((_QWORD *)this + 68) || !v52 )
      goto LABEL_100;
  }
  v53 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v53 + 1836) & 0x40) != 0 )
  {
    v54 = *(unsigned int *)(v53 + 248);
    v55 = 144 * v54;
    if ( !is_mul_ok(v54, 0x90uLL) )
      v55 = -1LL;
    v56 = operator new[](v55, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 126) = v56;
    if ( !v56 )
    {
      v58 = WdLogNewEntry5_WdLowResource(v57);
      *(_QWORD *)(v58 + 24) = 1137LL;
      goto LABEL_125;
    }
    memset(v56, 0, 144 * v54);
    v59 = 0;
    if ( (_DWORD)v54 )
    {
      while ( 1 )
      {
        v60 = (unsigned int *)(*((_QWORD *)this + 126) + 144LL * v59);
        memset(&v129, 0, sizeof(v129));
        v61 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v129.pInputData = &pcchLength;
        v129.Type = DXGKQAITYPE_GPUMMUCAPS;
        v129.pOutputData = v60;
        v129.OutputDataSize = 24;
        LODWORD(pcchLength) = v59;
        v129.InputDataSize = 4;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v61, &v129, v62) < 0 )
          break;
        v53 = v60[4];
        if ( (unsigned int)(v53 - 2) > 4 )
        {
          v94 = WdLogNewEntry5_WdError(v53);
          *(_QWORD *)(v94 + 24) = 1169LL;
          WdLogEvent5_WdError(v94);
          v7.LowPart = -1073741438;
          goto LABEL_127;
        }
        if ( v9 < 0x5014 )
          *v60 &= ~0x20u;
        v63 = 0;
        if ( (_DWORD)v53 )
        {
          do
          {
            memset(&pData, 0, 0x30uLL);
            pData.hDevice = 14;
            LOWORD(v124) = v63;
            WORD1(v124) = v59;
            pData.Info.SynchronizationMutex.InitialState = 4;
            *(_QWORD *)&pData.Info.Type = &v124;
            v64 = (DXGADAPTER *)*((_QWORD *)this + 2);
            LODWORD(pData.Info.Reserved.Reserved[2]) = v9 < 0x5012 ? 16 : 20;
            pData.Info.PeriodicMonitoredFence.Time = (UINT64)&v60[4 * v63 + 6 + v63];
            if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v64, (struct _DXGKARG_QUERYADAPTERINFO *)&pData, v65) < 0 )
              goto LABEL_100;
            v53 = v60[4 * v63 + 10 + v63];
            if ( (((_DWORD)v53 - 1) & (unsigned int)v53) != 0 )
            {
              v93 = (_QWORD *)WdLogNewEntry5_WdError(v53);
LABEL_121:
              v93[4] = v63;
              v93[3] = this;
              WdLogEvent5_WdError(v93);
              v7.LowPart = -1073741811;
              goto LABEL_127;
            }
            ++v63;
          }
          while ( v63 < v60[4] );
          LODWORD(v5) = 0;
        }
        if ( ++v59 >= (unsigned int)v54 )
          goto LABEL_76;
      }
LABEL_100:
      v95 = WdLogNewEntry5_WdError(v52);
      v7.QuadPart = -1073741438LL;
LABEL_135:
      *(_QWORD *)(v95 + 24) = this;
      *(union _LARGE_INTEGER *)(v95 + 32) = v7;
LABEL_136:
      WdLogEvent5_WdError(v95);
      goto LABEL_127;
    }
  }
LABEL_76:
  v66 = *((_QWORD *)this + 2);
  if ( *(int *)(v66 + 2104) < 4864 )
  {
LABEL_130:
    if ( !*(_BYTE *)(v66 + 185) )
    {
      v98 = *((_QWORD *)this + 65);
      Global = DXGGLOBAL::GetGlobal(v53);
      v100 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v98 + 8) + 32LL))(
               this,
               *(_QWORD *)(v66 + 192),
               (__int64)Global + 96);
      *((_QWORD *)this + 66) = v100;
      if ( !v100 )
        goto LABEL_126;
      v101 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 24LL))(this);
      *((_QWORD *)this + 69) = v101;
      if ( !v101 )
        goto LABEL_126;
    }
    memset(&pData, 0, sizeof(pData));
    pData.Info.Flags.Value |= 1u;
    pData.Info.Type = D3DDDI_FENCE;
    v102 = CreateSynchronizationObjectInternal(
             0LL,
             1,
             (DXGADAPTER **)this,
             &pData,
             (struct DXGSYNCOBJECT **)this + 84,
             0LL,
             0LL);
    v7.QuadPart = v102;
    if ( v102 < 0 )
    {
      v95 = WdLogNewEntry5_WdError(v103);
      goto LABEL_135;
    }
    v104 = *((_QWORD *)this + 2);
    v105 = *(_DWORD *)(v104 + 2104);
    if ( v105 >= 4864 )
    {
      if ( v105 < 0x2000 )
        v106 = 1;
      else
        v106 = *(_DWORD *)(v104 + 248);
      LODWORD(v124) = 0;
      if ( v106 )
      {
        v107 = 0LL;
        do
        {
          v108 = *(unsigned __int16 *)(352 * v107 + *(_QWORD *)(*((_QWORD *)this + 2) + 2360LL));
          v110 = *(unsigned __int16 *)(352 * v107 + *(_QWORD *)(*((_QWORD *)this + 2) + 2360LL));
          v109 = 4 * v110;
          v5 = v108;
          if ( !is_mul_ok(v110, 4uLL) )
            v109 = -1LL;
          v111 = (unsigned int *)operator new[](v109, 0x4B677844u, (POOL_TYPE)512);
          if ( !v111 )
            goto LABEL_126;
          LODWORD(pcchLength) = (_DWORD)v124;
          v129.Type = DXGKQAITYPE_HISTORYBUFFERPRECISION;
          v129.pInputData = &pcchLength;
          v129.InputDataSize = 4;
          v129.pOutputData = v111;
          v129.OutputDataSize = 4 * v108;
          if ( v106 > 1 )
          {
            v129.InputDataSize = 4;
            v129.pInputData = &v124;
          }
          v126.LowPart = DXGADAPTER::DdiQueryAdapterInfo(*((DXGADAPTER **)this + 2), &v129, v112);
          LowPart = v126.LowPart;
          LOBYTE(v114) = 1;
          if ( (v126.LowPart & 0x80000000) != 0 )
          {
            LODWORD(v5) = 0;
            LOBYTE(v114) = 0;
          }
          else
          {
            if ( !v108 )
            {
              LODWORD(v5) = 0;
              goto LABEL_163;
            }
            v115 = 0LL;
            v116 = v111;
            do
            {
              v117 = *v116;
              if ( (unsigned int)(v117 - 1) <= 0x1E || (unsigned int)v117 >= 0x41 )
              {
                v118 = (_QWORD *)WdLogNewEntry5_WdError(v114);
                v118[3] = this;
                v118[4] = v117;
                v118[5] = v115;
                WdLogEvent5_WdError(v118);
                LOBYTE(v114) = 0;
              }
              else if ( !(_DWORD)v117 )
              {
                *((_BYTE *)this + 728) = 1;
              }
              ++v115;
              ++v116;
              --v5;
            }
            while ( v5 );
            LowPart = v126.LowPart;
          }
          if ( !(_BYTE)v114 )
          {
            operator delete[](v111);
            *((_BYTE *)this + 728) = 0;
            v111 = 0LL;
            if ( LowPart >= 0 )
            {
              v7.LowPart = -1073741438;
              goto LABEL_169;
            }
            v121 = WdLogNewEntry5_WdEvent(v120, v119);
            *(_QWORD *)(v121 + 24) = this;
            WdLogEvent5_WdEvent(v121);
          }
LABEL_163:
          *(_QWORD *)(352LL * (unsigned int)v124 + *(_QWORD *)(*((_QWORD *)this + 2) + 2360LL) + 32) = v111;
          v107 = (unsigned int)((_DWORD)v124 + 1);
          LODWORD(v124) = v107;
        }
        while ( (unsigned int)v107 < v106 );
      }
      if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
      {
        *((_QWORD *)this + 98) = -500000LL;
        KeInitializeTimer((PKTIMER)((char *)this + 792));
        KeInitializeDpc((PRKDPC)((char *)this + 856), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
      }
      if ( *((_BYTE *)this + 728) != (_BYTE)v5 )
        KeInitializeSpinLock((PKSPIN_LOCK)this + 125);
    }
    v7.LowPart = v5;
    goto LABEL_169;
  }
  for ( i = 0; ; ++i )
  {
    v66 = *((_QWORD *)this + 2);
    if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v66) )
    {
      if ( *(int *)(v66 + 2104) < 8960 )
      {
        *(_DWORD *)(v66 + 1832) &= 0xFFFFF87F;
        v66 = *((_QWORD *)this + 2);
      }
      goto LABEL_130;
    }
    v69 = (unsigned __int16 *)(*(_QWORD *)(v66 + 2360) + 352LL * i);
    v70 = *v69;
    v72 = 74LL * *v69;
    v71 = (*v69 * (unsigned __int128)0x4AuLL) >> 64 != 0;
    v126.LowPart = v70;
    if ( v71 )
      v72 = v68;
    v73 = (char *)operator new(v72, 0x4B677844u, 1, PagedPool);
    v124 = v73;
    if ( !v73 )
      break;
    *((_QWORD *)v69 + 3) = v73;
    v127 = *((_QWORD *)this + 2) + 1768LL;
    v75 = 36LL * v70;
    if ( !is_mul_ok(v70, 0x24uLL) )
      v75 = -1LL;
    v76 = operator new(v75, 0x4B677844u, 1, PagedPool);
    if ( !v76 )
      break;
    *((_QWORD *)v69 + 14) = v76;
    v77 = 8LL * v70;
    if ( !is_mul_ok(v70, 8uLL) )
      v77 = -1LL;
    v78 = operator new(v77, 0x4B677844u, 1, PagedPool);
    if ( !v78 )
      break;
    *((_QWORD *)v69 + 15) = v78;
    v79 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( (int)DXGADAPTER::GetDriverVersion(v79) >= 2400 )
    {
      LODWORD(pcchLength) = i;
      memset(&v129, 0, sizeof(v129));
      v129.Type = DXGKQAITYPE_ADAPTERPERFDATA_CAPS;
      v129.pInputData = &pcchLength;
      v129.InputDataSize = 4;
      v129.pOutputData = v69 + 96;
      v129.OutputDataSize = 28;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v79, &v129, v80) < 0 )
      {
        v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
        *(_QWORD *)(v84 + 24) = this;
        WdLogEvent5_WdWarning(v84);
      }
      v85 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v129.pOutputData = v69 + 110;
      v129.Type = DXGKQAITYPE_GPUVERSION;
      v129.OutputDataSize = 128;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v85, &v129, v83) < 0 )
      {
        v89 = WdLogNewEntry5_WdWarning(v87, v86, v88);
        *(_QWORD *)(v89 + 24) = this;
        WdLogEvent5_WdWarning(v89);
      }
    }
    v63 = 0;
    if ( v70 )
    {
      v90 = v124;
      v91 = v124 + 72;
      while ( 1 )
      {
        v7.LowPart = DXGADAPTER::DdiGetNodeMetadata(
                       *((DXGADAPTER **)this + 2),
                       v63 | (i << 16),
                       (struct _DXGK_NODEMETADATA *)&v90[74 * v63]);
        if ( (v7.LowPart & 0x80000000) != 0 )
          break;
        if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1664LL) >= 0x9000u )
        {
          v96 = *((_DWORD *)v91 - 1);
          if ( (v96 & 1) != 0 && !*v91 && !v91[1] )
          {
            v93 = (_QWORD *)WdLogNewEntry5_WdError(v92);
            v93[5] = 1323LL;
            goto LABEL_121;
          }
          if ( v96 >= 2 )
          {
            v93 = (_QWORD *)WdLogNewEntry5_WdError(2LL);
            v93[5] = 1329LL;
            goto LABEL_121;
          }
        }
        else
        {
          *((_DWORD *)v91 - 1) = 0;
        }
        v97 = v127;
        if ( *v91 )
        {
          if ( (*(_DWORD *)(v127 + 68) & 0x40) == 0 )
          {
            v93 = (_QWORD *)WdLogNewEntry5_WdError(v127);
            v93[5] = 1338LL;
            goto LABEL_121;
          }
          if ( v63 == v69[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2402LL) )
            *((_BYTE *)v69 + 40) = 1;
        }
        if ( v91[1] )
        {
          if ( (*(_DWORD *)(v97 + 68) & 0x80u) == 0 )
          {
            v93 = (_QWORD *)WdLogNewEntry5_WdError(v97);
            v93[5] = 1351LL;
            goto LABEL_121;
          }
          if ( v63 == v69[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2402LL) )
            *((_BYTE *)v69 + 40) = 1;
        }
        v90 = v124;
        ++v63;
        v91 += 74;
        if ( v63 >= v126.LowPart )
        {
          LODWORD(v5) = 0;
          goto LABEL_117;
        }
      }
      v95 = WdLogNewEntry5_WdError(v92);
      *(_QWORD *)(v95 + 24) = this;
      goto LABEL_136;
    }
LABEL_117:
    ;
  }
  v58 = WdLogNewEntry5_WdLowResource(v74);
  *(_QWORD *)(v58 + 24) = this;
LABEL_125:
  WdLogEvent5_WdLowResource(v58);
LABEL_126:
  v7.LowPart = -1073741801;
LABEL_127:
  LOBYTE(v5) = 0;
LABEL_169:
  if ( BYTE1(v123) != (_BYTE)v5 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v123);
  return v7.LowPart;
}
