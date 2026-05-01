/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180141474
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180141B80 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x18013E2C0 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  volatile int *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ebx
  int v10; // eax
  volatile int *v12; // [rsp+30h] [rbp-20h] BYREF
  int v13[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v14[1] = (__int64 *)-2LL;
  v16 = 0LL;
  v14[0] = &v16;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v12);
  v6 = v12;
  if ( v12 )
    lambda_93f12587be75daec396af0a75fadd596_::operator()(v14, (__int64)v12);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease((__int64 *)&v12, v6);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, int *))(*(_QWORD *)v16 + 40LL))(
         v16,
         *a2,
         a3,
         this,
         v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = MulDiv(a2->cx, a3, 96);
    v10 = MulDiv(a2->cy, a3, 96);
    LODWORD(v12) = v13[0] + a2->cx - v9;
    HIDWORD(v12) = a2->cy + v13[1] - v10;
    *a2 = (struct tagSIZE)v12;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v8;
}
