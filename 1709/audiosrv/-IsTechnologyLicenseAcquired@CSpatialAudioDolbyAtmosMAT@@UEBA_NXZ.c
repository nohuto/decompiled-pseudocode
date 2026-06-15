/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ @ 0x1800CEB50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x1800CE998 (-IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 */

bool __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologyLicenseAcquired(CSpatialAudioDolbyAtmosMAT *this)
{
  AtmosCheck *v1; // rcx
  bool result; // al

  result = 1;
  if ( byte_18014B220 )
  {
    v1 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v1 || (int)AtmosCheck::IsMatEncoderEnabled(v1) < 0 )
      return 0;
  }
  return result;
}
