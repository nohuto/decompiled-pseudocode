/*
 * XREFs of ?EndCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18003BFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::EndCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    DwmpEndTransitionRequest();
    *((_DWORD *)this + 6) = 0;
  }
  if ( *((_DWORD *)this + 7) )
  {
    DwmpEndTransitionRequest();
    *((_DWORD *)this + 7) = 0;
  }
  if ( *((_DWORD *)this + 5) )
  {
    DwmpEndTransitionRequest();
    if ( *((_DWORD *)this + 5) == 82 || *((_DWORD *)this + 5) == 70 )
    {
      v3 = AnimationClock_CharmsShowPaneHideBar;
      DwmpEndAnimationClock(&v3);
    }
    *((_DWORD *)this + 5) = 0;
  }
  return 0LL;
}
