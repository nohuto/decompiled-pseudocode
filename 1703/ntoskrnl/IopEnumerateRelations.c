/*
 * XREFs of IopEnumerateRelations @ 0x1405700DC
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14056DCF8 (PnpInvalidateRelationsInList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x14056E020 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x14056FCD8 (PiEventBuildPdoList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14056FE2C (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x14056FF2C (PnpCompileDeviceInstancePaths.c)
 *     PnpTrackQueryRemoveDevices @ 0x14059AC5C (PnpTrackQueryRemoveDevices.c)
 *     PiEventRestartRemovalRelations @ 0x14059B460 (PiEventRestartRemovalRelations.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140695E4C (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x1406A750C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1405759CC (PipDeviceObjectListElementAt.c)
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
