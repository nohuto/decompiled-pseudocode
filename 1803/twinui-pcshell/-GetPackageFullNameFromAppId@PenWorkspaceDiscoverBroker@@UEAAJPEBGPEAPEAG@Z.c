/*
 * XREFs of ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1801925D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1802FD7E4 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1802FD8FC (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::GetPackageFullNameFromAppId(
        PenWorkspaceDiscoverBroker *this,
        CallerIdentity *a2,
        unsigned __int16 **a3)
{
  int IsShellExperience; // ebx
  unsigned __int16 **v6; // r8
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  if ( IsShellExperience < 0 )
  {
    v7 = 160LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return (unsigned int)IsShellExperience;
  }
  IsShellExperience = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)a3, v6);
  if ( IsShellExperience < 0 )
  {
    v7 = 161LL;
    goto LABEL_3;
  }
  return 0LL;
}
