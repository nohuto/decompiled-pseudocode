/*
 * XREFs of UserSetLastStatus @ 0x1C00053F0
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C0017310 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00179F0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserConsoleControl @ 0x1C001B670 (NtUserConsoleControl.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C00212F0 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 *     NtUserRegisterWindowMessage @ 0x1C00D9D10 (NtUserRegisterWindowMessage.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00DB8B0 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00FF0C0 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C010A520 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0118760 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelStartup @ 0x1C011B410 (NtUserDwmKernelStartup.c)
 *     NtUserDwmKernelShutdown @ 0x1C01D7D70 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C01DEE20 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01E0EF0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  ULONG v6; // eax

  if ( ((Status >> 16) & 0x1FFFu) - 62 <= 1 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v6 = RtlNtStatusToDosError(v4);
      return (struct _NT_TIB *)UserSetLastError(v6);
    }
  }
  return result;
}
