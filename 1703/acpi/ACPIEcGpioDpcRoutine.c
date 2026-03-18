/*
 * XREFs of ACPIEcGpioDpcRoutine @ 0x1C004C410
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x1C004C674 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcUnmaskInterrupt @ 0x1C004C704 (ACPIEcUnmaskInterrupt.c)
 */

void __fastcall ACPIEcGpioDpcRoutine(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  AcpiEcCommonDpcHandler(DeferredContext);
  if ( (DeferredContext[882] & 1) == 0 )
    ACPIEcUnmaskInterrupt(DeferredContext);
}
