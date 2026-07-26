/*
 * XREFs of NdisIfGetInterfaceIndexFromNetLuid @ 0x1C0041620
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001D438 (ndisIfFindInterfaceByNetLuid.c)
 */

NDIS_STATUS __stdcall NdisIfGetInterfaceIndexFromNetLuid(NET_LUID NetLuid, PNET_IFINDEX pIfIndex)
{
  NDIS_STATUS v4; // edi
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v6; // r8

  *pIfIndex = 0;
  v4 = -1071448021;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)NetLuid.Value);
  if ( InterfaceByNetLuid )
  {
    v4 = 0;
    *pIfIndex = HIDWORD(InterfaceByNetLuid->Flink);
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  return v4;
}
