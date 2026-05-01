/*
 * XREFs of ?GetExperienceManager@PeopleTestExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B3038 (--$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Det.c)
 */

__int64 __fastcall PeopleTestExperienceManagerFactory::GetExperienceManager(
        PeopleTestExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IServiceProvider *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *a3 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CPeopleTestExperienceManager,IInspectable,IServiceProvider * &>(
         a3,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x68,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
