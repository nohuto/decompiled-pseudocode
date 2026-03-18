/*
 * XREFs of IopSymlinkRemoveECP @ 0x140085BE8
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1404BB340 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
