/*
 * XREFs of NtUserUpdateDefaultDesktopThumbnail @ 0x1C01ED050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     DwmAsyncUpdateDefaultDesktopThumbnail @ 0x1C024DA98 (DwmAsyncUpdateDefaultDesktopThumbnail.c)
 */

__int64 __fastcall NtUserUpdateDefaultDesktopThumbnail(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS updated; // eax
  void *v11; // rax

  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_16;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 || (unsigned int)IsTopLevelWindow(v9) && (unsigned int)IsWindowDesktopComposed(v9) )
  {
    v7 = grpdeskIODefault;
    v8 = gptiCurrent;
    if ( *(_QWORD *)(gptiCurrent + 432LL) == grpdeskIODefault && (!v9 || *(_QWORD *)(v9 + 24) == grpdeskIODefault) )
    {
      v11 = (void *)ReferenceDwmApiPort(gptiCurrent);
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v11, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  LODWORD(v9) = updated >= 0;
  if ( updated < 0 )
  {
    LODWORD(v9) = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v8, v7);
  return (int)v9;
}
