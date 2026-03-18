/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C0099BF4
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0099030 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C0099D10 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0099D48 (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  void *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE v26[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v27[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v28[48]; // [rsp+58h] [rbp-30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp+10h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, this, 0LL);
    if ( *((_QWORD *)this + 285) == v7 )
    {
      v22 = WdLogNewEntry5_WdError(v6, v5);
      LODWORD(v19) = -1073741637;
      *(_QWORD *)(v22 + 24) = this;
      *(_QWORD *)(v22 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
      if ( v8 < 0 )
      {
        LODWORD(v19) = v8;
      }
      else
      {
        v9 = (void *)*((_QWORD *)this + 24);
        ObfReferenceObject(v9);
        v10 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v9);
        if ( (int)v10 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v12, v11);
          *(_QWORD *)(v23 + 24) = v10;
          WdLogEvent5_WdError(v23);
          LODWORD(v19) = v10;
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v26);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v14 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v19 = v14;
          if ( v14 == 258 )
          {
            v24 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
            *(_QWORD *)(v24 + 24) = 1531LL;
            WdLogEvent5_WdWarning(v24);
          }
          else if ( v14 < 0 )
          {
            v25 = WdLogNewEntry5_WdError(v16, v15);
            *(_QWORD *)(v25 + 24) = v19;
            WdLogEvent5_WdError(v25);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(0LL, a2, a3, a4);
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v21 + 32) = 0LL;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  return (unsigned int)v19;
}
