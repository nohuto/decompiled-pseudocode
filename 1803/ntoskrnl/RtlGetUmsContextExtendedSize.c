/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x140292E40
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x1402845E0 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14077CA6C (PspUmsInitializeContext.c)
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
