/*
 * XREFs of RtlFreeOemString @ 0x180089AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx

  Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)OemString->Buffer;
  if ( Buffer )
    RtlDeleteBoundaryDescriptor(Buffer);
}
