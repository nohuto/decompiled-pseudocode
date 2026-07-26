/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F5D0C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DEA0 (NdisInitializeTimer.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisAoAcInitialize(_QWORD *FunctionContext)
{
  char *PoolWithTag; // rbx
  unsigned __int8 v3; // al

  PoolWithTag = (char *)FunctionContext[561];
  if ( PoolWithTag || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x490uLL, 0x6D61444Eu)) != 0LL )
  {
    memset(PoolWithTag, 0, 0x490uLL);
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
    PoolWithTag[1089] = v3;
    PoolWithTag[280] = 0;
    PoolWithTag[378] = 1;
    PoolWithTag[1088] = 0;
    PoolWithTag[432] = 0;
    *((_DWORD *)PoolWithTag + 69) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)(PoolWithTag + 64), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, FunctionContext);
    *((_QWORD *)PoolWithTag + 24) = FunctionContext;
    *((_QWORD *)PoolWithTag + 25) = ndisAoAcTempRefWorkItem;
    *((_QWORD *)PoolWithTag + 37) = ndisAoAcWakeWorkItem;
    *((_QWORD *)PoolWithTag + 36) = FunctionContext;
    FunctionContext[561] = PoolWithTag;
  }
  else if ( (unsigned __int8)byte_1C0099615 >= 2u )
  {
    WPP_SF_q(0xAu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)FunctionContext);
  }
}
