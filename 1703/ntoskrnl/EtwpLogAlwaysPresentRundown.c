/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140435078
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140434C0C (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1407102D0 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(unsigned int a1)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, EtwpHostSiloState, a1, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, EtwpHostSiloState, a1, 0, 8u, 0x401802u);
}
