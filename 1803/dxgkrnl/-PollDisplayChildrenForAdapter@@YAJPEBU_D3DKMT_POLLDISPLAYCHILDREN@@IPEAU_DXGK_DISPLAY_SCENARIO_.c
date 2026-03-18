/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0166404
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C01683B0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00DA734 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00DA76C (MonitorAcquireMonitorPendingEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiPollDisplayChildren @ 0x1C01EFC94 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C0212490 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
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
  __int64 v18; // rbx
  void *v19; // r15
  union _LARGE_INTEGER v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  DXGADAPTER *v48; // [rsp+38h] [rbp-29h] BYREF
  __int64 v49; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v50[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v51[40]; // [rsp+70h] [rbp+Fh] BYREF
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
    (DXGADAPTERBYHANDLE *)&v48,
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
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v49, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v18) = COREADAPTERACCESS::AcquireExclusive(&v49);
  if ( (int)v18 >= 0 )
  {
    v19 = (void *)*((_QWORD *)QuadPart + 24);
    v20.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v19);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v23 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v21, v22);
      v20 = Timeout;
      v18 = v23;
      if ( v23 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v27 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0);
          v18 = v27;
          if ( v27 < 0 )
          {
            v29 = WdLogNewEntry5_WdError(v28);
            *(_QWORD *)(v29 + 24) = v18;
            WdLogEvent5_WdError(v29);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v49);
        if ( (int)v18 < 0 )
        {
          ObfDereferenceObject(v19);
          if ( v20.QuadPart )
            MonitorReleaseMonitorPendingEvent((PVOID)v20.QuadPart, v30, v31, v32);
          goto LABEL_34;
        }
        LODWORD(v18) = DpiPollDisplayChildren(v19, v4, a3);
        ObfDereferenceObject(v19);
        if ( !v20.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v40 = COREADAPTERACCESS::AcquireExclusive(&v49);
            v42 = v40;
            if ( v40 < 0 )
            {
              v46 = WdLogNewEntry5_WdError(v41);
              *(_QWORD *)(v46 + 24) = v42;
              WdLogEvent5_WdError(v46);
            }
            else
            {
              v43 = DmmEnableModeResetOnMonitorEvent(QuadPart, 1u);
              v42 = v43;
              if ( v43 < 0 )
              {
                v45 = WdLogNewEntry5_WdError(v44);
                *(_QWORD *)(v45 + 24) = v42;
                WdLogEvent5_WdError(v45);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v49);
            }
            if ( !(_DWORD)v18 )
              LODWORD(v18) = v42;
          }
          goto LABEL_34;
        }
        if ( (int)v18 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v37 = KeWaitForSingleObject((PVOID)(v20.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v18 = v37;
          if ( v37 == 258 )
          {
            v39 = WdLogNewEntry5_WdError(v38);
            *(_QWORD *)(v39 + 24) = 1407LL;
LABEL_24:
            WdLogEvent5_WdError(v39);
            goto LABEL_25;
          }
          if ( v37 < 0 )
          {
            v39 = WdLogNewEntry5_WdError(v38);
            *(_QWORD *)(v39 + 24) = v18;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((PVOID)v20.QuadPart, v33, v34, v35);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v25 + 24) = 1342LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v26 + 24) = v18;
      WdLogEvent5_WdError(v26);
    }
    if ( (int)v18 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v9 = v18;
  COREACCESS::~COREACCESS((COREACCESS *)v51);
  COREACCESS::~COREACCESS((COREACCESS *)v50);
LABEL_35:
  if ( v48 )
    DXGADAPTER::ReleaseReferenceNoTracking(v48);
  return v9;
}
