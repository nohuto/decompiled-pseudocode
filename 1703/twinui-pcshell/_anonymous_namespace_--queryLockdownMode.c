/*
 * XREFs of _anonymous_namespace_::queryLockdownMode @ 0x1801912DC
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1800C3C10 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C4DE4 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     IsStartScreenFilterEnabled @ 0x1801913A8 (IsStartScreenFilterEnabled.c)
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     _anonymous_namespace_::isAdministrator @ 0x180190EC0 (_anonymous_namespace_--isAdministrator.c)
 *     _anonymous_namespace_::isAssignedAccessUser @ 0x180191014 (_anonymous_namespace_--isAssignedAccessUser.c)
 *     _anonymous_namespace_::isFeatureWmiRegistered @ 0x180191278 (_anonymous_namespace_--isFeatureWmiRegistered.c)
 */

__int64 anonymous_namespace_::queryLockdownMode()
{
  unsigned int v0; // ebx
  HANDLE CurrentProcess; // rax
  HANDLE v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  hObject = 0LL;
  v4 = 0;
  SHRegGetBOOL(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE", L"LaunchUserOOBE", &v4);
  if ( v4 )
  {
    v0 = 1;
    goto LABEL_6;
  }
  if ( hObject )
  {
    SetLastError(0x4DFu);
LABEL_5:
    v0 = 0;
    goto LABEL_6;
  }
  CurrentProcess = GetCurrentProcess();
  if ( !OpenProcessToken(CurrentProcess, 0x20028u, &hObject) )
    goto LABEL_5;
  v3 = hObject;
  if ( anonymous_namespace_::isAssignedAccessUser(hObject) )
  {
    v0 = 2;
  }
  else
  {
    if ( !anonymous_namespace_::isFeatureWmiRegistered() )
      goto LABEL_5;
    if ( anonymous_namespace_::isAdministrator(v3) )
      v0 = 4;
    else
      v0 = 3;
  }
LABEL_6:
  if ( hObject )
    CloseHandle(hObject);
  return v0;
}
