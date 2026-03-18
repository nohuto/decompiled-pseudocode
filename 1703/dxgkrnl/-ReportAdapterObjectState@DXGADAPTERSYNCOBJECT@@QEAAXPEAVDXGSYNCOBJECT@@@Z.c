/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C01A6370
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0196A04 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_ppqqpx @ 0x1C0014C08 (Template_ppqqpx.c)
 *     Template_ppqqppqi @ 0x1C0014CC4 (Template_ppqqppqi.c)
 *     Template_ppqqpqq @ 0x1C0014D8C (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0014E50 (Template_ppqqpt.c)
 *     Template_pp @ 0x1C00385F4 (Template_pp.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(DXGADAPTERSYNCOBJECT *this, struct DXGSYNCOBJECT *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx

  if ( !bTracingEnabled )
    return;
  v4 = *((_QWORD *)this + 4);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v6 = *((_DWORD *)a2 + 36) - 1;
  if ( !v6 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqqpt(*((unsigned int *)a2 + 54), &EventReportSynchronizationMutex, v4, v5, v4);
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqqpqq(*((unsigned int *)a2 + 54), &EventReportSemaphore, v4, v5, v4);
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_22;
    v12 = (const EVENT_DESCRIPTOR *)&EventReportFence;
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqqpx(*((unsigned int *)a2 + 54), &EventReportCPUNotification, v4, v5, v4);
    goto LABEL_22;
  }
  v10 = (unsigned int)(v9 - 1);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqppqi(*((unsigned int *)a2 + 38), &EventReportPeriodicMonitoredFence, v4, v5, v4);
    }
    else
    {
      v11 = WdLogNewEntry5_WdAssertion(this, v10, v4, v5);
      *(_QWORD *)(v11 + 24) = 909LL;
      WdLogEvent5_WdAssertion(v11);
    }
    goto LABEL_22;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v12 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
LABEL_17:
    Template_ppqqpx(*((unsigned int *)a2 + 54), v12, v4, v5, v4);
  }
LABEL_22:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp((__int64)this, &EventReportSyncObject, v4, *((_QWORD *)this + 4), *((unsigned int *)a2 + 18));
  }
}
