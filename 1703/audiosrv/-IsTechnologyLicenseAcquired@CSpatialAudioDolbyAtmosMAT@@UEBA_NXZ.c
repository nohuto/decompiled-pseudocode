/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ @ 0x1800C8080
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CDAC (-IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ.c)
 */

bool __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologyLicenseAcquired(CSpatialAudioDolbyAtmosMAT *this)
{
  AtmosCheck *v1; // rcx
  bool result; // al

  result = 1;
  if ( byte_18012AEA4 )
  {
    v1 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v1 || !AtmosCheck::IsMatEncoderEnabled(v1) )
      return 0;
  }
  return result;
}
