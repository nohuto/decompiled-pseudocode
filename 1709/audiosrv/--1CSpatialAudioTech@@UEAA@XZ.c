/*
 * XREFs of ??1CSpatialAudioTech@@UEAA@XZ @ 0x1800CE018
 * Callers:
 *     ??_ECSpatialAudioDolbyHeadphones@@UEAAPEAXI@Z @ 0x1800CE050 (--_ECSpatialAudioDolbyHeadphones@@UEAAPEAXI@Z.c)
 *     ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x1800CE090 (--_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1800CE4B8 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 */

void __fastcall CSpatialAudioTech::~CSpatialAudioTech(CSpatialAudioTech *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  if ( !v1 )
  {
    CSpatialAudioTech::FreeAtmosCheck();
    *((_QWORD *)this + 1) = 0LL;
  }
}
