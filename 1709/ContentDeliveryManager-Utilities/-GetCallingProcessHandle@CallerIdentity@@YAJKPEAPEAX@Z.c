/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180054BA8
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x1800070A4 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800547D8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180054870 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180054BE0 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(CallerIdentity *this, __int64 a2, void **a3)
{
  int CallingProcessHandle; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, a2);
  v4 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
  return v4;
}
