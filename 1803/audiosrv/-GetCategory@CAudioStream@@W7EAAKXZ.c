/*
 * XREFs of ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x180065A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(__int64 a1)
{
  return SpatialAudioEncoderProperties::GetNativeStaticObjectCount((SpatialAudioEncoderProperties *)(a1 - 8));
}
