/*
 * XREFs of DxgkGetPresentHistory @ 0x1C0092280
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C00017B0 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUIN.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C000191C (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013664 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C001374C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_ppqqx @ 0x1C0014730 (Template_ppqqx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  _DWORD *v19; // rdx
  ULONG64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD **v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGADAPTER *v29; // rdi
  int PairingAdapters; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  struct DXGADAPTER *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGADAPTER *v43; // rcx
  signed __int64 v44; // rax
  struct DXGADAPTER *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r15
  __int64 v57; // r15
  PVOID v58; // rax
  DXGSESSIONMGR *v59; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  struct DXGSESSIONDATA *v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  char *v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int v81; // ebx
  int v82; // esi
  unsigned int v83; // edi
  unsigned int v84; // eax
  unsigned __int64 v85; // r8
  __int64 v86; // rdx
  _DWORD *v87; // rsi
  unsigned int v88; // edi
  int v89; // edi
  LONG v90; // r13d
  unsigned int v91; // esi
  char *v92; // r12
  int *v93; // rdi
  int v94; // edx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned int v101; // edi
  __int64 v102; // rdx
  __int64 v103; // r8
  unsigned int v104; // edi
  char *v105; // r8
  unsigned __int8 v106; // al
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 *ThreadProperty; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  _QWORD *v115; // rax
  __int64 v116; // rax
  int v117; // r9d
  __int64 v118; // rax
  __int64 v119; // rax
  _OWORD *v120; // rax
  _DWORD *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rax
  _QWORD *v137; // rax
  __int64 v138; // rax
  int v139; // r9d
  __int64 v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // rax
  int v143; // r9d
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  void *v152; // r9
  char *v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rax
  _DWORD *v156; // rdx
  _DWORD *v157; // rdx
  _DWORD *v158; // rdx
  unsigned int v159; // ecx
  __int64 v160; // rcx
  __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  unsigned __int64 *v171; // [rsp+28h] [rbp-140h]
  __int64 v172; // [rsp+30h] [rbp-138h]
  unsigned int v173; // [rsp+40h] [rbp-128h]
  __int64 v174; // [rsp+48h] [rbp-120h] BYREF
  char v175; // [rsp+50h] [rbp-118h]
  struct DXGADAPTER *v176; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v177; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v178; // [rsp+64h] [rbp-104h]
  int v179; // [rsp+68h] [rbp-100h]
  void *v180; // [rsp+70h] [rbp-F8h]
  __int64 v181; // [rsp+78h] [rbp-F0h]
  DXGADAPTER *v182; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int i; // [rsp+90h] [rbp-D8h]
  char *v184; // [rsp+98h] [rbp-D0h]
  __int64 v185; // [rsp+A0h] [rbp-C8h] BYREF
  char v186; // [rsp+A8h] [rbp-C0h]
  _BYTE v187[16]; // [rsp+B0h] [rbp-B8h] BYREF
  DXGADAPTER *v188; // [rsp+C0h] [rbp-A8h]
  char v189; // [rsp+C8h] [rbp-A0h]
  char *v190; // [rsp+D0h] [rbp-98h]
  char v191[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v192; // [rsp+E0h] [rbp-88h]
  int v193; // [rsp+E8h] [rbp-80h]
  int v194; // [rsp+F0h] [rbp-78h]
  unsigned int v195; // [rsp+F4h] [rbp-74h]
  struct DXGADAPTER *v196[2]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v197[4]; // [rsp+108h] [rbp-60h]
  __int128 v198; // [rsp+118h] [rbp-50h]
  unsigned __int64 v199[8]; // [rsp+128h] [rbp-40h] BYREF
  int v201; // [rsp+180h] [rbp+18h]
  unsigned int v202; // [rsp+188h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2060);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  v181 = v10;
  if ( !v10 )
  {
    v112 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v112 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v112);
LABEL_105:
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_200;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v10 + 72) + 216LL))() )
  {
    v108 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v108 + 24) = v10;
    *(_QWORD *)(v108 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v108);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v109, &EventProfilerExit, v110, 2060);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, (struct DXGFASTMUTEX *const *)v10, v13, v14);
  if ( v175 )
  {
    v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v115[3] = 275LL;
    v115[4] = 4LL;
    v115[5] = &v174;
    v115[6] = 0LL;
    v115[7] = 0LL;
    WdLogEvent5_WdCriticalError(v115);
  }
  v18 = v174;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v18 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v18 + 24) <= 0 )
    {
      v116 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v116 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v116);
    }
    ++*(_DWORD *)(v18 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v117 = *(_DWORD *)(v18 + 28);
        if ( v117 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v20, &EventBlockThread, v23, v117);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v18);
      ExAcquirePushLockExclusiveEx(v18 + 16, 0LL);
    }
    if ( *(_QWORD *)(v18 + 8) )
    {
      v118 = WdLogNewEntry5_WdAssertion(v20, v19, v23, v24);
      *(_QWORD *)(v118 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v118);
    }
    if ( *(_DWORD *)(v18 + 24) )
    {
      v119 = WdLogNewEntry5_WdAssertion(v20, v19, v23, v24);
      *(_QWORD *)(v119 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v119);
    }
    *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v18 + 24) = 1;
  }
  v175 = 1;
  if ( a2 )
  {
    v194 = 0;
    v20 = MmUserProbeAddress;
    v120 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v120 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v197 = *v120;
    v198 = v120[1];
    v121 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v121 = (_DWORD *)MmUserProbeAddress;
    *v121 = 0;
    v19 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = 0;
  }
  else
  {
    *(_OWORD *)v197 = *(_OWORD *)a1;
    v198 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !(_QWORD)v198 )
  {
    v122 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v122 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v122);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, v123, v124, v125);
    goto LABEL_105;
  }
  v25 = (struct _KTHREAD **)v10;
  v26 = v197[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v182, v197[0], v25, v196);
  v29 = v196[0];
  if ( !v196[0] )
  {
    v126 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v126 + 24) = v26;
    *(_QWORD *)(v126 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v126);
    if ( v182 )
      DXGADAPTER::ReleaseReference(v182);
    goto LABEL_104;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v196[0], 0, &v176, v199, 0LL, 0LL);
  v35 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v130 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v130 + 24) = v29;
    *(_QWORD *)(v130 + 32) = v35;
    WdLogEvent5_WdError(v130);
    if ( v182 )
      DXGADAPTER::ReleaseReference(v182);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, v131, v132, v133);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v134, &EventProfilerExit, v135, 2060);
    return (unsigned int)v35;
  }
  v36 = v176;
  if ( !v176 )
  {
    v136 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
    *(_QWORD *)(v136 + 24) = 229LL;
    WdLogEvent5_WdAssertion(v136);
  }
  COREACCESS::COREACCESS((COREACCESS *)v187, v36);
  if ( v189 )
  {
    v137 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37, v39);
    v137[3] = 275LL;
    v137[4] = 4LL;
    v137[5] = v187;
    v137[6] = 0LL;
    v137[7] = 0LL;
    WdLogEvent5_WdCriticalError(v137);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v188 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v188 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v41, &EventBlockThread, v42, 72);
      KeWaitForSingleObject((char *)v188 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v188);
  }
  v189 = 1;
  v43 = v176;
  v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)v176 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v45 = v176;
  if ( v44 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v176 + 2), v176);
  if ( !*((_QWORD *)v45 + 286) )
  {
    v138 = WdLogNewEntry5_WdAssertion(v43, v37, v39, v40);
    *(_QWORD *)(v138 + 24) = 241LL;
    WdLogEvent5_WdAssertion(v138);
  }
  v179 = 0;
  v178 = 0;
  v46 = *((_QWORD *)v45 + 286);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v191, (struct _KTHREAD **)(v46 + 624), v39, v40);
  KeEnterCriticalRegion();
  v47 = v192;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v139 = *(_DWORD *)(v47 + 16);
      if ( v139 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v48, &EventBlockThread, v49, v139);
    }
    ExAcquirePushLockSharedEx(v47, 0LL);
  }
  v193 = 1;
  v50 = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(v50);
  if ( ProcessSessionId >= *(_DWORD *)(v46 + 648)
    || (v56 = 8LL * ProcessSessionId, !*(_QWORD *)(v56 + *(_QWORD *)(v46 + 656))) )
  {
LABEL_189:
    v162 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v162 + 24) = v45;
    WdLogEvent5_WdEvent(v162);
    if ( *((_DWORD *)v45 + 44) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v191);
      COREACCESS::~COREACCESS((COREACCESS *)v187);
      if ( v182 )
        DXGADAPTER::ReleaseReference(v182);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, v163, v164, v165);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v166, &EventProfilerExit, v167, 2060);
      return 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v191);
    COREACCESS::~COREACCESS((COREACCESS *)v187);
    if ( v182 )
      DXGADAPTER::ReleaseReference(v182);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, v168, v169, v170);
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_200:
    Template_q(v113, &EventProfilerExit, v114, 2060);
    return 3221225485LL;
  }
  _mm_lfence();
  v57 = *(_QWORD *)(v56 + *(_QWORD *)(v46 + 656));
  v196[1] = (struct DXGADAPTER *)v57;
  if ( !v57 )
  {
    v45 = v176;
    goto LABEL_189;
  }
  v58 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v140 = WdLogNewEntry5_WdAssertion(v53, v52, v54, v55);
    *(_QWORD *)(v140 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v140);
    v58 = DXGGLOBAL::m_pGlobal;
  }
  v59 = (DXGSESSIONMGR *)*((_QWORD *)v58 + 73);
  if ( !v59
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v59, CurrentProcessSessionId),
        (v64 = SessionDataForSpecifiedSession) == 0LL) )
  {
    v161 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v161 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    WdLogEvent5_WdEvent(v161);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v191);
    COREACCESS::~COREACCESS((COREACCESS *)v187);
    if ( v182 )
      DXGADAPTER::ReleaseReference(v182);
LABEL_104:
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, v127, v128, v129);
    goto LABEL_105;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v185,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
    v62,
    v63);
  if ( v186 )
  {
    v141 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66, v65, v67);
    v141[3] = 275LL;
    v141[4] = 4LL;
    v141[5] = &v185;
    v141[6] = 0LL;
    v141[7] = 0LL;
    WdLogEvent5_WdCriticalError(v141);
  }
  v68 = v185;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v68 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v68 + 24) <= 0 )
    {
      v142 = WdLogNewEntry5_WdAssertion(v70, v69, v71, v72);
      *(_QWORD *)(v142 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v142);
    }
    ++*(_DWORD *)(v68 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v68 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v143 = *(_DWORD *)(v68 + 28);
        if ( v143 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v74, &EventBlockThread, v75, v143);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v68);
      ExAcquirePushLockExclusiveEx(v68 + 16, 0LL);
    }
    if ( *(_QWORD *)(v68 + 8) )
    {
      v144 = WdLogNewEntry5_WdAssertion(v74, v73, v75, v76);
      *(_QWORD *)(v144 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v144);
    }
    if ( *(_DWORD *)(v68 + 24) )
    {
      v145 = WdLogNewEntry5_WdAssertion(v74, v73, v75, v76);
      *(_QWORD *)(v145 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v145);
    }
    *(_QWORD *)(v68 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v68 + 24) = 1;
  }
  v186 = 1;
  v190 = (char *)v64 + 56;
  v184 = (char *)v64 + 16440;
  v180 = (void *)v198;
  v202 = v197[1];
  v177 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
              (KSPIN_LOCK *)v57,
              (__int64)v64 + 16440,
              &v177,
              (struct DXGSESSIONDATA *)((char *)v64 + 56),
              (struct DXGSESSIONDATA *)((char *)v64 + 16440)) < 0 )
  {
    v146 = WdLogNewEntry5_WdAssertion(v78, v77, v79, v80);
    *(_QWORD *)(v146 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v146);
  }
  v173 = 0;
  v81 = 0;
  v82 = v179;
  v83 = v178;
  v84 = v177;
  for ( i = v177; ; v84 = i )
  {
    v201 = v82;
    v85 = 0x1C0000000uLL;
    if ( v81 >= v84 )
      break;
    v86 = v81;
    v87 = *(_DWORD **)&v190[8 * v81];
    if ( *v87 == 1 )
    {
      v101 = v87[14];
      if ( v101 > 0x10 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v78, v81, 0x1C0000000uLL, v80);
        *(_QWORD *)(v150 + 24) = 52LL;
        WdLogEvent5_WdAssertion(v150);
        v83 = 0;
        v86 = v81;
      }
      else
      {
        v89 = 16 * v101 + 60;
LABEL_75:
        v83 = (v89 + 7) & 0xFFFFFFF8;
      }
    }
    else
    {
      switch ( *v87 )
      {
        case 2:
          v104 = v87[205];
          if ( v104 <= 0x10 )
          {
            v89 = 16 * v104 + 824;
            goto LABEL_75;
          }
          v147 = WdLogNewEntry5_WdAssertion(v78, v81, 0x1C0000000uLL, v80);
          *(_QWORD *)(v147 + 24) = 62LL;
          WdLogEvent5_WdAssertion(v147);
          v83 = 0;
          v86 = v81;
          break;
        case 3:
          v88 = v87[10];
          if ( v88 <= 0x10 )
          {
            v89 = 16 * v88 + 44;
            goto LABEL_75;
          }
          v148 = WdLogNewEntry5_WdAssertion(v78, v81, 0x1C0000000uLL, v80);
          *(_QWORD *)(v148 + 24) = 72LL;
          WdLogEvent5_WdAssertion(v148);
          v83 = 0;
          v86 = v81;
          break;
        case 4:
        case 5:
        case 7:
        case 8:
          v89 = 24;
          goto LABEL_75;
        default:
          v149 = WdLogNewEntry5_WdAssertion(v78, v81, 0x1C0000000uLL, v80);
          *(_QWORD *)(v149 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v149);
          v89 = 0;
          v86 = v81;
          goto LABEL_75;
      }
    }
    v178 = v83;
    if ( !v83 )
    {
      v151 = WdLogNewEntry5_WdAssertion(v78, v86, v85, v80);
      *(_QWORD *)(v151 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v151);
      v86 = v81;
    }
    if ( v83 > v202 )
    {
      v173 = 261;
      v82 = v201;
      break;
    }
    v87[1] = v83;
    if ( *v87 == 2 )
    {
      v105 = v184;
      v106 = v184[v86];
      if ( (v106 & 1) != 0 )
      {
        v87[15] |= 0x2000u;
        v87[15] ^= (v87[15] ^ ((unsigned __int8)v105[v86] << 17)) & 0x40000;
      }
      else
      {
        v87[15] ^= (v87[15] ^ (v106 << 18)) & 0x100000;
        if ( (v105[v86] & 8) != 0 )
          v87[15] |= 0x1000000u;
      }
      v107 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v107[3] = v87;
      v107[4] = *((_QWORD *)v87 + 2);
      v107[5] = (v87[15] >> 13) & 1;
      v107[6] = *((_QWORD *)v87 + 9);
      v107[7] = *((_QWORD *)v87 + 1);
      WdLogEvent5_WdPresentTokenEvent(v107);
    }
    if ( a2 )
    {
      v152 = v180;
      v153 = (char *)v180 + v83;
      if ( (unsigned __int64)v153 > MmUserProbeAddress || v153 <= v180 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v152, v87, v83);
    }
    else
    {
      memmove(v180, v87, v83);
    }
    if ( *v87 == 2 )
    {
      v78 = v184;
      if ( (v184[v81] & 1) != 0 )
      {
        if ( (v87[15] & 0x2000) == 0 )
        {
          v154 = WdLogNewEntry5_WdAssertion(v184, v102, v103, v80);
          *(_QWORD *)(v154 + 24) = 380LL;
          WdLogEvent5_WdAssertion(v154);
        }
        if ( (unsigned int)((int)(v87[15] << 16) >> 30) > 1 )
        {
          v155 = WdLogNewEntry5_WdAssertion(v78, v102, v103, v80);
          *(_QWORD *)(v155 + 24) = 381LL;
          WdLogEvent5_WdAssertion(v155);
        }
        v78 = (char *)(v87[15] ^ ((unsigned __int16)v87[15] ^ (unsigned __int16)((v87[15] & 0xC000) + 0x4000)) & 0xC000u);
        v87[15] = (_DWORD)v78;
      }
    }
    v180 = (char *)v180 + v83;
    v82 = v83 + v201;
    v179 = v83 + v201;
    v202 -= v83;
    ++v81;
  }
  v195 = v81;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v57, 0);
  if ( a2 )
  {
    v156 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v156 = (_DWORD *)MmUserProbeAddress;
    *v156 = v81;
    if ( v81 || !v83 )
    {
      v158 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v158 = (_DWORD *)MmUserProbeAddress;
      *v158 = v82;
    }
    else
    {
      v157 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v157 = (_DWORD *)MmUserProbeAddress;
      *v157 = v83;
      v173 = -1073741789;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v81;
    if ( v81 || !v83 )
    {
      *(_DWORD *)(a1 + 8) = v82;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v83;
      v173 = -1073741789;
    }
  }
  v90 = v81;
  v91 = 0;
  v92 = v190;
  while ( v91 < v81 )
  {
    v93 = *(int **)&v92[8 * v91];
    v94 = *v93;
    if ( *v93 == 2
      && (v184[v91] & 1) != 0
      && (v159 = v93[15] ^ (v93[15] ^ ((v93[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
          v93[15] = v159,
          (v159 & 0x30000) < 0x20000) )
    {
      --v90;
    }
    else
    {
      if ( bTracingEnabled )
      {
        switch ( v94 )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v160 = *((_QWORD *)v93 + 2);
            break;
          case 2:
            v160 = *((_QWORD *)v93 + 3);
            break;
          default:
            v160 = 0LL;
            break;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v172) = v93[1];
          LODWORD(v171) = v94;
          Template_ppqqx(v160, &EventRetirePresentHistory, (unsigned int)v172, v176, v93, v171, v172, v160);
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v57 + 48), (PSLIST_ENTRY)v93 - 1);
    }
    ++v91;
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v57, v81);
  if ( v90 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v57 + 64), 0, v90, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v185);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v191);
  COREACCESS::~COREACCESS((COREACCESS *)v187);
  if ( v182 && _InterlockedExchangeAdd64((volatile signed __int64 *)v182 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v182 + 2), v182);
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v174, v95, v96, v97);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v98, &EventProfilerExit, v99, 2060);
  return v173;
}
