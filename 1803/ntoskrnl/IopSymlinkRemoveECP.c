/*
 * XREFs of IopSymlinkRemoveECP @ 0x14006626C
 * Callers:
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1404E29F0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
