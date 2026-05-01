/*
 * XREFs of ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x1802307A8
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18022E510 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3da77838a00d6ef2652f9f0cca8cef38___ @ 0x18022D0B4 (Windows--Internal--ComTaskPool--QueueTask__lambda_3da77838a00d6ef2652f9f0cca8cef38___.c)
 */

void __fastcall XamlLauncherState::PrepareStartReadinessListener(XamlLauncherState *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlLauncherState *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = Windows::Internal::ComTaskPool::QueueTask__lambda_3da77838a00d6ef2652f9f0cca8cef38___((__int64)this, &v4);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      273LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v2);
    *((_BYTE *)this + 966) = 1;
  }
}
