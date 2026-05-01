/*
 * XREFs of ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801C26C4
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1801C27E4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C23E4 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C2594 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___ @ 0x1801C2A90 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd.c)
 */

bool __fastcall CallerIdentity::ApiPolicyChecker::DoesAppMeetLaunchRequirement(
        int a1,
        WCHAR *a2,
        unsigned __int16 **a3)
{
  bool v3; // bl
  HWND Window; // rsi
  int v6; // ecx
  int v7; // ecx
  LPCWCH lpString2[4]; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+70h] [rbp+20h] BYREF
  int *v11; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  Window = (HWND)a3;
  if ( !a1 )
    goto LABEL_15;
  v6 = a1 - 1;
  if ( !v6
    || ((v7 = v6 - 1) == 0
     || v7 == 1
     && (v10 = 0,
         v11 = &v10,
         CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___(
           a2,
           &v11),
         v3 = v10 != 0,
         !v10))
    && (CallerIdentity::ApiPolicyChecker::IsApplicationInteractive(
          (struct IUnknown *)a2,
          (unsigned __int16 *)&v10,
          (struct IObjectArray **)a3),
        v3 = v10 != 0,
        !v10) )
  {
    if ( !v3 )
    {
      do
      {
        if ( !Window )
          break;
        lpString2[0] = 0LL;
        lpString2[1] = (LPCWCH)-1LL;
        lpString2[2] = (LPCWCH)-1LL;
        if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(Window, (LPWSTR *)lpString2, a3) >= 0 )
          v3 = CompareStringOrdinal(a2, -1, lpString2[0], -1, 1) == 2;
        Window = GetWindow(Window, 4u);
        if ( lpString2[0] )
          CoTaskMemFree((LPVOID)lpString2[0]);
      }
      while ( !v3 );
      if ( !v3 )
      {
LABEL_15:
        CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
          (CallerIdentity::ApiPolicyChecker *)a2,
          (unsigned __int16 *)&v10,
          (int *)a3);
        return v10 != 0;
      }
    }
  }
  return v3;
}
