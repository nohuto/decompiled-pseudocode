/*
 * XREFs of IopSymlinkRemoveECP @ 0x1400FE280
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
