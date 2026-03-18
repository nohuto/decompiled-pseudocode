/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x14074D2A8
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140749910 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x14074D398 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
