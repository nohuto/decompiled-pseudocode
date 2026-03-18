/*
 * XREFs of PpmPerfRegisterHvCap @ 0x14076FBD0
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x140226F70 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigurePerfStateCap @ 0x14022BB10 (HvlConfigurePerfStateCap.c)
 */

__int64 __fastcall PpmPerfRegisterHvCap(unsigned int *a1)
{
  int LpIndexFromApicId; // ecx
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (HvlEnlightenments & 8) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(a1[1]);
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  v4[0] = a1[2];
  v4[1] = a1[3];
  v4[2] = a1[4];
  return HvlConfigurePerfStateCap(LpIndexFromApicId, (__int64)v4);
}
