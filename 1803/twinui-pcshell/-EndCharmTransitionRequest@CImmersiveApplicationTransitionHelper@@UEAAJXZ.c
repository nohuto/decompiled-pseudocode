/*
 * XREFs of ?EndCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18011BE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::EndCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((unsigned int *)this + 6);
  if ( (_DWORD)v2 )
  {
    DwmpEndTransitionRequest(v2);
    *((_DWORD *)this + 6) = 0;
  }
  v3 = *((unsigned int *)this + 7);
  if ( (_DWORD)v3 )
  {
    DwmpEndTransitionRequest(v3);
    *((_DWORD *)this + 7) = 0;
  }
  v4 = *((unsigned int *)this + 5);
  if ( (_DWORD)v4 )
  {
    DwmpEndTransitionRequest(v4);
    if ( *((_DWORD *)this + 5) == 82 || *((_DWORD *)this + 5) == 70 )
    {
      v6 = AnimationClock_CharmsShowPaneHideBar;
      DwmpEndAnimationClock(&v6);
    }
    *((_DWORD *)this + 5) = 0;
  }
  return 0LL;
}
