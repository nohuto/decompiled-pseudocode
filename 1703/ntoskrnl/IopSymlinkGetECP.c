/*
 * XREFs of IopSymlinkGetECP @ 0x140100CB0
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopSymlinkProcessReparse @ 0x14057C25C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
