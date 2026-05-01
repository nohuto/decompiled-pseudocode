/*
 * XREFs of ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18022B714
 * Callers:
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18022A910 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x18022B898 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall PerSessionState::IsCurrentThreadOnInputDesktop(PerSessionState *this)
{
  char v1; // bl
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  int pvInfo; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 6, &pvInfo, 4u, 0LL) )
    return pvInfo != 0;
  return v1;
}
