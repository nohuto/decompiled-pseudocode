/*
 * XREFs of ?OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800AE6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801DBD20 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnApplicationActivatedForLaunch(
        struct IUnknown *this,
        struct CSingleViewShellExperience *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(0LL, this - 8, (void *)0x401, a3, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
