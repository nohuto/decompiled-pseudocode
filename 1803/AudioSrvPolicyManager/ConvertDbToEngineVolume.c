/*
 * XREFs of ConvertDbToEngineVolume @ 0x180027D84
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180026A78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     pow @ 0x180035AE4 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
