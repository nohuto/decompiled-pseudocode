/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ @ 0x1800FF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F844 (-IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 */

bool __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologyLicenseAcquired(CSpatialAudioDolbyAtmosMAT *this)
{
  AtmosCheck *v1; // rcx
  bool result; // al

  result = 1;
  if ( byte_180189408 )
  {
    v1 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v1 || (int)AtmosCheck::IsMatEncoderEnabled(v1) < 0 )
      return 0;
  }
  return result;
}
