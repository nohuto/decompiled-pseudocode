/*
 * XREFs of KdpCommandString @ 0x14078BC34
 * Callers:
 *     KdpTrap @ 0x14078CF94 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x140181B10 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140181BD0 (KiSaveProcessorControlState.c)
 *     KdEnterDebugger @ 0x140789A24 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 *     KdpReportCommandStringStateChange @ 0x14078A374 (KdpReportCommandStringStateChange.c)
 *     KdpCopyContext @ 0x14078C400 (KdpCopyContext.c)
 */

void __fastcall KdpCommandString(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  bool v8; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v10; // si
  int v11; // edx

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v8 = KdEnterDebugger(a5);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v11);
    KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a4 + 48), a4);
    KdpReportCommandStringStateChange(a1, a2, (__int64)CurrentPrcb->Context);
    KdpCopyContext(a4, CurrentPrcb->Context->ContextFlags, CurrentPrcb->Context);
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KdExitDebugger(v10);
  }
}
