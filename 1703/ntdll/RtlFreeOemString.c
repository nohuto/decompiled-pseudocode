/*
 * XREFs of RtlFreeOemString @ 0x18008F770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  if ( OemString->Buffer )
    RtlDeleteBoundaryDescriptor();
}
