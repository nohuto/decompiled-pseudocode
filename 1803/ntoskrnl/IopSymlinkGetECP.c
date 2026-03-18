/*
 * XREFs of IopSymlinkGetECP @ 0x140065598
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1404E1088 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x1404E2960 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
