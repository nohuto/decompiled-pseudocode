/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1407102D0
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14070FEBC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14070FFFC (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x140434E3C (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(unsigned int a1, __int128 *a2, unsigned __int8 a3, int a4, int a5)
{
  EtwpLogGroupMask(a1, a2, 0x20u);
  EtwpKernelTraceRundown((int *)a2, a1, a3, a4, a5);
  EtwpLogAlwaysPresentRundown(a1);
}
