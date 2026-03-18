/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C00CF4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGADAPTER *v17; // rdi
  char *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  struct DXGADAPTER *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rcx
  int v33; // ecx
  unsigned int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // [rsp+30h] [rbp-78h] BYREF
  __int64 v52; // [rsp+38h] [rbp-70h]
  DXGADAPTER *v53; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-58h] BYREF
  char v55; // [rsp+60h] [rbp-48h]
  struct DXGADAPTER *v56; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v57; // [rsp+C0h] [rbp+18h]

  v3 = (__int64 *)a1;
  v52 = 0LL;
  v51 = 2058;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2058);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 2058);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v39 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v39;
      }
    }
  }
  if ( !v7 )
  {
    v40 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v41, &EventProfilerExit, v42, v51);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v57 = *v3;
  v8 = v57;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v53, v57, (struct _KTHREAD **)v7, &v56);
  v12 = v56;
  if ( !v56 )
  {
    v43 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v43 + 24) = v8;
LABEL_45:
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
LABEL_47:
    if ( v53 )
      DXGADAPTER::ReleaseReferenceNoTracking(v53);
    goto LABEL_39;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v7 + 104) + 208LL))() )
  {
    v34 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = -1071775738LL;
    if ( v53 )
      DXGADAPTER::ReleaseReferenceNoTracking(v53);
    goto LABEL_30;
  }
  if ( !*((_QWORD *)v12 + 307) )
  {
    v43 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v43 + 24) = v12;
    goto LABEL_45;
  }
  v54[1] = v12;
  _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
  v54[0] = -1LL;
  KeEnterCriticalRegion();
  v17 = v56;
  v18 = (char *)v56 + 120;
  ExAcquirePushLockSharedEx((char *)v56 + 120, 0LL);
  v55 = 1;
  if ( *((_DWORD *)v17 + 44) == 1 )
  {
    v23 = HIDWORD(v57);
    if ( HIDWORD(v57) < *(_DWORD *)(*((_QWORD *)v12 + 307) + 80LL) )
    {
      v24 = v56;
      v25 = *(unsigned int *)(*((_QWORD *)v56 + 2) + 528LL);
      if ( (int)v25 <= 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v19, v21, v22);
        v34 = -1071775738;
        v47[3] = -1071775738LL;
        v47[4] = v56;
        v47[5] = HIDWORD(v57);
      }
      else
      {
        v26 = *((_QWORD *)v12 + 307);
        v27 = *(_QWORD *)(v26 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 144));
        v28 = HIDWORD(v57);
        if ( HIDWORD(v57) >= *(_DWORD *)(v26 + 80) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v48 + 24) = 5108LL;
          WdLogEvent5_WdAssertion(v48);
        }
        v29 = v28;
        v30 = 3760 * v28;
        if ( *(_BYTE *)(*(_QWORD *)(v26 + 112) + v30 + 722) )
        {
          v31 = *((_QWORD *)v12 + 307);
          v32 = *(_QWORD *)(v31 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v32 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v32 + 144));
          if ( HIDWORD(v57) >= *(_DWORD *)(v31 + 80) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v50 + 24) = 5448LL;
            WdLogEvent5_WdAssertion(v50);
          }
          v33 = *(_DWORD *)(*(_QWORD *)(v31 + 112) + v30 + 696);
          if ( (unsigned int)(v33 - 2) <= 1 )
          {
            v34 = -1071775738;
          }
          else if ( v33 )
          {
            v34 = 0;
          }
          else
          {
            v34 = -1071775732;
          }
        }
        else
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v19, v21, v22);
          v49[3] = -1071775739LL;
          v49[4] = v56;
          v49[5] = v29;
          v34 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v18, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v24 + 2), v56);
      if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
LABEL_30:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v35, &EventProfilerExit, v36, v51);
      return v34;
    }
    v44 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v44 + 24) = v23;
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v44);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
    goto LABEL_47;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
  if ( v53 )
    DXGADAPTER::ReleaseReferenceNoTracking(v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v45, &EventProfilerExit, v46, v51);
  return 3221226166LL;
}
