/*
 * XREFs of ?GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelectionMode@@@Z @ 0x180028FF0
 * Callers:
 *     ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x180028200 (-GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode(
        SpatialAudioDeviceStateReader *this,
        enum SpatialRendererSelectionMode *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *(_DWORD *)a2 = *((_DWORD *)this - 6);
  return result;
}
