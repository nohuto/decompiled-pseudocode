/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C00ED650
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rbx
  char *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  struct DXGADAPTER *v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // ecx
  unsigned int v33; // ebx
  DXGADAPTER *v34; // rcx
  __int64 v35; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v38; // rsi
  __int64 v39; // rax
  DXGADAPTER *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  DXGADAPTER *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  DXGADAPTER *v50; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v51[2]; // [rsp+30h] [rbp-58h] BYREF
  char v52; // [rsp+40h] [rbp-48h]
  struct DXGADAPTER *v53; // [rsp+98h] [rbp+10h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+18h]

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2058);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v38 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v38;
      }
    }
  }
  if ( !v8 )
  {
    v39 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
LABEL_39:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v40, &EventProfilerExit, v41, 2058);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v54 = *v3;
  v9 = v54;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v50, v54, (struct _KTHREAD **)v8, &v53);
  v13 = v53;
  if ( !v53 )
  {
    v42 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v42 + 24) = v9;
LABEL_45:
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
LABEL_47:
    v40 = v50;
    if ( v50 )
      DXGADAPTER::ReleaseReferenceNoTracking(v50);
    goto LABEL_39;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v8 + 96) + 208LL))() )
  {
    v33 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = -1071775738LL;
    v34 = v50;
    if ( v50 )
      DXGADAPTER::ReleaseReferenceNoTracking(v50);
    goto LABEL_30;
  }
  if ( !*((_QWORD *)v13 + 288) )
  {
    v42 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v42 + 24) = v13;
    goto LABEL_45;
  }
  v51[1] = v13;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v51[0] = -1LL;
  KeEnterCriticalRegion();
  v17 = v53;
  v18 = (char *)v53 + 120;
  ExAcquirePushLockSharedEx((char *)v53 + 120, 0LL);
  v52 = 1;
  if ( *((_DWORD *)v17 + 44) == 1 )
  {
    v22 = HIDWORD(v54);
    if ( HIDWORD(v54) < *(_DWORD *)(*((_QWORD *)v13 + 288) + 80LL) )
    {
      v23 = v53;
      v24 = *(unsigned int *)(*((_QWORD *)v53 + 2) + 520LL);
      if ( (int)v24 <= 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v19);
        v33 = -1071775738;
        v46[3] = -1071775738LL;
        v46[4] = v53;
        v46[5] = HIDWORD(v54);
      }
      else
      {
        v25 = *((_QWORD *)v13 + 288);
        v26 = *(_QWORD *)(v25 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v26 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 144));
        v27 = HIDWORD(v54);
        if ( HIDWORD(v54) >= *(_DWORD *)(v25 + 80) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v47 + 24) = 4762LL;
          WdLogEvent5_WdAssertion(v47);
        }
        v28 = v27;
        v29 = 3760 * v27;
        if ( *(_BYTE *)(*(_QWORD *)(v25 + 112) + v29 + 722) )
        {
          v30 = *((_QWORD *)v13 + 288);
          v31 = *(_QWORD *)(v30 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 144));
          if ( HIDWORD(v54) >= *(_DWORD *)(v30 + 80) )
          {
            v49 = WdLogNewEntry5_WdAssertion(v31);
            *(_QWORD *)(v49 + 24) = 5102LL;
            WdLogEvent5_WdAssertion(v49);
          }
          v32 = *(_DWORD *)(*(_QWORD *)(v30 + 112) + v29 + 696);
          if ( (unsigned int)(v32 - 2) <= 1 )
          {
            v33 = -1071775738;
          }
          else if ( v32 )
          {
            v33 = 0;
          }
          else
          {
            v33 = -1071775732;
          }
        }
        else
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v19);
          v48[3] = -1071775739LL;
          v48[4] = v53;
          v48[5] = v28;
          v33 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v18, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v53);
      if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
LABEL_30:
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v34, &EventProfilerExit, v35, 2058);
      return v33;
    }
    v43 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v43 + 24) = v22;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    goto LABEL_47;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  v45 = v50;
  if ( v50 )
    DXGADAPTER::ReleaseReferenceNoTracking(v50);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v45, &EventProfilerExit, v44, 2058);
  return 3221226166LL;
}
