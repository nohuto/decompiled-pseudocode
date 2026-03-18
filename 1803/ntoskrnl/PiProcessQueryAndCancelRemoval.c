/*
 * XREFs of PiProcessQueryAndCancelRemoval @ 0x14073EC0C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PiEventAreDeviceRelationsExcluded @ 0x1405C7918 (PiEventAreDeviceRelationsExcluded.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1405C7E70 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14072787C (PnpCancelRemoveOnHungDevices.c)
 *     PnpFinalizeVetoedRemove @ 0x14073254C (PnpFinalizeVetoedRemove.c)
 *     PipProcessQueryRemovalInKernelMode @ 0x14073EFE8 (PipProcessQueryRemovalInKernelMode.c)
 */

__int64 __fastcall PiProcessQueryAndCancelRemoval(
        unsigned int a1,
        __int64 a2,
        unsigned int **a3,
        int a4,
        __int64 a5,
        int *a6,
        _QWORD *a7)
{
  UNICODE_STRING *v11; // r14
  NTSTATUS RemovalInKernelMode; // edi
  char v13; // al

  v11 = (UNICODE_STRING *)(a6 + 2);
  RemovalInKernelMode = PnpNotifyUserModeDeviceRemoval(
                          a2,
                          (_WORD *)*a7,
                          (__int128 *)&GUID_TARGET_DEVICE_QUERY_REMOVE,
                          (__int64)a6,
                          (__int64)(a6 + 2));
  if ( RemovalInKernelMode >= 0 )
  {
    RemovalInKernelMode = PipProcessQueryRemovalInKernelMode(a1, a2, (_DWORD)a3, a4, a5, (__int64)a6);
    if ( RemovalInKernelMode >= 0 )
    {
      if ( *(_DWORD *)(a2 + 16) == 54 )
      {
        v13 = PiEventAreDeviceRelationsExcluded(a1);
        return (unsigned int)PnpCancelRemoveOnHungDevices(a2, a1, v13, a3, a7);
      }
    }
    else
    {
      PnpFinalizeVetoedRemove(a2, *a6, v11);
      PnpNotifyUserModeDeviceRemoval(a2, (_WORD *)*a7, (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL);
    }
  }
  else
  {
    PnpFinalizeVetoedRemove(a2, *a6, v11);
  }
  return (unsigned int)RemovalInKernelMode;
}
