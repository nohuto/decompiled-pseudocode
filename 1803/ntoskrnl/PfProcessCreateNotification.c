/*
 * XREFs of PfProcessCreateNotification @ 0x14050E2B4
 * Callers:
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfSnBeginAppLaunch @ 0x14050E34C (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x14050E5AC (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x14050E700 (PfCalculateProcessHash.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_1403CD188 & 1) != 0 || (dword_1403CD7F0 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_1403CD7F0 & 1) != 0 && *(_DWORD *)(a1 + 1180) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
