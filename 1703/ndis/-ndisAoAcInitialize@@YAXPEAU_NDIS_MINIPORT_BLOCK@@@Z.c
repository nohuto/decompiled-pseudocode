/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9BE0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisAoAcInitialize(_QWORD *FunctionContext)
{
  char *PoolWithTag; // rbx
  unsigned __int8 v3; // al

  PoolWithTag = (char *)FunctionContext[561];
  if ( PoolWithTag || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x430uLL, 0x6D61444Eu)) != 0LL )
  {
    memset(PoolWithTag, 0, 0x430uLL);
    KeInitializeSpinLock((PKSPIN_LOCK)PoolWithTag);
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 32;
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 32;
    KeInitializeEvent((PRKEVENT)PoolWithTag + 16, NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(PoolWithTag + 440), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)PoolWithTag + 17, NotificationEvent, 1u);
    v3 = ndisCsResiliency;
    *((_DWORD *)PoolWithTag + 92) = 0;
    *((_DWORD *)PoolWithTag + 93) |= 0x100u;
    PoolWithTag[1069] = v3;
    PoolWithTag[280] = 0;
    PoolWithTag[378] = 1;
    PoolWithTag[1068] = 0;
    PoolWithTag[432] = 0;
    *((_DWORD *)PoolWithTag + 69) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)(PoolWithTag + 64), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, FunctionContext);
    *((_QWORD *)PoolWithTag + 24) = FunctionContext;
    *((_QWORD *)PoolWithTag + 25) = ndisAoAcTempRefWorkItem;
    *((_QWORD *)PoolWithTag + 37) = ndisAoAcWakeWorkItem;
    *((_QWORD *)PoolWithTag + 36) = FunctionContext;
    FunctionContext[561] = PoolWithTag;
  }
  else if ( (unsigned __int8)byte_1C0092615 >= 2u )
  {
    WPP_SF_q(0xAu, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, (__int64)FunctionContext);
  }
}
