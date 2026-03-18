/*
 * XREFs of DpiMiracastStopMiracastSessionAsync @ 0x1C003EE20
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C00016A0 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003ED50 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, __int64 a2, _QWORD *a3, int a4)
{
  char v6; // bp
  __int64 v8; // rax
  ULONG v10; // eax
  char *PoolWithTag; // rax
  __int64 v12; // rcx
  char *v13; // rdi
  unsigned int v14; // edi
  __int64 v15; // rax
  PDRIVER_OBJECT v16; // rcx

  v6 = a2;
  if ( !(_BYTE)a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v10 = IoSizeofWorkItem();
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v10 + 32LL, 0x74727044u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = P;
      PoolWithTag[8] = v6;
      if ( a3 )
        *((_QWORD *)PoolWithTag + 2) = *a3;
      v16 = g_pDriverObject;
      *((_DWORD *)PoolWithTag + 6) = a4;
      IoInitializeWorkItem(v16, (PIO_WORKITEM)(PoolWithTag + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v13 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, v13);
      return 0;
    }
    else
    {
      v14 = -1073741801;
      v15 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v15 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v15);
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopMiracastSessionAsync);
    }
    return v14;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(P, a2);
    *(_QWORD *)(v8 + 24) = P;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
