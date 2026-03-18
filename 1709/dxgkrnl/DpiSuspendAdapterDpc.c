/*
 * XREFs of DpiSuspendAdapterDpc @ 0x1C002DEB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 */

void __fastcall DpiSuspendAdapterDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v5; // rax

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(Dpc, DeferredContext);
  v5[3] = DeferredContext;
  v5[4] = *((int *)DeferredContext + 992);
  v5[5] = *((int *)DeferredContext + 993);
  WdLogEvent5_WdTrace(v5);
  if ( *((_DWORD *)DeferredContext + 992) != 4 && *((_DWORD *)DeferredContext + 993) == 1 )
    DpiRequestDevicePowerState(DeferredContext[3], 4, 1);
}
