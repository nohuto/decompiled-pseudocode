/*
 * XREFs of ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1800E3A80 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1800E3D00 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1800E3DE0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1800E4590 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1800E47B0 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800EDD2C (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1801C1C7C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1801C1EA8 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1801C3158 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     CoTaskMemFree_0 @ 0x1801E31C1 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::EnsureCallingProcessIsShellExperience(CallerIdentity *this, __int64 a2, bool *a3)
{
  unsigned __int16 **v4; // rdx
  const unsigned __int16 *v5; // rdx
  signed int CallingProcessAppId; // ebx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  if ( CallerIdentity::CheckCallerCapability(this, (const unsigned __int16 *)&pv, a3) >= 0 && (_BYTE)pv )
    return 0LL;
  pv = 0LL;
  CoTaskMemFree_0(0LL);
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&pv, v4);
  if ( CallingProcessAppId >= 0 )
    CallingProcessAppId = !CallerIdentity::IsShellExperienceAppId((LPCWCH)pv, v5) ? 0x80070005 : 0;
  CoTaskMemFree_0(pv);
  return (unsigned int)CallingProcessAppId;
}
