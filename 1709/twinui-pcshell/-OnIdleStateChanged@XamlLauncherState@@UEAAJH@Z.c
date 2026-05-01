/*
 * XREFs of ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x180188F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801DBCE8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall XamlLauncherState::OnIdleStateChanged(XamlLauncherState *this, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  struct IUnknown *v5; // rdx
  ExperienceManagerUtils *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 == 0;
  v5 = (struct IUnknown *)((char *)this - 48);
  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    v7 = ExperienceManagerUtils::PostToUIThread(v6, v5, (void *)6, a4);
    if ( v7 < 0 )
    {
      v8 = 354LL;
      goto LABEL_6;
    }
  }
  else
  {
    v7 = ExperienceManagerUtils::PostToUIThread(v6, v5, (void *)1, a4);
    if ( v7 < 0 )
    {
      v8 = 350LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  return 0LL;
}
