/*
 * XREFs of RtlAddSIDToBoundaryDescriptor @ 0x18007CFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddSIDToBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor, PSID RequiredSid)
{
  return sub_18007CFD8(BoundaryDescriptor, RequiredSid, 0LL);
}
