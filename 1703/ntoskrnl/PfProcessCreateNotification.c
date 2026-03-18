/*
 * XREFs of PfProcessCreateNotification @ 0x140563D18
 * Callers:
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfSnBeginAppLaunch @ 0x140563DB0 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x140563FB4 (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x140564110 (PfCalculateProcessHash.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_14036D908 & 1) != 0 || (dword_14036DF70 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_14036DF70 & 1) != 0 && *(_DWORD *)(a1 + 1180) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
