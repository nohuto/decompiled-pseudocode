/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x18004EA10
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F800 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 */

bool __fastcall CSpatialAudioDolbyHeadphones::IsTechnologyLicenseAcquired(CSpatialAudioDolbyHeadphones *this)
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
