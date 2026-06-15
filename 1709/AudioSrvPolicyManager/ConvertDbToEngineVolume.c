/*
 * XREFs of ConvertDbToEngineVolume @ 0x18001EA18
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D6F8 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     pow @ 0x180027604 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
