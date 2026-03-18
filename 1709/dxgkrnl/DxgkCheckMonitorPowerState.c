/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C00ED3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0102158 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
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
  struct DXGADAPTER *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rsi
  unsigned int v28; // esi
  DXGADAPTER *v29; // rcx
  __int64 v30; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v33; // rsi
  __int64 v34; // rax
  DXGADAPTER *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  DXGADAPTER *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  DXGADAPTER *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  char *v49; // [rsp+20h] [rbp-68h]
  DXGADAPTER *v50; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v51[2]; // [rsp+38h] [rbp-50h] BYREF
  char v52; // [rsp+48h] [rbp-40h]
  unsigned __int8 v53; // [rsp+98h] [rbp+10h] BYREF
  struct DXGADAPTER *v54; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v55; // [rsp+A8h] [rbp+20h]

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2046);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v33 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v33;
      }
    }
  }
  if ( !v8 )
  {
    v34 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
LABEL_40:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v35, &EventProfilerExit, v36, 2046);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v55 = *v3;
  v9 = v55;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v50, v55, (struct _KTHREAD **)v8, &v54);
  v13 = v54;
  if ( !v54 )
  {
    v37 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v37 + 24) = v9;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
LABEL_46:
    v35 = v50;
    if ( v50 )
      DXGADAPTER::ReleaseReferenceNoTracking(v50);
    goto LABEL_40;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v8 + 96) + 208LL))() )
  {
    v28 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = -1071775738LL;
    v29 = v50;
    if ( v50 )
      DXGADAPTER::ReleaseReferenceNoTracking(v50);
    goto LABEL_30;
  }
  v51[1] = v13;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v51[0] = -1LL;
  KeEnterCriticalRegion();
  v16 = v54;
  v49 = (char *)v54 + 120;
  ExAcquirePushLockSharedEx((char *)v54 + 120, 0LL);
  v52 = 1;
  if ( *((_DWORD *)v16 + 44) == 1 )
  {
    v20 = v54;
    v21 = *((_QWORD *)v54 + 288);
    if ( v21 )
    {
      v22 = HIDWORD(v55);
      if ( HIDWORD(v55) < *(_DWORD *)(v21 + 80) )
      {
        v23 = *(unsigned int *)(*((_QWORD *)v54 + 2) + 520LL);
        if ( (int)v23 <= 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v17);
          v28 = -1071775738;
          v44[3] = -1071775738LL;
          v44[4] = v54;
          v44[5] = HIDWORD(v55);
        }
        else
        {
          v24 = *((_QWORD *)v54 + 288);
          v25 = *(_QWORD *)(v24 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 144));
          v26 = HIDWORD(v55);
          if ( HIDWORD(v55) >= *(_DWORD *)(v24 + 80) )
          {
            v45 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v45 + 24) = 4762LL;
            WdLogEvent5_WdAssertion(v45);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v24 + 112) + 3760 * v26 + 722) )
          {
            if ( !*((_QWORD *)v20 + 288) )
            {
              v47 = WdLogNewEntry5_WdAssertion(v25);
              *(_QWORD *)(v47 + 24) = 8208LL;
              WdLogEvent5_WdAssertion(v47);
            }
            v27 = *((_QWORD *)v20 + 288);
            if ( v27 )
            {
              if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 80) )
              {
                v48 = WdLogNewEntry5_WdAssertion(v25);
                *(_QWORD *)(v48 + 24) = 5083LL;
                WdLogEvent5_WdAssertion(v48);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v27 + 112) + 3760 * v26 + 720) )
                goto LABEL_24;
            }
            if ( DmmIsWaitingForPowerOn(v54, v26, &v53) >= 0 && v53 )
LABEL_24:
              v28 = 0;
            else
              v28 = -1071775738;
          }
          else
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v17);
            v46[3] = -1071775739LL;
            v46[4] = v54;
            v46[5] = v26;
            v28 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v49, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v20 + 2), v54);
        if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
LABEL_30:
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v29, &EventProfilerExit, v30, 2046);
        return v28;
      }
      v38 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v38 + 24) = v22;
      *(_QWORD *)(v38 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v38);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      goto LABEL_46;
    }
    v41 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v41 + 24) = v20;
    *(_QWORD *)(v41 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v41);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    v43 = v50;
    if ( v50 )
      DXGADAPTER::ReleaseReferenceNoTracking(v50);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v43, &EventProfilerExit, v42, 2046);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    v40 = v50;
    if ( v50 )
      DXGADAPTER::ReleaseReferenceNoTracking(v50);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v40, &EventProfilerExit, v39, 2046);
    return 3221226166LL;
  }
}
