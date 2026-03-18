/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AFF8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C017D060 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C0099D10 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0099D48 (MonitorAcquireMonitorPendingEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiPollDisplayChildren @ 0x1C01C2850 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01D4D04 (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGADAPTER *QuadPart; // rsi
  _QWORD *v18; // rax
  int v19; // r8d
  __int64 v20; // rbx
  void *v21; // r15
  union _LARGE_INTEGER v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  DXGADAPTER *v56; // [rsp+38h] [rbp-29h] BYREF
  __int64 v57; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v58[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v59[40]; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+7Fh] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  v9 = Current;
  if ( !Current )
  {
    v10 = -1073741811;
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v12);
    WdLogEvent5_WdError(v11);
    return v10;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v56,
    a1->hAdapter,
    Current,
    (struct DXGADAPTER **)&Timeout);
  QuadPart = (DXGADAPTER *)Timeout.QuadPart;
  if ( !Timeout.QuadPart )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v10 = -1073741811;
    v18[3] = -1073741811LL;
    v18[4] = v9;
    v18[5] = a1->hAdapter;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v57, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v20) = COREADAPTERACCESS::AcquireExclusive(&v57, v19 + 1);
  if ( (int)v20 >= 0 )
  {
    v21 = (void *)*((_QWORD *)QuadPart + 24);
    v22.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v21);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v25 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v23, v24);
      v22 = Timeout;
      v20 = v25;
      if ( v25 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v32 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0LL);
          v20 = v32;
          if ( v32 < 0 )
          {
            v35 = WdLogNewEntry5_WdError(v34, v33);
            *(_QWORD *)(v35 + 24) = v20;
            WdLogEvent5_WdError(v35);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v57);
        if ( (int)v20 < 0 )
        {
          ObfDereferenceObject(v21);
          if ( v22.QuadPart )
            MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v22.QuadPart, v36, v37, v38);
          goto LABEL_34;
        }
        LODWORD(v20) = DpiPollDisplayChildren(v21, a2, a3);
        ObfDereferenceObject(v21);
        if ( !v22.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v46 = COREADAPTERACCESS::AcquireExclusive(&v57, 1u);
            v49 = v46;
            if ( v46 < 0 )
            {
              v54 = WdLogNewEntry5_WdError(v48, v47);
              *(_QWORD *)(v54 + 24) = v49;
              WdLogEvent5_WdError(v54);
            }
            else
            {
              LOBYTE(v47) = 1;
              v50 = DmmEnableModeResetOnMonitorEvent(QuadPart, v47);
              v49 = v50;
              if ( v50 < 0 )
              {
                v53 = WdLogNewEntry5_WdError(v52, v51);
                *(_QWORD *)(v53 + 24) = v49;
                WdLogEvent5_WdError(v53);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v57);
            }
            if ( !(_DWORD)v20 )
              LODWORD(v20) = v49;
          }
          goto LABEL_34;
        }
        if ( (int)v20 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v43 = KeWaitForSingleObject((PVOID)(v22.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v20 = v43;
          if ( v43 == 258 )
          {
            v45 = WdLogNewEntry5_WdError(v44, v39);
            *(_QWORD *)(v45 + 24) = 1365LL;
LABEL_24:
            WdLogEvent5_WdError(v45);
            goto LABEL_25;
          }
          if ( v43 < 0 )
          {
            v45 = WdLogNewEntry5_WdError(v44, v39);
            *(_QWORD *)(v45 + 24) = v20;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v22.QuadPart, v39, v40, v41);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v30 + 24) = 1300LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v31 + 24) = v20;
      WdLogEvent5_WdError(v31);
    }
    if ( (int)v20 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v10 = v20;
  COREACCESS::~COREACCESS((COREACCESS *)v59);
  COREACCESS::~COREACCESS((COREACCESS *)v58);
LABEL_35:
  if ( v56 )
    DXGADAPTER::ReleaseReference(v56);
  return v10;
}
