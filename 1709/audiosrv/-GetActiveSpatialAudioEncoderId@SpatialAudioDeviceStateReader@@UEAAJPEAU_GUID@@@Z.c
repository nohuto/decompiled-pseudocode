/*
 * XREFs of ?GetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateReader@@UEAAJPEAU_GUID@@@Z @ 0x1800D6100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDeviceStateReader::GetActiveSpatialAudioEncoderId(struct _GUID *this, struct _GUID *a2)
{
  __int64 result; // rax

  if ( a2 )
    *a2 = this[-1];
  result = 2147500035LL;
  if ( a2 )
    return 0LL;
  return result;
}
