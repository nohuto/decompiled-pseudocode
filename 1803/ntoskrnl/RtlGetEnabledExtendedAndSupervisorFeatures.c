/*
 * XREFs of RtlGetEnabledExtendedAndSupervisorFeatures @ 0x14028D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlGetEnabledExtendedAndSupervisorFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]);
}
