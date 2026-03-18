/*
 * XREFs of HvlGetReferenceTime @ 0x1401579C8
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x140157930 (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x1401579F0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x14022DB9C (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
