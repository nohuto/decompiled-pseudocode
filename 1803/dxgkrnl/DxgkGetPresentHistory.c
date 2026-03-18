/*
 * XREFs of DxgkGetPresentHistory @ 0x1C00DF2D0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0011A08 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C0011B58 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00158C0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A3DC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     McTemplateK0ppqqx @ 0x1C002DFDC (McTemplateK0ppqqx.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, int a2, __int64 a3)
{
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdi
  ULONG64 v16; // rcx
  __int64 v17; // r8
  int v18; // esi
  int v19; // eax
  struct _KTHREAD **v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rcx
  struct DXGADAPTER *v23; // rdi
  int PairingAdapters; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct DXGADAPTER *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGADAPTER *v31; // rcx
  signed __int64 v32; // rax
  struct DXGADAPTER *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  DXGSESSIONMGR *v47; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  char *v56; // rcx
  unsigned int v57; // ebx
  int v58; // esi
  unsigned int v59; // edi
  unsigned int v60; // eax
  __int64 v61; // r8
  unsigned int *v62; // rsi
  unsigned int v63; // edi
  int v64; // edi
  LONG v65; // r13d
  unsigned int v66; // edi
  char *v67; // r12
  int *v68; // rsi
  int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v74; // edi
  unsigned int v75; // eax
  char *v76; // r9
  unsigned __int8 v77; // al
  unsigned int v78; // edx
  int v79; // ecx
  _QWORD *v80; // rax
  unsigned int v81; // ecx
  unsigned int v82; // edi
  int v83; // edx
  __int64 *ThreadProperty; // rax
  __int64 *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // rax
  int v93; // eax
  __int64 v94; // rax
  int v95; // r9d
  __int64 v96; // rax
  __int64 v97; // rax
  _OWORD *v98; // rax
  _DWORD *v99; // rdx
  _DWORD *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  int v109; // r9d
  _QWORD *v110; // rax
  int v111; // esi
  __int64 v112; // rax
  int v113; // r9d
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  void *v122; // r9
  char *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rax
  _DWORD *v126; // rdx
  _DWORD *v127; // rdx
  _DWORD *v128; // rdx
  __int64 v129; // rbx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // r8
  unsigned __int64 *v134; // [rsp+28h] [rbp-150h]
  __int64 v135; // [rsp+30h] [rbp-148h]
  __int64 v136; // [rsp+40h] [rbp-138h] BYREF
  __int64 v137; // [rsp+48h] [rbp-130h]
  unsigned int v138; // [rsp+50h] [rbp-128h]
  __int64 v139; // [rsp+58h] [rbp-120h] BYREF
  char v140; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v141; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v142; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v143; // [rsp+74h] [rbp-104h]
  int v144; // [rsp+78h] [rbp-100h]
  void *v145; // [rsp+80h] [rbp-F8h]
  __int64 v146; // [rsp+88h] [rbp-F0h]
  char *v147; // [rsp+90h] [rbp-E8h]
  DXGADAPTER *v148; // [rsp+98h] [rbp-E0h] BYREF
  unsigned int i; // [rsp+A8h] [rbp-D0h]
  __int64 v150; // [rsp+B0h] [rbp-C8h] BYREF
  char v151; // [rsp+B8h] [rbp-C0h]
  char *v152; // [rsp+C0h] [rbp-B8h]
  _BYTE v153[16]; // [rsp+C8h] [rbp-B0h] BYREF
  DXGADAPTER *v154; // [rsp+D8h] [rbp-A0h]
  char v155; // [rsp+E0h] [rbp-98h]
  char v156[8]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v157; // [rsp+F0h] [rbp-88h]
  int v158; // [rsp+F8h] [rbp-80h]
  int v159; // [rsp+100h] [rbp-78h]
  unsigned int v160; // [rsp+104h] [rbp-74h]
  struct DXGADAPTER *v161[2]; // [rsp+108h] [rbp-70h] BYREF
  unsigned int v162[4]; // [rsp+118h] [rbp-60h]
  __int128 v163; // [rsp+128h] [rbp-50h]
  unsigned __int64 v164[8]; // [rsp+138h] [rbp-40h] BYREF
  int v166; // [rsp+190h] [rbp+18h]
  unsigned int v167; // [rsp+198h] [rbp+20h]

  v5 = 0;
  v137 = 0LL;
  LODWORD(v136) = 2060;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2060);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v136, 2060);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v85 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v13 = *v85;
      }
    }
  }
  v146 = v13;
  if ( !v13 )
  {
    v86 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v86 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v86);
LABEL_112:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
    if ( (qword_1C0079010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_199;
  }
  if ( !*(_BYTE *)(v13 + 322) )
  {
    v89 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v89 + 24) = v13;
    *(_QWORD *)(v89 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v89);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v90, &EventProfilerExit, v91, v136);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139, (struct DXGFASTMUTEX *const *)v13);
  if ( v140 )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v92[3] = 275LL;
    v92[4] = 4LL;
    v92[5] = &v139;
    v92[6] = 0LL;
    v92[7] = 0LL;
    WdLogEvent5_WdCriticalError(v92);
  }
  v15 = v139;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v15 + 8) == KeGetCurrentThread() )
  {
    v93 = *(_DWORD *)(v15 + 24);
    if ( v93 <= 0 )
    {
      v94 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v94 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v94);
      v93 = *(_DWORD *)(v15 + 24);
    }
    v19 = v93 + 1;
    v18 = 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v95 = *(_DWORD *)(v15 + 28);
        if ( v95 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v16, &EventBlockThread, v17, v95);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v15);
      ExAcquirePushLockExclusiveEx(v15 + 16, 0LL);
    }
    if ( *(_QWORD *)(v15 + 8) )
    {
      v96 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v96 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v96);
    }
    if ( *(_DWORD *)(v15 + 24) )
    {
      v97 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v97 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v97);
    }
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    v18 = 1;
    v19 = 1;
  }
  *(_DWORD *)(v15 + 24) = v19;
  v140 = 1;
  if ( a2 )
  {
    v159 = 0;
    v98 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v98 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v162 = *v98;
    v163 = v98[1];
    v99 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v99 = (_DWORD *)MmUserProbeAddress;
    *v99 = 0;
    v100 = (_DWORD *)(a1 + 8);
    v16 = MmUserProbeAddress;
    if ( a1 + 8 >= MmUserProbeAddress )
      v100 = (_DWORD *)MmUserProbeAddress;
    *v100 = 0;
  }
  else
  {
    *(_OWORD *)v162 = *(_OWORD *)a1;
    v163 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !(_QWORD)v163 )
  {
    v101 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v101 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v101);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v139);
    goto LABEL_112;
  }
  v20 = (struct _KTHREAD **)v13;
  v21 = v162[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v148, v162[0], v20, v161);
  v23 = v161[0];
  if ( !v161[0] )
  {
    v102 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v102 + 24) = v21;
    *(_QWORD *)(v102 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v102);
    if ( v148 )
      DXGADAPTER::ReleaseReferenceNoTracking(v148);
    goto LABEL_111;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v161[0], 0, &v141, v164, 0LL, 0LL);
  v26 = PairingAdapters;
  v138 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v103 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v103 + 24) = v23;
    *(_QWORD *)(v103 + 32) = v26;
    WdLogEvent5_WdError(v103);
    if ( v148 )
      DXGADAPTER::ReleaseReferenceNoTracking(v148);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v139);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v104, &EventProfilerExit, v105, v136);
    return (unsigned int)v26;
  }
  v27 = v141;
  if ( !v141 )
  {
    v106 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v106 + 24) = 271LL;
    WdLogEvent5_WdAssertion(v106);
  }
  COREACCESS::COREACCESS((COREACCESS *)v153, v27);
  if ( v155 )
  {
    v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
    v107[3] = 275LL;
    v107[4] = 4LL;
    v107[5] = v153;
    v107[6] = 0LL;
    v107[7] = 0LL;
    WdLogEvent5_WdCriticalError(v107);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v154 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v154 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v29, &EventBlockThread, v30, 72);
      KeWaitForSingleObject((char *)v154 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v154);
  }
  v155 = 1;
  v31 = v141;
  v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v33 = v141;
  if ( v32 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v141 + 2), v141);
  v34 = *((_QWORD *)v33 + 308);
  if ( !v34 )
  {
    v108 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v108 + 24) = 283LL;
    WdLogEvent5_WdAssertion(v108);
    v34 = *((_QWORD *)v33 + 308);
  }
  v144 = 0;
  v143 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156, (struct _KTHREAD **)(v34 + 736), 0);
  KeEnterCriticalRegion();
  v35 = v157;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v157, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v109 = *(_DWORD *)(v35 + 16);
      if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v37, &EventBlockThread, v38, v109);
    }
    ExAcquirePushLockSharedEx(v35, 0LL);
  }
  v158 = 1;
  v39 = PsGetCurrentProcess(v37, v36);
  ProcessSessionId = PsGetProcessSessionId(v39);
  if ( ProcessSessionId >= *(_DWORD *)(v34 + 760)
    || (v43 = 8LL * ProcessSessionId, !*(_QWORD *)(v43 + *(_QWORD *)(v34 + 768))) )
  {
LABEL_188:
    v131 = WdLogNewEntry5_WdEvent(v42, v41);
    *(_QWORD *)(v131 + 24) = v33;
    WdLogEvent5_WdEvent(v131);
    LOBYTE(v5) = *((_DWORD *)v33 + 44) == 1;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
    COREACCESS::~COREACCESS((COREACCESS *)v153);
    if ( !v5 )
    {
      if ( v148 )
        DXGADAPTER::ReleaseReferenceNoTracking(v148);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v139);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v132, &EventProfilerExit, v133, v136);
      return 0LL;
    }
    if ( v148 )
      DXGADAPTER::ReleaseReferenceNoTracking(v148);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v139);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
    if ( (qword_1C0079010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_199:
    McTemplateK0q(v87, &EventProfilerExit, v88, v136);
    return 3221225485LL;
  }
  _mm_lfence();
  v44 = *(_QWORD *)(v43 + *(_QWORD *)(v34 + 768));
  v161[1] = (struct DXGADAPTER *)v44;
  if ( !v44 )
  {
    v33 = v141;
    goto LABEL_188;
  }
  v47 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v42) + 74);
  if ( !v47
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v46),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v47, CurrentProcessSessionId),
        (v50 = SessionDataForSpecifiedSession) == 0LL) )
  {
    v129 = WdLogNewEntry5_WdEvent(v46, v45);
    *(_QWORD *)(v129 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v130);
    WdLogEvent5_WdEvent(v129);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
    COREACCESS::~COREACCESS((COREACCESS *)v153);
    if ( v148 )
      DXGADAPTER::ReleaseReferenceNoTracking(v148);
LABEL_111:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v139);
    goto LABEL_112;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v150,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
    0);
  if ( v151 )
  {
    v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51);
    v110[3] = 275LL;
    v110[4] = 4LL;
    v110[5] = &v150;
    v110[6] = 0LL;
    v110[7] = 0LL;
    WdLogEvent5_WdCriticalError(v110);
  }
  v52 = v150;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v52 + 8) == KeGetCurrentThread() )
  {
    v111 = *(_DWORD *)(v52 + 24);
    if ( v111 <= 0 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v53);
      *(_QWORD *)(v112 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v112);
      v111 = *(_DWORD *)(v52 + 24);
    }
    v18 = v111 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v52 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v113 = *(_DWORD *)(v52 + 28);
        if ( v113 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v54, &EventBlockThread, v55, v113);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v52);
      ExAcquirePushLockExclusiveEx(v52 + 16, 0LL);
    }
    if ( *(_QWORD *)(v52 + 8) )
    {
      v114 = WdLogNewEntry5_WdAssertion(v54);
      *(_QWORD *)(v114 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v114);
    }
    if ( *(_DWORD *)(v52 + 24) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v54);
      *(_QWORD *)(v115 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v115);
    }
    *(_QWORD *)(v52 + 8) = KeGetCurrentThread();
  }
  *(_DWORD *)(v52 + 24) = v18;
  v151 = 1;
  v152 = (char *)v50 + 56;
  v147 = (char *)v50 + 16440;
  v145 = (void *)v163;
  v167 = v162[1];
  v142 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
              (KSPIN_LOCK *)v44,
              (__int64)v50 + 16440,
              &v142,
              (struct DXGSESSIONDATA *)((char *)v50 + 56),
              (struct DXGSESSIONDATA *)((char *)v50 + 16440)) < 0 )
  {
    v116 = WdLogNewEntry5_WdAssertion(v56);
    *(_QWORD *)(v116 + 24) = 351LL;
    WdLogEvent5_WdAssertion(v116);
  }
  v138 = 0;
  v57 = 0;
  v58 = v144;
  v59 = v143;
  v60 = v142;
  for ( i = v142; ; v60 = i )
  {
    v166 = v58;
    if ( v57 >= v60 )
      break;
    v61 = v57;
    v62 = *(unsigned int **)&v152[8 * v57];
    if ( *v62 == 1 )
    {
      v74 = v62[14];
      if ( v74 > 0x10 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v56);
        *(_QWORD *)(v120 + 24) = 53LL;
        WdLogEvent5_WdAssertion(v120);
        v59 = 0;
        v61 = v57;
      }
      else
      {
        v64 = 16 * v74 + 67;
LABEL_77:
        v59 = v64 & 0xFFFFFFF8;
      }
    }
    else
    {
      switch ( *v62 )
      {
        case 2u:
          v63 = v62[205];
          if ( v63 <= 0x10 )
          {
            v64 = 16 * v63 + 831;
            goto LABEL_77;
          }
          v117 = WdLogNewEntry5_WdAssertion(v56);
          *(_QWORD *)(v117 + 24) = 63LL;
          WdLogEvent5_WdAssertion(v117);
          v59 = 0;
          v61 = v57;
          break;
        case 3u:
          v82 = v62[10];
          if ( v82 <= 0x10 )
          {
            v64 = 16 * v82 + 51;
            goto LABEL_77;
          }
          v118 = WdLogNewEntry5_WdAssertion(v56);
          *(_QWORD *)(v118 + 24) = 73LL;
          WdLogEvent5_WdAssertion(v118);
          v59 = 0;
          v61 = v57;
          break;
        case 4u:
        case 5u:
        case 7u:
        case 8u:
          v64 = 31;
          goto LABEL_77;
        case 9u:
          v64 = 39;
          goto LABEL_77;
        default:
          v119 = WdLogNewEntry5_WdAssertion(v56);
          *(_QWORD *)(v119 + 24) = 96LL;
          WdLogEvent5_WdAssertion(v119);
          v64 = 7;
          v61 = v57;
          goto LABEL_77;
      }
    }
    v143 = v59;
    if ( !v59 )
    {
      v121 = WdLogNewEntry5_WdAssertion(v56);
      *(_QWORD *)(v121 + 24) = 361LL;
      WdLogEvent5_WdAssertion(v121);
      v61 = v57;
    }
    if ( v59 > v167 )
    {
      v138 = 261;
      v58 = v166;
      break;
    }
    v62[1] = v59;
    v75 = *v62;
    if ( *v62 == 2 )
    {
      v76 = v147;
      v77 = v147[v61];
      v78 = v62[15];
      if ( (v77 & 1) != 0 )
      {
        v83 = v78 | 0x2000;
        v62[15] = v83;
        v62[15] = v83 ^ (v83 ^ ((unsigned __int8)v76[v61] << 17)) & 0x40000;
      }
      else
      {
        v79 = v78 ^ (v78 ^ (v77 << 18)) & 0x100000;
        v62[15] = v79;
        if ( (v76[v61] & 8) != 0 )
          v62[15] = v79 | 0x1000000;
      }
      v80 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v80[3] = v62;
      v80[4] = *((_QWORD *)v62 + 2);
      v80[5] = (v62[15] >> 13) & 1;
      v80[6] = *((_QWORD *)v62 + 9);
      v80[7] = *((_QWORD *)v62 + 1);
      WdLogEvent5_WdPresentTokenEvent(v80);
      v75 = *v62;
      v61 = v57;
    }
    if ( v75 == 9 )
      v62[6] ^= (v62[6] ^ ((unsigned __int8)v147[v61] >> 4)) & 1;
    if ( a2 )
    {
      v122 = v145;
      v123 = (char *)v145 + v59;
      if ( (unsigned __int64)v123 > MmUserProbeAddress || v123 <= v145 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v122, v62, v59);
    }
    else
    {
      memmove(v145, v62, v59);
    }
    if ( *v62 == 2 )
    {
      v56 = v147;
      if ( (v147[v57] & 1) != 0 )
      {
        v56 = (char *)v62[15];
        if ( ((unsigned __int16)v56 & 0x2000) == 0 )
        {
          v124 = WdLogNewEntry5_WdAssertion(v56);
          *(_QWORD *)(v124 + 24) = 427LL;
          WdLogEvent5_WdAssertion(v124);
          v56 = (char *)v62[15];
        }
        if ( (unsigned int)((__int16)v56 >> 14) > 1 )
        {
          v125 = WdLogNewEntry5_WdAssertion(v56);
          *(_QWORD *)(v125 + 24) = 428LL;
          WdLogEvent5_WdAssertion(v125);
          v56 = (char *)v62[15];
        }
        v62[15] = (unsigned int)v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)(((unsigned __int16)v56 & 0xC000)
                                                                                + 0x4000)) & 0xC000;
      }
    }
    v145 = (char *)v145 + v59;
    v58 = v59 + v166;
    v144 = v59 + v166;
    v167 -= v59;
    ++v57;
  }
  v160 = v57;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v44, 0);
  if ( a2 )
  {
    v126 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v126 = (_DWORD *)MmUserProbeAddress;
    *v126 = v57;
    if ( v57 || !v59 )
    {
      v128 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v128 = (_DWORD *)MmUserProbeAddress;
      *v128 = v58;
    }
    else
    {
      v127 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v127 = (_DWORD *)MmUserProbeAddress;
      *v127 = v59;
      v138 = -1073741789;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v57;
    if ( v57 || !v59 )
    {
      *(_DWORD *)(a1 + 8) = v58;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v59;
      v138 = -1073741789;
    }
  }
  v65 = v57;
  v66 = 0;
  v67 = v152;
  while ( v66 < v57 )
  {
    v68 = *(int **)&v67[8 * v66];
    v69 = *v68;
    if ( *v68 == 2
      && (v147[v66] & 1) != 0
      && (v81 = v68[15] ^ (v68[15] ^ ((v68[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
          v68[15] = v81,
          (v81 & 0x30000) < 0x20000) )
    {
      --v65;
      ++v66;
    }
    else
    {
      if ( bTracingEnabled )
      {
        if ( v69 == 1 )
        {
LABEL_64:
          v70 = *((_QWORD *)v68 + 2);
        }
        else
        {
          switch ( v69 )
          {
            case 2:
              v70 = *((_QWORD *)v68 + 3);
              break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              goto LABEL_64;
            default:
              v70 = 0LL;
              break;
          }
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v135) = v68[1];
          LODWORD(v134) = v69;
          McTemplateK0ppqqx(v70, &EventRetirePresentHistory, (unsigned int)v135, v141, v68, v134, v135, v70, v136, v137);
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v44 + 48), (PSLIST_ENTRY)v68 - 1);
      ++v66;
    }
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v44, v57);
  if ( v65 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v44 + 64), 0, v65, 0);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v150);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
  COREACCESS::~COREACCESS((COREACCESS *)v153);
  if ( v148 && _InterlockedExchangeAdd64((volatile signed __int64 *)v148 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v148 + 2), v148);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v139);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v71, &EventProfilerExit, v72, v136);
  return v138;
}
