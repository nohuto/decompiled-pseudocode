/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C01AF450
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01AC32C (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01AC3B8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C01AC65C (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C01AE3FC (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r15
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 hAdapter; // rdx
  struct DXGADAPTER **v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  struct DXGADAPTER *v28; // r12
  struct DXGADAPTER *v29; // r13
  struct DXGADAPTER *v30; // r14
  __int64 v31; // rax
  int OutputDuplManager; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  OUTPUTDUPL_MGR *v37; // r14
  __int64 v38; // r8
  __int64 v39; // r9
  DXGSESSIONMGR *v40; // r14
  unsigned int CurrentProcessSessionId; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v45; // rax
  __int64 v46; // r15
  unsigned int v47; // eax
  __int64 v48; // r14
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  UINT KeyedMutexCount; // eax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  bool v63; // zf
  __int64 v64; // rax
  int OutputDuplication; // eax
  __int64 v66; // rcx
  struct DXGPROCESS *v67; // rax
  __int64 v68; // rdi
  _BYTE v70[8]; // [rsp+40h] [rbp-79h] BYREF
  DXGPUSHLOCK *v71; // [rsp+48h] [rbp-71h]
  int v72; // [rsp+50h] [rbp-69h]
  struct DXGADAPTER *v73; // [rsp+58h] [rbp-61h] BYREF
  OUTPUTDUPL_MGR *v74; // [rsp+60h] [rbp-59h] BYREF
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-51h]
  unsigned __int64 v76; // [rsp+70h] [rbp-49h] BYREF
  DXGADAPTER *v77; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v78[8]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v79[32]; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v80[88]; // [rsp+B8h] [rbp-1h] BYREF
  int v81; // [rsp+120h] [rbp+67h] BYREF
  struct DXGADAPTER *v82; // [rsp+130h] [rbp+77h] BYREF
  struct DXGADAPTER *v83; // [rsp+138h] [rbp+7Fh] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 3036LL;
    WdLogEvent5_WdAssertion(v6);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 3041LL;
    WdLogEvent5_WdError(v10);
    LODWORD(v13) = -1073741811;
    goto LABEL_60;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v16 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v16 + 24) = 3048LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v13) = -1073741790;
    goto LABEL_60;
  }
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (32 * (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 9) + 224LL))(&v81))) & 0x20;
  v19 = *(_DWORD *)a2;
  if ( !v81 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = 3059LL;
    WdLogEvent5_WdError(v20);
    LODWORD(v13) = -2147483611;
    goto LABEL_60;
  }
  hAdapter = a1->hAdapter;
  v22 = &v82;
  v82 = 0LL;
  if ( (v19 & 0x20) != 0 )
    v22 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v77, hAdapter, v9, v22);
  v76 = -1LL;
  LODWORD(v13) = 0;
  v27 = *(_DWORD *)a2;
  v28 = 0LL;
  v83 = 0LL;
  v29 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( (v27 & 0x20) == 0 )
  {
    v30 = v82;
    if ( !v82 )
    {
      v31 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v13 = -1073741811LL;
      *(_QWORD *)(v31 + 24) = a1->hAdapter;
LABEL_19:
      *(_QWORD *)(v31 + 32) = v13;
      WdLogEvent5_WdWarning(v31);
      goto LABEL_58;
    }
    OutputDuplManager = FindOutputDuplManager(v82, a1->VidPnSourceId, &v83, (unsigned __int64 *)&v82, &v73, &v76, &v74);
    v13 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      *(_QWORD *)(v31 + 24) = v30;
      goto LABEL_19;
    }
    v28 = v83;
    v29 = v73;
    v37 = v74;
    goto LABEL_34;
  }
  v40 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v24, v23, v25, v26) + 73);
  if ( v40 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v34, v33, v38, v39);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v40,
                                       CurrentProcessSessionId,
                                       v42,
                                       v43);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v45 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v45 + 24) = 3106LL;
LABEL_28:
    WdLogEvent5_WdError(v45);
    LODWORD(v13) = -1073741801;
    goto LABEL_58;
  }
  v46 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v46 )
  {
    v45 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v45 + 24) = 3113LL;
    goto LABEL_28;
  }
  v37 = *(OUTPUTDUPL_MGR **)(v46 + 40);
  if ( !v37 )
  {
    v47 = (*(__int64 (**)(void))(*((_QWORD *)Current + 9) + 344LL))();
    v48 = v47;
    LODWORD(v13) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v46, v47, v49, v50);
    if ( (int)v13 < 0 )
    {
      v51 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v51 + 24) = v48;
      WdLogEvent5_WdError(v51);
      goto LABEL_58;
    }
    v37 = *(OUTPUTDUPL_MGR **)(v46 + 40);
  }
  v9 = (struct _KTHREAD **)Current;
LABEL_34:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v53 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v53 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v53);
      LODWORD(v13) = -1073741811;
      goto LABEL_58;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, v28, v29);
  v57 = *(unsigned int *)a2;
  if ( (v57 & 0x20) != 0
    || (DXGADAPTER::ReleaseReference(v28),
        DXGADAPTER::ReleaseReference(v29),
        LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v78),
        (int)v13 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v37 + 13) )
    {
      v58 = WdLogNewEntry5_WdError(v55, v54);
      *(_QWORD *)(v58 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v58);
      LODWORD(v13) = -1071774972;
      goto LABEL_45;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70, *((struct _KTHREAD ***)v37 + 3), v57, v56);
    DXGPUSHLOCK::AcquireExclusive(v71);
    v63 = *((_DWORD *)v37 + 12) == 0;
    v72 = 2;
    if ( v63 )
    {
      v64 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v64 + 24) = 3181LL;
      WdLogEvent5_WdError(v64);
      LODWORD(v13) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v70);
      goto LABEL_45;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_51;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v37, a1, v61, v62);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v37, a1, a2);
    }
    LODWORD(v13) = OutputDuplication;
LABEL_51:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v70);
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( (int)v13 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
    {
      v67 = DXGPROCESS::GetCurrent(v66);
      v68 = v67 ? *((_QWORD *)v67 + 9) : 0LL;
      v71 = (DXGPUSHLOCK *)v9;
      LOBYTE(v72) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v70, 0);
      (*(void (**)(void))(v68 + 192))();
      if ( (_BYTE)v72 )
      {
        LOBYTE(v72) = 0;
        (*(void (**)(void))(*((_QWORD *)v71 + 9) + 40LL))();
      }
    }
    goto LABEL_58;
  }
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  COREACCESS::~COREACCESS((COREACCESS *)v79);
LABEL_58:
  v11 = v77;
  if ( v77 )
    DXGADAPTER::ReleaseReference(v77);
LABEL_60:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v11, &EventProfilerExit, v12, 2061);
  return (unsigned int)v13;
}
