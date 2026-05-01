/*
 * XREFs of ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180176CAC
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800D7154 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1801763E0 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x180176B8C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___ @ 0x180176FB4 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b2.c)
 *     IsGetThreadDesktopPresent @ 0x18019727C (IsGetThreadDesktopPresent.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
        WCHAR *lpString2,
        const unsigned __int16 *a2)
{
  HWND ForegroundWindow; // rax
  const unsigned __int16 *v4; // rdx
  unsigned __int16 **v5; // r14
  int v6; // edi
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  BOOL UserObjectInformationW; // eax
  bool DoesAppMeetLaunchRequirement; // al
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  BOOL pvInfo; // [rsp+68h] [rbp+28h] BYREF
  int v14; // [rsp+70h] [rbp+30h] BYREF

  v14 = 0;
  ForegroundWindow = GetForegroundWindow();
  v5 = (unsigned __int16 **)ForegroundWindow;
  if ( ForegroundWindow )
    GetWindowBand(ForegroundWindow, &v14);
  if ( v14 > 13 )
  {
    if ( v14 == 14 || v14 != 15 && (v14 == 16 || (unsigned int)(v14 - 17) > 1) )
    {
LABEL_23:
      v6 = 0;
      goto LABEL_24;
    }
LABEL_22:
    v6 = 2;
    goto LABEL_24;
  }
  if ( v14 >= 12 )
    goto LABEL_22;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
LABEL_10:
      v6 = 1;
      goto LABEL_24;
    }
    if ( v14 <= 1 )
      goto LABEL_23;
    if ( v14 > 4 )
    {
      if ( v14 == 8 )
        goto LABEL_10;
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  pvInfo = 0;
  if ( (unsigned __int8)IsGetThreadDesktopPresent() && (unsigned __int8)IsGetThreadDesktopPresent() )
  {
    CurrentThreadId = GetCurrentThreadId();
    ThreadDesktop = GetThreadDesktop(CurrentThreadId);
    if ( !ThreadDesktop || (UserObjectInformationW = GetUserObjectInformationW(ThreadDesktop, 6, &pvInfo, 4u, 0LL)) )
      UserObjectInformationW = pvInfo;
  }
  else
  {
    UserObjectInformationW = 1;
  }
  v6 = UserObjectInformationW ? 2 : 0;
LABEL_24:
  if ( CallerIdentity::IsShellExperienceAppId(lpString2, v4) )
    v6 = 1;
  DoesAppMeetLaunchRequirement = CallerIdentity::ApiPolicyChecker::DoesAppMeetLaunchRequirement(v6, lpString2, v5);
  if ( DoesAppMeetLaunchRequirement )
  {
    LOBYTE(pvInfo) = 0;
    v12[1] = &pvInfo;
    v12[0] = lpString2;
    CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___(
      lpString2,
      v12);
    DoesAppMeetLaunchRequirement = !pvInfo;
  }
  return !DoesAppMeetLaunchRequirement ? 0x80070005 : 0;
}
