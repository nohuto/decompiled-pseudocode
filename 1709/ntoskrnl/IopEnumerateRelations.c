/*
 * XREFs of IopEnumerateRelations @ 0x14055D5A0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PiRestartRemovalRelations @ 0x14055CEE8 (PiRestartRemovalRelations.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x14055D108 (PiEventBuildPdoList.c)
 *     PnpTrackQueryRemoveDevices @ 0x14055D26C (PnpTrackQueryRemoveDevices.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14055D2E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x14055D404 (PnpCompileDeviceInstancePaths.c)
 *     PnpInvalidateRelationsInList @ 0x1405E42E4 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405EF9D4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1406C1A88 (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x1406D2258 (IopCheckIfMergeRequired.c)
 *     PiProcessCanceledRemoveForReset @ 0x1406D5248 (PiProcessCanceledRemoveForReset.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14059C10C (PipDeviceObjectListElementAt.c)
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
