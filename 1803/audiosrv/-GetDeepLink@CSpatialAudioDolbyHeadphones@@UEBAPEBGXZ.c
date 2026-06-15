/*
 * XREFs of ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ @ 0x18004E740
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F844 (-IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 */

const unsigned __int16 *__fastcall CSpatialAudioDolbyHeadphones::GetDeepLink(CSpatialAudioDolbyHeadphones *this)
{
  AtmosCheck *v2; // rcx
  bool v3; // sf
  const unsigned __int16 *result; // rax

  v2 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( !v2 )
    return (const unsigned __int16 *)((char *)this + 288);
  v3 = (int)AtmosCheck::IsMatEncoderEnabled(v2) < 0;
  result = (const unsigned __int16 *)((char *)this + 800);
  if ( v3 )
    return (const unsigned __int16 *)((char *)this + 288);
  return result;
}
