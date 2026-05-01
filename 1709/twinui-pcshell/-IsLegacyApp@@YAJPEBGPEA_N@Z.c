/*
 * XREFs of ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x18011AFF8
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801C1FB0 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsLegacyApp(CallerIdentity *a1, bool *a2, unsigned __int16 **a3)
{
  int PackageFullNameFromAppId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a1, (const unsigned __int16 *)pv, a3);
  v6 = PackageFullNameFromAppId;
  if ( PackageFullNameFromAppId < 0 )
  {
    v7 = 82LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PackageFullNameFromAppId);
    goto LABEL_7;
  }
  PackageFullNameFromAppId = QuirkIsEnabledForPackage(pv[0], a1, 1114112LL, &v11, -2LL);
  v6 = PackageFullNameFromAppId;
  if ( PackageFullNameFromAppId < 0 )
  {
    v7 = 90LL;
    goto LABEL_5;
  }
  *a2 = v11 != 0;
  v6 = 0;
LABEL_7:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v6;
}
