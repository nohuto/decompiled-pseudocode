/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C00CF230
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
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C021425C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGADAPTER *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdi
  char v30; // al
  unsigned int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  char *v52; // [rsp+30h] [rbp-78h]
  int v53; // [rsp+38h] [rbp-70h] BYREF
  __int64 v54; // [rsp+40h] [rbp-68h]
  DXGADAPTER *v55; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v56[2]; // [rsp+58h] [rbp-50h] BYREF
  char v57; // [rsp+68h] [rbp-40h]
  unsigned __int8 v58; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGADAPTER *v59; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+C8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v54 = 0LL;
  v53 = 2046;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2046);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2046);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v36 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v36;
      }
    }
  }
  if ( !v7 )
  {
    v37 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v38, &EventProfilerExit, v39, v53);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v60 = *v3;
  v8 = v60;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v55, v60, (struct _KTHREAD **)v7, &v59);
  v12 = v59;
  if ( !v59 )
  {
    v40 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v40 + 24) = v8;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
LABEL_45:
    if ( v55 )
      DXGADAPTER::ReleaseReferenceNoTracking(v55);
    goto LABEL_39;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v7 + 104) + 208LL))() )
  {
    v31 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = -1071775738LL;
    if ( v55 )
      DXGADAPTER::ReleaseReferenceNoTracking(v55);
    goto LABEL_32;
  }
  v56[1] = v12;
  _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
  v56[0] = -1LL;
  KeEnterCriticalRegion();
  v17 = v59;
  v52 = (char *)v59 + 120;
  ExAcquirePushLockSharedEx((char *)v59 + 120, 0LL);
  v57 = 1;
  if ( *((_DWORD *)v17 + 44) == 1 )
  {
    v22 = v59;
    v23 = *((_QWORD *)v59 + 307);
    if ( v23 )
    {
      v24 = HIDWORD(v60);
      if ( HIDWORD(v60) < *(_DWORD *)(v23 + 80) )
      {
        v25 = *(unsigned int *)(*((_QWORD *)v59 + 2) + 528LL);
        if ( (int)v25 <= 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v18, v20, v21);
          v31 = -1071775738;
          v47[3] = -1071775738LL;
          v47[4] = v59;
          v47[5] = HIDWORD(v60);
        }
        else
        {
          v26 = *((_QWORD *)v59 + 307);
          v27 = *(_QWORD *)(v26 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 144));
          v28 = HIDWORD(v60);
          if ( HIDWORD(v60) >= *(_DWORD *)(v26 + 80) )
          {
            v48 = WdLogNewEntry5_WdAssertion(v27);
            *(_QWORD *)(v48 + 24) = 5108LL;
            WdLogEvent5_WdAssertion(v48);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v26 + 112) + 3760 * v28 + 722) )
          {
            v29 = *((_QWORD *)v22 + 307);
            if ( !v29 )
            {
              v50 = WdLogNewEntry5_WdAssertion(v27);
              *(_QWORD *)(v50 + 24) = 8641LL;
              WdLogEvent5_WdAssertion(v50);
              v29 = *((_QWORD *)v22 + 307);
            }
            if ( v29 )
            {
              v30 = 1;
            }
            else
            {
              v30 = 0;
              v29 = 0LL;
            }
            if ( v30 )
            {
              if ( (unsigned int)v28 >= *(_DWORD *)(v29 + 80) )
              {
                v51 = WdLogNewEntry5_WdAssertion(v27);
                *(_QWORD *)(v51 + 24) = 5429LL;
                WdLogEvent5_WdAssertion(v51);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v29 + 112) + 3760 * v28 + 720) )
                goto LABEL_26;
            }
            if ( DmmIsWaitingForPowerOn(v59, v28, &v58) >= 0 && v58 )
LABEL_26:
              v31 = 0;
            else
              v31 = -1071775738;
          }
          else
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v18, v20, v21);
            v49[3] = -1071775739LL;
            v49[4] = v59;
            v49[5] = v28;
            v31 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v52, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v22 + 2), v59);
        if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v55 + 2), v55);
LABEL_32:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v32, &EventProfilerExit, v33, v53);
        return v31;
      }
      v41 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v41 + 24) = v24;
      *(_QWORD *)(v41 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v41);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
      goto LABEL_45;
    }
    v44 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v44 + 24) = v22;
    *(_QWORD *)(v44 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v44);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    if ( v55 )
      DXGADAPTER::ReleaseReferenceNoTracking(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v45, &EventProfilerExit, v46, v53);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    if ( v55 )
      DXGADAPTER::ReleaseReferenceNoTracking(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v42, &EventProfilerExit, v43, v53);
    return 3221226166LL;
  }
}
