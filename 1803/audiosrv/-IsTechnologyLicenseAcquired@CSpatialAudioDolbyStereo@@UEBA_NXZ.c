/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyStereo@@UEBA_NXZ @ 0x1800FF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F800 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 */

bool __fastcall CSpatialAudioDolbyStereo::IsTechnologyLicenseAcquired(CSpatialAudioDolbyStereo *this)
{
  AtmosCheck *v1; // rcx
  bool result; // al

  result = 1;
  if ( byte_180189408 )
  {
    v1 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v1 || (int)AtmosCheck::IsHeadphonesEncoderEnabled(v1) < 0 )
      return 0;
  }
  return result;
}
