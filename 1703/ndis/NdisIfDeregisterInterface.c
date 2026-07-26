/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C00BF3B0
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C002513C (ndisFilterAttachCleanUp.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040B10 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0044BC0 (ndisIfDeletePersistedInterface.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
