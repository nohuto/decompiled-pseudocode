/*
 * XREFs of DxgkGetPresentHistory @ 0x1C00EB0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C000DC20 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUIN.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C000DD8C (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00143F8 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00144E0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppqqx @ 0x1C001573C (McTemplateK0ppqqx.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  ULONG64 v16; // rcx
  __int64 v17; // r8
  struct _KTHREAD **v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rcx
  struct DXGADAPTER *v21; // rdi
  int PairingAdapters; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  struct DXGADAPTER *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGADAPTER *v31; // rcx
  signed __int64 v32; // rax
  struct DXGADAPTER *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  DXGSESSIONMGR *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v53; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  char *v63; // rcx
  unsigned int v64; // ebx
  int v65; // r13d
  unsigned int v66; // edi
  unsigned int v67; // eax
  __int64 v68; // rdx
  _DWORD *v69; // r13
  unsigned int v70; // edi
  int v71; // edi
  LONG v72; // r13d
  unsigned int v73; // edi
  char *v74; // r12
  int *v75; // rsi
  int v76; // edx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned int v81; // edi
  unsigned int v82; // edi
  char *v83; // r8
  unsigned __int8 v84; // al
  _QWORD *v85; // rax
  unsigned int v86; // ecx
  __int64 *ThreadProperty; // rax
  __int64 *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  _QWORD *v95; // rax
  __int64 v96; // rax
  int v97; // r9d
  __int64 v98; // rax
  __int64 v99; // rax
  _OWORD *v100; // rax
  _DWORD *v101; // rdx
  _DWORD *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  int v111; // r9d
  _QWORD *v112; // rax
  __int64 v113; // rax
  int v114; // r9d
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  void *v123; // r9
  char *v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rax
  _DWORD *v127; // rdx
  _DWORD *v128; // rdx
  _DWORD *v129; // rdx
  __int64 v130; // rbx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r8
  unsigned __int64 *v135; // [rsp+28h] [rbp-140h]
  __int64 v136; // [rsp+30h] [rbp-138h]
  unsigned int v137; // [rsp+40h] [rbp-128h]
  __int64 v138; // [rsp+48h] [rbp-120h] BYREF
  char v139; // [rsp+50h] [rbp-118h]
  struct DXGADAPTER *v140; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v141; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v142; // [rsp+64h] [rbp-104h]
  int v143; // [rsp+68h] [rbp-100h]
  void *v144; // [rsp+70h] [rbp-F8h]
  __int64 v145; // [rsp+78h] [rbp-F0h]
  DXGADAPTER *v146; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int i; // [rsp+90h] [rbp-D8h]
  char *v148; // [rsp+98h] [rbp-D0h]
  __int64 v149; // [rsp+A0h] [rbp-C8h] BYREF
  char v150; // [rsp+A8h] [rbp-C0h]
  _BYTE v151[16]; // [rsp+B0h] [rbp-B8h] BYREF
  DXGADAPTER *v152; // [rsp+C0h] [rbp-A8h]
  char v153; // [rsp+C8h] [rbp-A0h]
  char *v154; // [rsp+D0h] [rbp-98h]
  char v155[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v156; // [rsp+E0h] [rbp-88h]
  int v157; // [rsp+E8h] [rbp-80h]
  int v158; // [rsp+F0h] [rbp-78h]
  unsigned int v159; // [rsp+F4h] [rbp-74h]
  struct DXGADAPTER *v160[2]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v161[4]; // [rsp+108h] [rbp-60h]
  __int128 v162; // [rsp+118h] [rbp-50h]
  unsigned __int64 v163[8]; // [rsp+128h] [rbp-40h] BYREF
  int v164; // [rsp+178h] [rbp+10h]
  int v165; // [rsp+180h] [rbp+18h]
  unsigned int v166; // [rsp+188h] [rbp+20h]

  v164 = a2;
  v3 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2060);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v88 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v88;
      }
    }
  }
  v145 = v11;
  if ( !v11 )
  {
    v89 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v89 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v89);
LABEL_115:
    if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_199;
  }
  if ( !*(_BYTE *)(v11 + 306) )
  {
    v92 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v92 + 24) = v11;
    *(_QWORD *)(v92 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v92);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v93, &EventProfilerExit, v94, 2060);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138, (struct DXGFASTMUTEX *const *)v11);
  if ( v139 )
  {
    v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
    v95[3] = 275LL;
    v95[4] = 4LL;
    v95[5] = &v138;
    v95[6] = 0LL;
    v95[7] = 0LL;
    WdLogEvent5_WdCriticalError(v95);
  }
  v15 = v138;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v15 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v15 + 24) <= 0 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v96 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v96);
    }
    ++*(_DWORD *)(v15 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v97 = *(_DWORD *)(v15 + 28);
        if ( v97 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v16, &EventBlockThread, v17, v97);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v15);
      ExAcquirePushLockExclusiveEx(v15 + 16, 0LL);
    }
    if ( *(_QWORD *)(v15 + 8) )
    {
      v98 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v98 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v98);
    }
    if ( *(_DWORD *)(v15 + 24) )
    {
      v99 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v99 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v99);
    }
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v15 + 24) = 1;
  }
  v139 = 1;
  if ( v3 )
  {
    v158 = 0;
    v100 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v100 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v161 = *v100;
    v162 = v100[1];
    v101 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v101 = (_DWORD *)MmUserProbeAddress;
    *v101 = 0;
    v102 = (_DWORD *)(a1 + 8);
    v16 = MmUserProbeAddress;
    if ( a1 + 8 >= MmUserProbeAddress )
      v102 = (_DWORD *)MmUserProbeAddress;
    *v102 = 0;
  }
  else
  {
    *(_OWORD *)v161 = *(_OWORD *)a1;
    v162 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !(_QWORD)v162 )
  {
    v103 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v103 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v103);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138);
    goto LABEL_115;
  }
  v18 = (struct _KTHREAD **)v11;
  v19 = v161[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v146, v161[0], v18, v160);
  v21 = v160[0];
  if ( !v160[0] )
  {
    v104 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v104 + 24) = v19;
    *(_QWORD *)(v104 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v104);
    if ( v146 )
      DXGADAPTER::ReleaseReferenceNoTracking(v146);
    goto LABEL_114;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v160[0], 0, &v140, v163, 0LL, 0LL);
  v24 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v105 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v105 + 24) = v21;
    *(_QWORD *)(v105 + 32) = v24;
    WdLogEvent5_WdError(v105);
    if ( v146 )
      DXGADAPTER::ReleaseReferenceNoTracking(v146);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v106, &EventProfilerExit, v107, 2060);
    return (unsigned int)v24;
  }
  v25 = v140;
  if ( !v140 )
  {
    v108 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v108 + 24) = 230LL;
    WdLogEvent5_WdAssertion(v108);
  }
  COREACCESS::COREACCESS((COREACCESS *)v151, v25);
  if ( v153 )
  {
    v109 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
    v109[3] = 275LL;
    v109[4] = 4LL;
    v109[5] = v151;
    v109[6] = 0LL;
    v109[7] = 0LL;
    WdLogEvent5_WdCriticalError(v109);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v152 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v152 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v29, &EventBlockThread, v30, 72);
      KeWaitForSingleObject((char *)v152 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v152);
  }
  v153 = 1;
  v31 = v140;
  v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v140 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v33 = v140;
  if ( v32 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v140 + 2), v140);
  if ( !*((_QWORD *)v33 + 289) )
  {
    v110 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v110 + 24) = 242LL;
    WdLogEvent5_WdAssertion(v110);
  }
  v143 = 0;
  v142 = 0;
  v34 = *((_QWORD *)v33 + 289);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155, (struct _KTHREAD **)(v34 + 720));
  KeEnterCriticalRegion();
  v35 = v156;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v156, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v111 = *(_DWORD *)(v35 + 16);
      if ( v111 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v37, &EventBlockThread, v38, v111);
    }
    ExAcquirePushLockSharedEx(v35, 0LL);
  }
  v157 = 1;
  v39 = PsGetCurrentProcess(v37, v36);
  ProcessSessionId = PsGetProcessSessionId(v39);
  if ( ProcessSessionId >= *(_DWORD *)(v34 + 744)
    || (v45 = 8LL * ProcessSessionId, !*(_QWORD *)(v45 + *(_QWORD *)(v34 + 752))) )
  {
LABEL_188:
    v132 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
    *(_QWORD *)(v132 + 24) = v33;
    WdLogEvent5_WdEvent(v132);
    if ( *((_DWORD *)v33 + 44) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
      COREACCESS::~COREACCESS((COREACCESS *)v151);
      if ( v146 )
        DXGADAPTER::ReleaseReferenceNoTracking(v146);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v133, &EventProfilerExit, v134, 2060);
      return 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
    COREACCESS::~COREACCESS((COREACCESS *)v151);
    if ( v146 )
      DXGADAPTER::ReleaseReferenceNoTracking(v146);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138);
    if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_199:
    McTemplateK0q(v90, &EventProfilerExit, v91, 2060);
    return 3221225485LL;
  }
  _mm_lfence();
  v46 = *(_QWORD *)(v45 + *(_QWORD *)(v34 + 752));
  v160[1] = (struct DXGADAPTER *)v46;
  if ( !v46 )
  {
    v33 = v140;
    goto LABEL_188;
  }
  v49 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v42) + 73);
  if ( !v49
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v48),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           v49,
                                           CurrentProcessSessionId,
                                           v53),
        (v55 = SessionDataForSpecifiedSession) == 0LL) )
  {
    v130 = WdLogNewEntry5_WdEvent(v48, v47, v50, v51);
    *(_QWORD *)(v130 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v131);
    WdLogEvent5_WdEvent(v130);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
    COREACCESS::~COREACCESS((COREACCESS *)v151);
    if ( v146 )
      DXGADAPTER::ReleaseReferenceNoTracking(v146);
LABEL_114:
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138);
    goto LABEL_115;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v149,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16));
  if ( v150 )
  {
    v112 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v56, v58);
    v112[3] = 275LL;
    v112[4] = 4LL;
    v112[5] = &v149;
    v112[6] = 0LL;
    v112[7] = 0LL;
    WdLogEvent5_WdCriticalError(v112);
  }
  v59 = v149;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v59 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v59 + 24) <= 0 )
    {
      v113 = WdLogNewEntry5_WdAssertion(v60);
      *(_QWORD *)(v113 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v113);
    }
    ++*(_DWORD *)(v59 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v59 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v114 = *(_DWORD *)(v59 + 28);
        if ( v114 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v61, &EventBlockThread, v62, v114);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v59);
      ExAcquirePushLockExclusiveEx(v59 + 16, 0LL);
    }
    if ( *(_QWORD *)(v59 + 8) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v61);
      *(_QWORD *)(v115 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v115);
    }
    if ( *(_DWORD *)(v59 + 24) )
    {
      v116 = WdLogNewEntry5_WdAssertion(v61);
      *(_QWORD *)(v116 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v116);
    }
    *(_QWORD *)(v59 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v59 + 24) = 1;
  }
  v150 = 1;
  v154 = (char *)v55 + 56;
  v148 = (char *)v55 + 16440;
  v144 = (void *)v162;
  v166 = v161[1];
  v141 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
              (KSPIN_LOCK *)v46,
              (__int64)v55 + 16440,
              &v141,
              (struct DXGSESSIONDATA *)((char *)v55 + 56),
              (struct DXGSESSIONDATA *)((char *)v55 + 16440)) < 0 )
  {
    v117 = WdLogNewEntry5_WdAssertion(v63);
    *(_QWORD *)(v117 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v117);
  }
  v137 = 0;
  v64 = 0;
  v65 = v143;
  v66 = v142;
  v67 = v141;
  for ( i = v141; ; v67 = i )
  {
    v165 = v65;
    if ( v64 >= v67 )
      break;
    v68 = v64;
    v69 = *(_DWORD **)&v154[8 * v64];
    if ( *v69 == 1 )
    {
      v81 = v69[14];
      if ( v81 > 0x10 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v63);
        *(_QWORD *)(v121 + 24) = 53LL;
        WdLogEvent5_WdAssertion(v121);
        v66 = 0;
        v68 = v64;
      }
      else
      {
        v71 = 16 * v81 + 67;
LABEL_78:
        v66 = v71 & 0xFFFFFFF8;
      }
    }
    else
    {
      switch ( *v69 )
      {
        case 2:
          v82 = v69[205];
          if ( v82 <= 0x10 )
          {
            v71 = 16 * v82 + 831;
            goto LABEL_78;
          }
          v118 = WdLogNewEntry5_WdAssertion(v63);
          *(_QWORD *)(v118 + 24) = 63LL;
          WdLogEvent5_WdAssertion(v118);
          v66 = 0;
          v68 = v64;
          break;
        case 3:
          v70 = v69[10];
          if ( v70 <= 0x10 )
          {
            v71 = 16 * v70 + 51;
            goto LABEL_78;
          }
          v119 = WdLogNewEntry5_WdAssertion(v63);
          *(_QWORD *)(v119 + 24) = 73LL;
          WdLogEvent5_WdAssertion(v119);
          v66 = 0;
          v68 = v64;
          break;
        case 4:
        case 5:
        case 7:
        case 8:
          v71 = 31;
          goto LABEL_78;
        default:
          v120 = WdLogNewEntry5_WdAssertion(v63);
          *(_QWORD *)(v120 + 24) = 93LL;
          WdLogEvent5_WdAssertion(v120);
          v71 = 7;
          v68 = v64;
          goto LABEL_78;
      }
    }
    v142 = v66;
    if ( !v66 )
    {
      v122 = WdLogNewEntry5_WdAssertion(v63);
      *(_QWORD *)(v122 + 24) = 320LL;
      WdLogEvent5_WdAssertion(v122);
      v68 = v64;
    }
    if ( v66 > v166 )
    {
      v137 = 261;
      v65 = v165;
      break;
    }
    v69[1] = v66;
    if ( *v69 == 2 )
    {
      v83 = v148;
      v84 = v148[v68];
      if ( (v84 & 1) != 0 )
      {
        v69[15] |= 0x2000u;
        v69[15] ^= (v69[15] ^ ((unsigned __int8)v83[v68] << 17)) & 0x40000;
      }
      else
      {
        v69[15] ^= (v69[15] ^ (v84 << 18)) & 0x100000;
        if ( (v83[v68] & 8) != 0 )
          v69[15] |= 0x1000000u;
      }
      v85 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v85[3] = v69;
      v85[4] = *((_QWORD *)v69 + 2);
      v85[5] = (v69[15] >> 13) & 1;
      v85[6] = *((_QWORD *)v69 + 9);
      v85[7] = *((_QWORD *)v69 + 1);
      WdLogEvent5_WdPresentTokenEvent(v85);
    }
    if ( v164 )
    {
      v123 = v144;
      v124 = (char *)v144 + v66;
      if ( (unsigned __int64)v124 > MmUserProbeAddress || v124 <= v144 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v123, v69, v66);
    }
    else
    {
      memmove(v144, v69, v66);
    }
    if ( *v69 == 2 )
    {
      v63 = v148;
      if ( (v148[v64] & 1) != 0 )
      {
        if ( (v69[15] & 0x2000) == 0 )
        {
          v125 = WdLogNewEntry5_WdAssertion(v148);
          *(_QWORD *)(v125 + 24) = 381LL;
          WdLogEvent5_WdAssertion(v125);
        }
        if ( (unsigned int)((int)(v69[15] << 16) >> 30) > 1 )
        {
          v126 = WdLogNewEntry5_WdAssertion(v63);
          *(_QWORD *)(v126 + 24) = 382LL;
          WdLogEvent5_WdAssertion(v126);
        }
        v63 = (char *)(v69[15] ^ ((unsigned __int16)v69[15] ^ (unsigned __int16)((v69[15] & 0xC000) + 0x4000)) & 0xC000u);
        v69[15] = (_DWORD)v63;
      }
    }
    v144 = (char *)v144 + v66;
    v65 = v66 + v165;
    v143 = v66 + v165;
    v166 -= v66;
    ++v64;
  }
  v159 = v64;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v46, 0);
  if ( v164 )
  {
    v127 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v127 = (_DWORD *)MmUserProbeAddress;
    *v127 = v64;
    if ( v64 || !v66 )
    {
      v129 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v129 = (_DWORD *)MmUserProbeAddress;
      *v129 = v65;
    }
    else
    {
      v128 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v128 = (_DWORD *)MmUserProbeAddress;
      *v128 = v66;
      v137 = -1073741789;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v64;
    if ( v64 || !v66 )
    {
      *(_DWORD *)(a1 + 8) = v65;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v66;
      v137 = -1073741789;
    }
  }
  v72 = v64;
  v73 = 0;
  v74 = v154;
  while ( v73 < v64 )
  {
    v75 = *(int **)&v74[8 * v73];
    v76 = *v75;
    if ( *v75 == 2
      && (v148[v73] & 1) != 0
      && (v86 = v75[15] ^ (v75[15] ^ ((v75[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
          v75[15] = v86,
          (v86 & 0x30000) < 0x20000) )
    {
      --v72;
    }
    else
    {
      if ( bTracingEnabled )
      {
        if ( v76 == 1 )
        {
LABEL_64:
          v77 = *((_QWORD *)v75 + 2);
        }
        else
        {
          switch ( v76 )
          {
            case 2:
              v77 = *((_QWORD *)v75 + 3);
              break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              goto LABEL_64;
            default:
              v77 = 0LL;
              break;
          }
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v136) = v75[1];
          LODWORD(v135) = v76;
          McTemplateK0ppqqx(v77, &EventRetirePresentHistory, (unsigned int)v136, v140, v75, v135, v136, v77);
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v46 + 48), (PSLIST_ENTRY)v75 - 1);
    }
    ++v73;
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v46, v64);
  if ( v72 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v46 + 64), 0, v72, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v149);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
  COREACCESS::~COREACCESS((COREACCESS *)v151);
  if ( v146 && _InterlockedExchangeAdd64((volatile signed __int64 *)v146 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v146 + 2), v146);
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v138);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v78, &EventProfilerExit, v79, 2060);
  return v137;
}
