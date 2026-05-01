/*
 * XREFs of _anonymous_namespace_::queryLockdownMode @ 0x1801DEC80
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180180310 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1801DEA74 (IsUserAssignedAccessSingleApp.c)
 *     _anonymous_namespace_::isAdministrator @ 0x1801DEAC8 (_anonymous_namespace_--isAdministrator.c)
 *     _anonymous_namespace_::isFeatureWmiRegistered @ 0x1801DEC1C (_anonymous_namespace_--isFeatureWmiRegistered.c)
 */

__int64 anonymous_namespace_::queryLockdownMode()
{
  unsigned int v0; // ebx
  HANDLE CurrentProcess; // rax
  void *v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp+10h] BYREF

  TokenHandle = 0LL;
  v4 = 0;
  SHRegGetBOOL(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE", L"LaunchUserOOBE", &v4);
  if ( v4
    || (v4 = 0,
        SHRegGetBOOL(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\CFL\\ExperienceManagerData",
          L"LaunchCflScenario",
          &v4),
        v4) )
  {
    v0 = 1;
  }
  else
  {
    if ( TokenHandle )
    {
      SetLastError(0x4DFu);
LABEL_5:
      v0 = 0;
      goto LABEL_14;
    }
    CurrentProcess = GetCurrentProcess();
    if ( !OpenProcessToken(CurrentProcess, 0x20028u, &TokenHandle) )
      goto LABEL_5;
    v2 = TokenHandle;
    if ( IsUserAssignedAccessSingleApp(TokenHandle) )
    {
      v0 = 2;
    }
    else
    {
      if ( !anonymous_namespace_::isFeatureWmiRegistered() )
        goto LABEL_5;
      if ( anonymous_namespace_::isAdministrator(v2) )
        v0 = 4;
      else
        v0 = 3;
    }
  }
LABEL_14:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return v0;
}
