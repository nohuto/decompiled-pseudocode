/*
 * XREFs of ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801735C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180172A98 (--$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@.c)
 */

__int64 __fastcall StartExperienceManagerFactory::GetExperienceManager(
        StartExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IServiceProvider *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *a3 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CStartExperienceManager,IInspectable,IServiceProvider * &>(
         (CStartExperienceManager **)a3,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x459,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
