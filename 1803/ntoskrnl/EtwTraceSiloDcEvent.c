/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1402AF31C
 * Callers:
 *     CmEtwRunDown @ 0x1406EDEF0 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1406EE504 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14074BD00 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14074D9BC (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x140756628 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
