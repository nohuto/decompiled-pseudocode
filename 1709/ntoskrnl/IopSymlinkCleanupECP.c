/*
 * XREFs of IopSymlinkCleanupECP @ 0x1405CDAA0
 * Callers:
 *     <none>
 * Callees:
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1405CDAB4 (IopSymlinkFreeRelatedMountPointChain.c)
 */

void __fastcall IopSymlinkCleanupECP(PVOID EcpContext, LPCGUID EcpType)
{
  IopSymlinkFreeRelatedMountPointChain(EcpContext);
}
