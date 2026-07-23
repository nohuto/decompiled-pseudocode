/*
 * XREFs of RtlAddSIDToBoundaryDescriptor @ 0x18007F3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddSIDToBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor, PSID RequiredSid)
{
  return sub_18007F3E8(BoundaryDescriptor, RequiredSid, 0LL);
}
