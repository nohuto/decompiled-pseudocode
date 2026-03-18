/*
 * XREFs of HvlGetReferenceTime @ 0x14014B144
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x14014B0AC (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x14014B170 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x1401F0A40 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
