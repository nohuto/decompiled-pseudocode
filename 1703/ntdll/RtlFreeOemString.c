/*
 * XREFs of RtlFreeOemString @ 0x18008F770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx

  Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)OemString->Buffer;
  if ( Buffer )
    RtlDeleteBoundaryDescriptor(Buffer);
}
