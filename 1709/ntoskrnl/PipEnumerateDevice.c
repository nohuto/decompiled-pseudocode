/*
 * XREFs of PipEnumerateDevice @ 0x140553034
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400FB99C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PoFxIdleDevice @ 0x1400FBB18 (PoFxIdleDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400FBBE0 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PoFxActivateDevice @ 0x1400FC934 (PoFxActivateDevice.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1400FCB48 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpQueryDeviceRelations @ 0x140553234 (PnpQueryDeviceRelations.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1405539C0 (PnpDeviceCompletionRequestCreate.c)
 */

__int64 __fastcall PipEnumerateDevice(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int DeviceRelations; // ebx

  if ( a2
    || (PnpAsyncOptions & 2) == 0
    || (*(_DWORD *)(a1 + 396) & 0x800000) != 0
    || InitSafeBootMode
    || (v5 = PnpDeviceCompletionRequestCreate(a1, 781LL)) == 0 )
  {
    if ( a3 && (*(_DWORD *)(a1 + 396) & 0x800000) != 0 )
      return (unsigned int)-1073741267;
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Start, (unsigned __int16 *)(a1 + 40));
    PipClearDevNodeFlags(a1, 8LL);
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v13 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    DeviceRelations = PnpQueryDeviceRelations(v13, 0LL, 0LL, a1 + 528);
    PoFxIdleDevice(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 704) &= ~0x80u;
    *(_DWORD *)(a1 + 392) = DeviceRelations;
    PipSetDevNodeState(a1, 781);
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(a1 + 40));
  }
  else
  {
    PipSetDevNodeState(a1, 780);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v6, (_QWORD *)v5);
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Start, (unsigned __int16 *)(a1 + 40));
    PipClearDevNodeFlags(a1, 8LL);
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v7 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    v8 = PnpQueryDeviceRelations(v7, 0LL, PnpDeviceCompletionRoutine, v5);
    v10 = v8;
    if ( v8 == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Pend, (unsigned __int16 *)(a1 + 40));
      return v10;
    }
    if ( *(_DWORD *)(v5 + 40) != v8 )
    {
      *(_DWORD *)(v5 + 40) = v8;
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(a1 + 40));
      PnpDeviceCompletionQueueDispatchedEntryCompleted(v12, (_QWORD *)v5);
    }
    PnpDeviceCompletionQueueRemoveCompletedRequest(v9, (_QWORD *)v5);
    PnpDeviceCompletionProcessCompletedRequest(v5);
  }
  return 0;
}
