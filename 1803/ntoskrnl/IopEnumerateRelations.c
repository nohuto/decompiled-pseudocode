/*
 * XREFs of IopEnumerateRelations @ 0x1405C99FC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405C91F4 (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x1405C9370 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405C94B4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1405C95F8 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1405C9760 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1405C9874 (PnpCompileDeviceInstancePaths.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14072787C (PnpCancelRemoveOnHungDevices.c)
 *     PnpTrackQueryRemoveDevices @ 0x140732CC0 (PnpTrackQueryRemoveDevices.c)
 *     IopCheckIfMergeRequired @ 0x140739CA4 (IopCheckIfMergeRequired.c)
 *     PiProcessCanceledRemoveForReset @ 0x14073EAB4 (PiProcessCanceledRemoveForReset.c)
 *     PiRestartRemovalRelations @ 0x14073EDBC (PiRestartRemovalRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1405E6BE4 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v5; // r11
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx

  v5 = 0;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v8 = *a1;
    v9 = a2[1];
    v10 = **a1;
    if ( v9 < v10 && v7 >= 0 )
    {
      if ( v7 > 1 )
      {
        if ( v7 != 2 )
          return v5;
        v9 = v10 + ~v9;
      }
      v5 = (int)PipDeviceObjectListElementAt((_DWORD)v8, v9, (_DWORD)a3, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
