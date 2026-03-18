/*
 * XREFs of PiProcessQueryAndCancelRemoval @ 0x14055BA6C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipProcessQueryRemovalInKernelMode @ 0x14055BBFC (PipProcessQueryRemovalInKernelMode.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14055D9DC (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x14055DB20 (PiEventAreDeviceRelationsExcluded.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1406C1A88 (PnpCancelRemoveOnHungDevices.c)
 *     PnpFinalizeVetoedRemove @ 0x1406CAE6C (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiProcessQueryAndCancelRemoval(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        _QWORD *a7)
{
  unsigned int *v11; // r14
  int RemovalInKernelMode; // edi
  int v14; // r8d

  v11 = a6 + 2;
  RemovalInKernelMode = PnpNotifyUserModeDeviceRemoval(a2, *a7, &GUID_TARGET_DEVICE_QUERY_REMOVE, a6, a6 + 2);
  if ( RemovalInKernelMode < 0 )
  {
    PnpFinalizeVetoedRemove(a2, *a6, v11);
  }
  else
  {
    RemovalInKernelMode = PipProcessQueryRemovalInKernelMode(a1, a2, a3, a4, a5, (__int64)a6);
    if ( RemovalInKernelMode < 0 )
    {
      PnpFinalizeVetoedRemove(a2, *a6, v11);
      PnpNotifyUserModeDeviceRemoval(a2, *a7, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL);
    }
    else if ( *(_DWORD *)(a2 + 16) == 54 )
    {
      LOBYTE(v14) = PiEventAreDeviceRelationsExcluded(a1);
      return (unsigned int)PnpCancelRemoveOnHungDevices(a2, a1, v14, a3, (__int64)a7);
    }
  }
  return (unsigned int)RemovalInKernelMode;
}
