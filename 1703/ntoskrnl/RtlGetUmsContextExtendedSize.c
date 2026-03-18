/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x140243DEC
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14023926C (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x1406E264C (PspUmsInitializeContext.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetUmsContextExtendedSize()
{
  unsigned int v0; // ecx

  v0 = 1312;
  if ( MEMORY[0xFFFFF780000003E8] )
    return (unsigned int)(MEMORY[0xFFFFF780000003E8] + 1375);
  return v0;
}
