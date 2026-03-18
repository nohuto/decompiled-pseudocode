/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C0093320
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0104858 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
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
  struct DXGADAPTER *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGADAPTER *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGADAPTER *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rsi
  unsigned int v33; // esi
  DXGADAPTER *v34; // rcx
  __int64 v35; // r8
  __int64 *ThreadProperty; // rax
  __int64 v38; // rax
  DXGADAPTER *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  DXGADAPTER *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r8
  DXGADAPTER *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // [rsp+20h] [rbp-68h]
  DXGADAPTER *v54; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v55[2]; // [rsp+38h] [rbp-50h] BYREF
  char v56; // [rsp+48h] [rbp-40h]
  unsigned __int8 v57; // [rsp+98h] [rbp+10h] BYREF
  struct DXGADAPTER *v58; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v59; // [rsp+A8h] [rbp+20h]

  v3 = (__int64 *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2046);
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
    v38 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
LABEL_40:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v39, &EventProfilerExit, v40, 2046);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v59 = *v3;
  v10 = v59;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v54, (unsigned int)v59, (struct _KTHREAD **)v9, &v58);
  v15 = v58;
  if ( !v58 )
  {
    v41 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v41 + 24) = v10;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v41);
LABEL_46:
    v39 = v54;
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    goto LABEL_40;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v9 + 72) + 208LL))() )
  {
    v33 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = -1071775738LL;
    v34 = v54;
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    goto LABEL_30;
  }
  v55[1] = v15;
  _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
  v55[0] = -1LL;
  KeEnterCriticalRegion();
  v20 = v58;
  v53 = (char *)v58 + 120;
  ExAcquirePushLockSharedEx((char *)v58 + 120, 0LL);
  v56 = 1;
  if ( *((_DWORD *)v20 + 44) == 1 )
  {
    v25 = v58;
    v26 = *((_QWORD *)v58 + 285);
    if ( v26 )
    {
      v27 = HIDWORD(v59);
      if ( HIDWORD(v59) < *(_DWORD *)(v26 + 80) )
      {
        v28 = *(unsigned int *)(*((_QWORD *)v58 + 2) + 520LL);
        if ( (int)v28 <= 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v21, v23, v24);
          v33 = -1071775738;
          v48[3] = -1071775738LL;
          v48[4] = v58;
          v48[5] = HIDWORD(v59);
        }
        else
        {
          v29 = *((_QWORD *)v58 + 285);
          v30 = *(_QWORD *)(v29 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 144));
          v31 = HIDWORD(v59);
          if ( HIDWORD(v59) >= *(_DWORD *)(v29 + 80) )
          {
            v49 = WdLogNewEntry5_WdAssertion(v30, v21, v23, v24);
            *(_QWORD *)(v49 + 24) = 4595LL;
            WdLogEvent5_WdAssertion(v49);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v29 + 112) + 3208 * v31 + 722) )
          {
            if ( !*((_QWORD *)v25 + 285) )
            {
              v51 = WdLogNewEntry5_WdAssertion(v30, v21, v23, v24);
              *(_QWORD *)(v51 + 24) = 8198LL;
              WdLogEvent5_WdAssertion(v51);
            }
            v32 = *((_QWORD *)v25 + 285);
            if ( v32 )
            {
              if ( (unsigned int)v31 >= *(_DWORD *)(v32 + 80) )
              {
                v52 = WdLogNewEntry5_WdAssertion(v30, v21, v23, v24);
                *(_QWORD *)(v52 + 24) = 4896LL;
                WdLogEvent5_WdAssertion(v52);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v32 + 112) + 3208 * v31 + 720) )
                goto LABEL_24;
            }
            if ( DmmIsWaitingForPowerOn(v58, v31, &v57) >= 0 && v57 )
LABEL_24:
              v33 = 0;
            else
              v33 = -1071775738;
          }
          else
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v21, v23, v24);
            v50[3] = -1071775739LL;
            v50[4] = v58;
            v50[5] = v31;
            v33 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v53, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v25 + 2), v58);
        if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
LABEL_30:
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q((__int64)v34, &EventProfilerExit, v35, 2046);
        return v33;
      }
      v42 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v42 + 24) = v27;
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v42);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
      goto LABEL_46;
    }
    v45 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v45 + 24) = v25;
    *(_QWORD *)(v45 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v45);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
    v47 = v54;
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v47, &EventProfilerExit, v46, 2046);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
    v44 = v54;
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v44, &EventProfilerExit, v43, 2046);
    return 3221226166LL;
  }
}
