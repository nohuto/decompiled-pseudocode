/*
 * XREFs of KdpSymbol @ 0x14078BFD0
 * Callers:
 *     KdpTrap @ 0x14078CF94 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x140181B10 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140181BD0 (KiSaveProcessorControlState.c)
 *     KdEnterDebugger @ 0x140789A24 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 *     KdpReportLoadSymbolsStateChange @ 0x14078A5C8 (KdpReportLoadSymbolsStateChange.c)
 *     KdpCopyContext @ 0x14078C400 (KdpCopyContext.c)
 */

void __fastcall KdpSymbol(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6)
{
  bool v9; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v11; // bp
  int v12; // edx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v9 = KdEnterDebugger(a6);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v9;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v12);
    KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a5 + 48), a5);
    KdpReportLoadSymbolsStateChange(a1, a2, a3, (__int64)CurrentPrcb->Context);
    KdpCopyContext(a5, CurrentPrcb->Context->ContextFlags, CurrentPrcb->Context);
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KdExitDebugger(v11);
  }
}
