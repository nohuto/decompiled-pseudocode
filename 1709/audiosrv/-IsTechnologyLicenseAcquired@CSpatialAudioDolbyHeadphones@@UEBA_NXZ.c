/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x1800CEB80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x1800CE8E0 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 */

bool __fastcall CSpatialAudioDolbyHeadphones::IsTechnologyLicenseAcquired(CSpatialAudioDolbyHeadphones *this)
{
  AtmosCheck *v1; // rcx
  bool result; // al

  result = 1;
  if ( byte_18014B220 )
  {
    v1 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v1 || (int)AtmosCheck::IsHeadphonesEncoderEnabled(v1) < 0 )
      return 0;
  }
  return result;
}
