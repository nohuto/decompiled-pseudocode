/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x18003DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CD78 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAA_NXZ.c)
 */

bool __fastcall CSpatialAudioDolbyHeadphones::IsTechnologyLicenseAcquired(CSpatialAudioDolbyHeadphones *this)
{
  AtmosCheck *v1; // rcx
  bool result; // al

  result = 1;
  if ( byte_18012AEA4 )
  {
    v1 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v1 || !AtmosCheck::IsHeadphonesEncoderEnabled(v1) )
      return 0;
  }
  return result;
}
