/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C00B2850
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0011CBC (ndisFilterAttachCleanUp.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003E980 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0042820 (ndisIfDeletePersistedInterface.c)
 * Callees:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00121B4 (ndisIfDeregisterInterfaceEx.c)
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
