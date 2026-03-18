/*
 * XREFs of HvlpTryToLockCpuManagementVersion @ 0x14022E444
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x14022DB9C (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14022DC60 (HvlpSetRegister64.c)
 */

char HvlpTryToLockCpuManagementVersion()
{
  __int64 v0; // rbx
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1LL;
  HvlpSetRegister64(589831, 1uLL);
  HvlpGetRegister64(589831, &v2);
  v0 = (v2 >> 62) & 1;
  if ( (v2 & 0x4000000000000000LL) != 0 )
    HvlpSetRegister64(589831, 0x8000000000000001uLL);
  return v0;
}
