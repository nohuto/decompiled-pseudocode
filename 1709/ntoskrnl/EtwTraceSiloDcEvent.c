/*
 * XREFs of EtwTraceSiloDcEvent @ 0x14027B96C
 * Callers:
 *     CmEtwRunDown @ 0x140689AF4 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14068A100 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1406E0DF8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1406E2F6C (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1406ED1E0 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
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
