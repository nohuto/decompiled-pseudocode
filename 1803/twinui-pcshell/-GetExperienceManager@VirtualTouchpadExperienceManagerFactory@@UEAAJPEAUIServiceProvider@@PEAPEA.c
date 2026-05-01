/*
 * XREFs of ?GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180181580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18017FFF0 (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 */

__int64 __fastcall VirtualTouchpadExperienceManagerFactory::GetExperienceManager(
        VirtualTouchpadExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v4; // eax
  int v5; // ebx
  struct IInspectable *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v9; // [rsp+38h] [rbp+10h] BYREF
  struct IServiceProvider *v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v10 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v9);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualTouchpadExperienceManager,IInspectable,IServiceProvider * &>(
         (CVirtualTouchpadExperienceManager **)&v9,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    v9 = 0LL;
    v5 = 0;
    *a3 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v9);
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x322,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
