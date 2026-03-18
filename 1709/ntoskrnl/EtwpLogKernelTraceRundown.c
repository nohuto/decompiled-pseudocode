/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x14074D398
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14074CB5C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14074D2A8 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x14074D318 (EtwpLogGroupMask.c)
 */

void __fastcall EtwpLogKernelTraceRundown(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6)
{
  EtwpLogGroupMask(a1, a2, a3, 0x20u);
  EtwpKernelTraceRundown((int *)a3, a1, a2, a4, a5, a6);
  EtwpLogAlwaysPresentRundown(a1, a2);
}
