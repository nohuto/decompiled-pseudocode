/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180141890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x1800927CC (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___ @ 0x1801411D8 (ShellPositionerHelpers--PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetPosition(CWinRTApplicationView *this, const struct _GUID *a2, void **a3)
{
  volatile int *v6; // rdx
  int v7; // ebx
  CWinRTApplicationView *v9; // [rsp+28h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  void **v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  IUnknown *punk; // [rsp+70h] [rbp+20h] BYREF
  volatile int *v14; // [rsp+78h] [rbp+28h] BYREF
  IUnknown **p_punk; // [rsp+80h] [rbp+30h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v14);
  v6 = v14;
  if ( v14 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()((__int64 **)&p_punk, (__int64)v14);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease((__int64 *)&v14, v6);
  v9 = this;
  v10 = (__int128)*a2;
  v11 = a3;
  v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___(
         punk,
         (__int64)this,
         &v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEF,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
