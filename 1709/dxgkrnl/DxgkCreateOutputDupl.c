/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C01C9200
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00B461C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01C5D84 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01C5E10 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C01C60B4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C01C7F9C (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r15
  __int64 v8; // rax
  DXGADAPTER *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
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
  __int64 v34; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v36; // rax
  __int64 v37; // r15
  unsigned int v38; // eax
  __int64 v39; // r14
  __int64 v40; // rax
  UINT KeyedMutexCount; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rax
  int OutputDuplication; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DXGPROCESS *v51; // rax
  __int64 v52; // rdi
  _BYTE v54[8]; // [rsp+40h] [rbp-79h] BYREF
  DXGPUSHLOCK *v55; // [rsp+48h] [rbp-71h]
  int v56; // [rsp+50h] [rbp-69h]
  struct DXGADAPTER *v57; // [rsp+58h] [rbp-61h] BYREF
  OUTPUTDUPL_MGR *v58; // [rsp+60h] [rbp-59h] BYREF
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-51h]
  unsigned __int64 v60; // [rsp+70h] [rbp-49h] BYREF
  DXGADAPTER *v61; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v62[8]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v63[32]; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v64[88]; // [rsp+B8h] [rbp-1h] BYREF
  int v65; // [rsp+120h] [rbp+67h] BYREF
  struct DXGADAPTER *v66; // [rsp+130h] [rbp+77h] BYREF
  struct DXGADAPTER *v67; // [rsp+138h] [rbp+7Fh] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 3117LL;
    WdLogEvent5_WdAssertion(v5);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  v7 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 3122LL;
    WdLogEvent5_WdError(v8);
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
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (32 * (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 12) + 224LL))(&v65))) & 0x20;
  v15 = *(_DWORD *)a2;
  if ( !v65 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = 3140LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v11) = -2147483611;
    goto LABEL_60;
  }
  hAdapter = a1->hAdapter;
  v18 = &v66;
  v66 = 0LL;
  if ( (v15 & 0x20) != 0 )
    v18 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, hAdapter, v7, v18);
  v60 = -1LL;
  LODWORD(v11) = 0;
  v22 = *(_DWORD *)a2;
  v23 = 0LL;
  v67 = 0LL;
  v24 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  if ( (v22 & 0x20) == 0 )
  {
    v25 = v66;
    if ( !v66 )
    {
      v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      v11 = -1073741811LL;
      *(_QWORD *)(v26 + 24) = a1->hAdapter;
LABEL_19:
      *(_QWORD *)(v26 + 32) = v11;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_58;
    }
    OutputDuplManager = FindOutputDuplManager(v66, a1->VidPnSourceId, &v67, (unsigned __int64 *)&v66, &v57, &v60, &v58);
    v11 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v26 + 24) = v25;
      goto LABEL_19;
    }
    v23 = v67;
    v24 = v57;
    v31 = v58;
    goto LABEL_34;
  }
  v32 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20) + 73);
  if ( v32 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v29);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v32, CurrentProcessSessionId, v34);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v36 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v36 + 24) = 3187LL;
LABEL_28:
    WdLogEvent5_WdError(v36);
    LODWORD(v11) = -1073741801;
    goto LABEL_58;
  }
  v37 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v37 )
  {
    v36 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v36 + 24) = 3194LL;
    goto LABEL_28;
  }
  v31 = *(OUTPUTDUPL_MGR **)(v37 + 40);
  if ( !v31 )
  {
    v38 = (*(__int64 (**)(void))(*((_QWORD *)Current + 12) + 344LL))();
    v39 = v38;
    LODWORD(v11) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v37, v38);
    if ( (int)v11 < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v40 + 24) = v39;
      WdLogEvent5_WdError(v40);
      goto LABEL_58;
    }
    v31 = *(OUTPUTDUPL_MGR **)(v37 + 40);
  }
  v7 = (struct _KTHREAD **)Current;
LABEL_34:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v42 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v42 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v42);
      LODWORD(v11) = -1073741811;
      goto LABEL_58;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v23, v24);
  if ( (*(_DWORD *)a2 & 0x20) != 0
    || (DXGADAPTER::ReleaseReferenceNoTracking(v23),
        DXGADAPTER::ReleaseReferenceNoTracking(v24),
        LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62),
        (int)v11 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v31 + 13) )
    {
      v44 = WdLogNewEntry5_WdError(v43);
      *(_QWORD *)(v44 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v44);
      LODWORD(v11) = -1071774972;
      goto LABEL_45;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54, *((struct _KTHREAD ***)v31 + 3));
    DXGPUSHLOCK::AcquireExclusive(v55);
    v46 = *((_DWORD *)v31 + 12) == 0;
    v56 = 2;
    if ( v46 )
    {
      v47 = WdLogNewEntry5_WdError(v45);
      *(_QWORD *)(v47 + 24) = 3262LL;
      WdLogEvent5_WdError(v47);
      LODWORD(v11) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
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
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
    COREACCESS::~COREACCESS((COREACCESS *)v64);
    COREACCESS::~COREACCESS((COREACCESS *)v63);
    if ( (int)v11 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
    {
      v51 = DXGPROCESS::GetCurrent(v50, v49);
      v52 = v51 ? *((_QWORD *)v51 + 12) : 0LL;
      v55 = (DXGPUSHLOCK *)v7;
      LOBYTE(v56) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v54, 0);
      (*(void (**)(void))(v52 + 192))();
      if ( (_BYTE)v56 )
      {
        LOBYTE(v56) = 0;
        (*(void (**)(void))(*((_QWORD *)v55 + 12) + 40LL))();
      }
    }
    goto LABEL_58;
  }
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v64);
  COREACCESS::~COREACCESS((COREACCESS *)v63);
LABEL_58:
  v9 = v61;
  if ( v61 )
    DXGADAPTER::ReleaseReferenceNoTracking(v61);
LABEL_60:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v9, &EventProfilerExit, v10, 2061);
  return (unsigned int)v11;
}
