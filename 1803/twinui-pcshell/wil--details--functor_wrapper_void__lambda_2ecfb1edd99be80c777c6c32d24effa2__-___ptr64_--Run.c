/*
 * XREFs of wil::details::functor_wrapper_void__lambda_2ecfb1edd99be80c777c6c32d24effa2__&___ptr64_::Run @ 0x180089C90
 * Callers:
 *     ?Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z @ 0x180089C00 (-Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802C1490 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_2ecfb1edd99be80c777c6c32d24effa2______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  const WCHAR *v2; // rdi
  int LaunchPositionForPeoplePane; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = **(const WCHAR ***)v1;
  if ( CompareStringOrdinal(v2, -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) == 2
    || CompareStringOrdinal(v2, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) == 2 )
  {
    LaunchPositionForPeoplePane = CDesktopPositioner::_GetLaunchPositionForPeoplePane(
                                    *(CDesktopPositioner **)(v1 + 8),
                                    **(struct IApplicationView ***)(v1 + 16),
                                    **(struct IApplicationViewPosition ****)(v1 + 24));
    if ( LaunchPositionForPeoplePane < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x595,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)LaunchPositionForPeoplePane,
        bIgnoreCase);
  }
  return 0LL;
}
