/*
 * XREFs of PfProcessCreateNotification @ 0x14057F7DC
 * Callers:
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfCheckDeprioritizeImage @ 0x14043F0C0 (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x140447470 (PfCalculateProcessHash.c)
 *     PfSnBeginAppLaunch @ 0x14057F874 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140387888 & 1) != 0 || (dword_14038D3D0 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (unsigned __int64)&P + 1);
    if ( (dword_14038D3D0 & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1180);
      if ( v3 )
      {
        if ( PfCheckDeprioritizeImage(v3) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x4000u);
      }
    }
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
