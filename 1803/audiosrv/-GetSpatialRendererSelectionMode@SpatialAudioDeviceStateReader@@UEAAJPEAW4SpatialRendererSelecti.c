/*
 * XREFs of ?GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelectionMode@@@Z @ 0x18004D5B0
 * Callers:
 *     ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x18004C4B0 (-GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectM.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
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
