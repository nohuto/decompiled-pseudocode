/*
 * XREFs of ?IsApplicationTransitionAnimationEnabled@@YA_NXZ @ 0x1802AC2B8
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802ABCD0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x1802AC0F0 (-EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802AC7C0 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     <none>
 */

bool IsApplicationTransitionAnimationEnabled(void)
{
  int v0; // eax
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_180439970;
  if ( !dword_180439970 )
  {
    v3 = 0;
    v2 = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\FlightedFeatures",
           L"ApplicationTransitionAnimation",
           0x10010u,
           &v3,
           &v4,
           &v2) )
    {
      v0 = 1;
    }
    else
    {
      v0 = (v4 != 1) + 1;
    }
    dword_180439970 = v0;
  }
  return v0 == 1;
}
