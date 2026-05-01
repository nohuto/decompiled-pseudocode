/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fb00ab6edbf68260218bf5bc91a9d04___::Run @ 0x180259600
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fb00ab6edbf68260218bf5bc91a9d04___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ActivateApplicationForExperienceWithPropertySet(
         L"Microsoft.ECApp_8wekyb3d8bbwe!App",
         &word_18035ABCC,
         L"AccessibilityExperienceId",
         a4,
         1,
         0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x288,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
}
