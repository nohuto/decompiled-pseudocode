/*
 * XREFs of ?GetNativeStaticObjectCount@SpatialAudioEncoderProperties@@UEAAIXZ @ 0x18003FD50
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x180065A60 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetNativeStaticObjectCount(SpatialAudioEncoderProperties *this)
{
  return *((unsigned int *)this + 136);
}
