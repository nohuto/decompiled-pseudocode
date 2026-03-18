/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EDA8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0180A30 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00B9C8C (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00B9CC4 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C01DBF3C (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C01EBC64 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v4; // r13d
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *QuadPart; // rsi
  _QWORD *v17; // rax
  int v18; // r8d
  __int64 v19; // rbx
  void *v20; // r15
  union _LARGE_INTEGER v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  DXGADAPTER *v43; // [rsp+38h] [rbp-29h] BYREF
  __int64 v44; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v45[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v46[40]; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v8 = Current;
  if ( !Current )
  {
    v9 = -1073741811;
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
    return v9;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v43,
    a1->hAdapter,
    Current,
    (struct DXGADAPTER **)&Timeout);
  QuadPart = (DXGADAPTER *)Timeout.QuadPart;
  if ( !Timeout.QuadPart )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v9 = -1073741811;
    v17[3] = -1073741811LL;
    v17[4] = v8;
    v17[5] = a1->hAdapter;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v44, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v19) = COREADAPTERACCESS::AcquireExclusive(&v44, v18 + 1);
  if ( (int)v19 >= 0 )
  {
    v20 = (void *)*((_QWORD *)QuadPart + 24);
    v21.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v20);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v22 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout);
      v21 = Timeout;
      v19 = v22;
      if ( v22 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v26 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0);
          v19 = v26;
          if ( v26 < 0 )
          {
            v28 = WdLogNewEntry5_WdError(v27);
            *(_QWORD *)(v28 + 24) = v19;
            WdLogEvent5_WdError(v28);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v44);
        if ( (int)v19 < 0 )
        {
          ObfDereferenceObject(v20);
          if ( v21.QuadPart )
            MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v21.QuadPart, v29);
          goto LABEL_34;
        }
        LODWORD(v19) = DpiPollDisplayChildren(v20, v4, a3);
        ObfDereferenceObject(v20);
        if ( !v21.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v35 = COREADAPTERACCESS::AcquireExclusive(&v44, 1u);
            v37 = v35;
            if ( v35 < 0 )
            {
              v41 = WdLogNewEntry5_WdError(v36);
              *(_QWORD *)(v41 + 24) = v37;
              WdLogEvent5_WdError(v41);
            }
            else
            {
              v38 = DmmEnableModeResetOnMonitorEvent(QuadPart, 1u);
              v37 = v38;
              if ( v38 < 0 )
              {
                v40 = WdLogNewEntry5_WdError(v39);
                *(_QWORD *)(v40 + 24) = v37;
                WdLogEvent5_WdError(v40);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v44);
            }
            if ( !(_DWORD)v19 )
              LODWORD(v19) = v37;
          }
          goto LABEL_34;
        }
        if ( (int)v19 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v32 = KeWaitForSingleObject((PVOID)(v21.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v19 = v32;
          if ( v32 == 258 )
          {
            v34 = WdLogNewEntry5_WdError(v33);
            *(_QWORD *)(v34 + 24) = 1365LL;
LABEL_24:
            WdLogEvent5_WdError(v34);
            goto LABEL_25;
          }
          if ( v32 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v33);
            *(_QWORD *)(v34 + 24) = v19;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v21.QuadPart, v30);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v24 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v24 + 24) = 1300LL;
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v25 + 24) = v19;
      WdLogEvent5_WdError(v25);
    }
    if ( (int)v19 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v9 = v19;
  COREACCESS::~COREACCESS((COREACCESS *)v46);
  COREACCESS::~COREACCESS((COREACCESS *)v45);
LABEL_35:
  if ( v43 )
    DXGADAPTER::ReleaseReferenceNoTracking(v43);
  return v9;
}
