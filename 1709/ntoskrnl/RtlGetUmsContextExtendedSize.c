/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14025B084
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14024E250 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x140718AA0 (PspUmsInitializeContext.c)
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
