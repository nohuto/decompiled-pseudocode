/*
 * XREFs of ConvertDbToEngineVolume @ 0x1800B0724
 * Callers:
 *     s_apmSetVolumeGroupGainForId @ 0x1800B0980 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x180049B90 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
