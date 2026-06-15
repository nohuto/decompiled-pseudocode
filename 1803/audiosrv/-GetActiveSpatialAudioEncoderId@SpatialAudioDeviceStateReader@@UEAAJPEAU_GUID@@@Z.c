/*
 * XREFs of ?GetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateReader@@UEAAJPEAU_GUID@@@Z @ 0x18004D570
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDeviceStateReader::GetActiveSpatialAudioEncoderId(struct _GUID *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = this[-1];
  return result;
}
