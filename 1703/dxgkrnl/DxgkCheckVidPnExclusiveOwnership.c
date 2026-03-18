/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C00935D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGADAPTER *v20; // rbx
  char *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  struct DXGADAPTER *v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // ecx
  unsigned int v37; // ebx
  DXGADAPTER *v38; // rcx
  __int64 v39; // r8
  __int64 *ThreadProperty; // rax
  __int64 v42; // rax
  DXGADAPTER *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  DXGADAPTER *v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  DXGADAPTER *v53; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v54[2]; // [rsp+30h] [rbp-58h] BYREF
  char v55; // [rsp+40h] [rbp-48h]
  struct DXGADAPTER *v56; // [rsp+98h] [rbp+10h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+18h]

  v3 = (__int64 *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2058);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v9 = *ThreadProperty;
    }
  }
  if ( !v9 )
  {
    v42 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
LABEL_39:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v43, &EventProfilerExit, v44, 2058);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v57 = *v3;
  v10 = v57;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v53, (unsigned int)v57, (struct _KTHREAD **)v9, &v56);
  v15 = v56;
  if ( !v56 )
  {
    v45 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v45 + 24) = v10;
LABEL_45:
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v45);
LABEL_47:
    v43 = v53;
    if ( v53 )
      DXGADAPTER::ReleaseReference(v53);
    goto LABEL_39;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v9 + 72) + 208LL))() )
  {
    v37 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = -1071775738LL;
    v38 = v53;
    if ( v53 )
      DXGADAPTER::ReleaseReference(v53);
    goto LABEL_30;
  }
  if ( !*((_QWORD *)v15 + 285) )
  {
    v45 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v45 + 24) = v15;
    goto LABEL_45;
  }
  v54[1] = v15;
  _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
  v54[0] = -1LL;
  KeEnterCriticalRegion();
  v20 = v56;
  v21 = (char *)v56 + 120;
  ExAcquirePushLockSharedEx((char *)v56 + 120, 0LL);
  v55 = 1;
  if ( *((_DWORD *)v20 + 44) == 1 )
  {
    v26 = HIDWORD(v57);
    if ( HIDWORD(v57) < *(_DWORD *)(*((_QWORD *)v15 + 285) + 80LL) )
    {
      v27 = v56;
      v28 = *(unsigned int *)(*((_QWORD *)v56 + 2) + 520LL);
      if ( (int)v28 <= 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v22, v24, v25);
        v37 = -1071775738;
        v49[3] = -1071775738LL;
        v49[4] = v56;
        v49[5] = HIDWORD(v57);
      }
      else
      {
        v29 = *((_QWORD *)v15 + 285);
        v30 = *(_QWORD *)(v29 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 144));
        v31 = HIDWORD(v57);
        if ( HIDWORD(v57) >= *(_DWORD *)(v29 + 80) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v30, v22, v24, v25);
          *(_QWORD *)(v50 + 24) = 4595LL;
          WdLogEvent5_WdAssertion(v50);
        }
        v32 = v31;
        v33 = 3208 * v31;
        if ( *(_BYTE *)(*(_QWORD *)(v29 + 112) + v33 + 722) )
        {
          v34 = *((_QWORD *)v15 + 285);
          v35 = *(_QWORD *)(v34 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v35 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 144));
          if ( HIDWORD(v57) >= *(_DWORD *)(v34 + 80) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v35, v22, v24, v25);
            *(_QWORD *)(v52 + 24) = 4911LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v36 = *(_DWORD *)(*(_QWORD *)(v34 + 112) + v33 + 696);
          if ( (unsigned int)(v36 - 2) <= 1 )
          {
            v37 = -1071775738;
          }
          else if ( v36 )
          {
            v37 = 0;
          }
          else
          {
            v37 = -1071775732;
          }
        }
        else
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v22, v24, v25);
          v51[3] = -1071775739LL;
          v51[4] = v56;
          v51[5] = v32;
          v37 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v21, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v27 + 2), v56);
      if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
LABEL_30:
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v38, &EventProfilerExit, v39, 2058);
      return v37;
    }
    v46 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    *(_QWORD *)(v46 + 24) = v26;
    *(_QWORD *)(v46 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v46);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
    goto LABEL_47;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
  v48 = v53;
  if ( v53 )
    DXGADAPTER::ReleaseReference(v53);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v48, &EventProfilerExit, v47, 2058);
  return 3221226166LL;
}
