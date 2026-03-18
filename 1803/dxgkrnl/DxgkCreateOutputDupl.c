/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C01CC530
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00AC9CC (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01C8848 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01C8A30 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C01C8CD4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C01CB0F0 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER **v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  struct DXGADAPTER *v23; // r12
  struct DXGADAPTER *v24; // r13
  struct DXGADAPTER *v25; // r14
  __int64 v26; // rax
  int OutputDuplManager; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  OUTPUTDUPL_MGR *v31; // r14
  DXGSESSIONMGR *v32; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned int v37; // eax
  __int64 v38; // r14
  __int64 v39; // rax
  UINT KeyedMutexCount; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  bool v45; // zf
  __int64 v46; // rax
  int OutputDuplication; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGPROCESS *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // r8
  _BYTE v55[8]; // [rsp+40h] [rbp-89h] BYREF
  DXGPUSHLOCK *v56; // [rsp+48h] [rbp-81h]
  int v57; // [rsp+50h] [rbp-79h]
  struct DXGADAPTER *v58; // [rsp+58h] [rbp-71h] BYREF
  OUTPUTDUPL_MGR *v59; // [rsp+60h] [rbp-69h] BYREF
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-61h]
  int v61; // [rsp+70h] [rbp-59h] BYREF
  __int64 v62; // [rsp+78h] [rbp-51h]
  unsigned __int64 v63; // [rsp+80h] [rbp-49h] BYREF
  DXGADAPTER *v64; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v65[8]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v66[32]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v67[88]; // [rsp+C8h] [rbp-1h] BYREF
  int v68; // [rsp+130h] [rbp+67h] BYREF
  struct DXGADAPTER *v69; // [rsp+140h] [rbp+77h] BYREF
  struct DXGADAPTER *v70; // [rsp+148h] [rbp+7Fh] BYREF

  v62 = 0LL;
  v61 = 2061;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2061);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v61, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 3117LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 3122LL;
    WdLogEvent5_WdError(v10);
    LODWORD(v11) = -1073741811;
    goto LABEL_60;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 3129LL;
    WdLogEvent5_WdError(v13);
    LODWORD(v11) = -1073741790;
    goto LABEL_60;
  }
  v14 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ (32
                                        * (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 13) + 224LL))(&v68))) & 0x20;
  *(_DWORD *)a2 = v14;
  if ( !v68 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = 3140LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v11) = -2147483611;
    goto LABEL_60;
  }
  hAdapter = a1->hAdapter;
  v18 = &v69;
  v69 = 0LL;
  if ( (v14 & 0x20) != 0 )
    v18 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v64, hAdapter, v9, v18);
  v63 = -1LL;
  LODWORD(v11) = 0;
  v22 = *(_DWORD *)a2;
  v23 = 0LL;
  v70 = 0LL;
  v24 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  if ( (v22 & 0x20) == 0 )
  {
    v25 = v69;
    if ( !v69 )
    {
      v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      v11 = -1073741811LL;
      *(_QWORD *)(v26 + 24) = a1->hAdapter;
LABEL_19:
      *(_QWORD *)(v26 + 32) = v11;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_58;
    }
    OutputDuplManager = FindOutputDuplManager(v69, a1->VidPnSourceId, &v70, (unsigned __int64 *)&v69, &v58, &v63, &v59);
    v11 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v26 + 24) = v25;
      goto LABEL_19;
    }
    v23 = v70;
    v24 = v58;
    v31 = v59;
    goto LABEL_34;
  }
  v32 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20) + 74);
  if ( v32 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v29);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v32, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v35 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v35 + 24) = 3187LL;
LABEL_28:
    WdLogEvent5_WdError(v35);
    LODWORD(v11) = -1073741801;
    goto LABEL_58;
  }
  v36 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v36 )
  {
    v35 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v35 + 24) = 3194LL;
    goto LABEL_28;
  }
  v31 = *(OUTPUTDUPL_MGR **)(v36 + 40);
  if ( !v31 )
  {
    v37 = (*(__int64 (**)(void))(*((_QWORD *)Current + 13) + 336LL))();
    v38 = v37;
    LODWORD(v11) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v36, v37);
    if ( (int)v11 < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v39 + 24) = v38;
      WdLogEvent5_WdError(v39);
      goto LABEL_58;
    }
    v31 = *(OUTPUTDUPL_MGR **)(v36 + 40);
  }
  v9 = (struct _KTHREAD **)Current;
LABEL_34:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v41 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v41 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v41);
      LODWORD(v11) = -1073741811;
      goto LABEL_58;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v23, v24);
  if ( (*(_DWORD *)a2 & 0x20) != 0
    || (DXGADAPTER::ReleaseReferenceNoTracking(v23),
        DXGADAPTER::ReleaseReferenceNoTracking(v24),
        LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65),
        (int)v11 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v31 + 13) )
    {
      v43 = WdLogNewEntry5_WdError(v42);
      *(_QWORD *)(v43 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v43);
      LODWORD(v11) = -1071774972;
      goto LABEL_45;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55, *((struct _KTHREAD ***)v31 + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v56);
    v45 = *((_DWORD *)v31 + 12) == 0;
    v57 = 2;
    if ( v45 )
    {
      v46 = WdLogNewEntry5_WdError(v44);
      *(_QWORD *)(v46 + 24) = 3262LL;
      WdLogEvent5_WdError(v46);
      LODWORD(v11) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
      goto LABEL_45;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_51;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v31, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v31, a1, a2);
    }
    LODWORD(v11) = OutputDuplication;
LABEL_51:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
    COREACCESS::~COREACCESS((COREACCESS *)v67);
    COREACCESS::~COREACCESS((COREACCESS *)v66);
    if ( (int)v11 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
    {
      v50 = DXGPROCESS::GetCurrent(v49, v48);
      v51 = v50 ? *((_QWORD *)v50 + 13) : 0LL;
      v56 = (DXGPUSHLOCK *)v9;
      LOBYTE(v57) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v55, 1u);
      (*(void (**)(void))(v51 + 192))();
      if ( (_BYTE)v57 )
      {
        LOBYTE(v57) = 0;
        (*(void (**)(void))(*((_QWORD *)v56 + 13) + 40LL))();
      }
    }
    goto LABEL_58;
  }
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v67);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
LABEL_58:
  if ( v64 )
    DXGADAPTER::ReleaseReferenceNoTracking(v64);
LABEL_60:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v52, &EventProfilerExit, v53, v61);
  return (unsigned int)v11;
}
