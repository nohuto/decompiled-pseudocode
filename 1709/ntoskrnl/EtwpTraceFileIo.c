/*
 * XREFs of EtwpTraceFileIo @ 0x14027D000
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     EtwpFileProvTrace @ 0x14027BD38 (EtwpFileProvTrace.c)
 */

void __fastcall EtwpTraceFileIo(
        struct _EVENT_DATA_DESCRIPTOR *a1,
        ULONG a2,
        unsigned int a3,
        __int16 a4,
        const GUID *a5)
{
  if ( EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4464) & 0x6000000) != 0 )
    EtwpFileProvTrace(a1, a2, a4, a5);
  if ( a4 != 1102 )
    EtwTraceKernelEvent((__int64)a1, a2, a3, a4, 0x501903u);
}
