/*
 * XREFs of ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18027346C
 * Callers:
 *     ??$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@AEBU3@AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVCWinRTAppIconLoader@@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@22AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180272E74 (--$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18018CAE4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96__&___ptr64_ @ 0x180272F48 (Windows--Internal--ComTaskPool--QueueTask__lambda_637b889d7309fa55c34979987552fc96__-___ptr64_.c)
 *     _lambda_637b889d7309fa55c34979987552fc96_::_lambda_637b889d7309fa55c34979987552fc96_ @ 0x1802730B4 (_lambda_637b889d7309fa55c34979987552fc96_--_lambda_637b889d7309fa55c34979987552fc96_.c)
 *     _lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_ @ 0x18027313C (_lambda_637b889d7309fa55c34979987552fc96_--__lambda_637b889d7309fa55c34979987552fc96_.c)
 */

__int64 __fastcall CWinRTAppIconLoader::RuntimeClassInitialize(
        CWinRTAppIconLoader *this,
        struct IWinRTApplicationView *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5,
        int a6,
        struct IApplicationViewIconLoaderNotifications *a7)
{
  int AgileReference; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  struct IWinRTApplicationView *v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16[7]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  CreationThreadDispatcher *v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  v18 = this;
  v15 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
  v19 = 0LL;
  AgileReference = RoGetAgileReference(1LL, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a7, &v19);
  v10 = AgileReference;
  if ( AgileReference >= 0 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)&v18);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(&v18);
    v10 = v11;
    if ( v11 >= 0 )
    {
      lambda_637b889d7309fa55c34979987552fc96_::_lambda_637b889d7309fa55c34979987552fc96_(
        (__int64)v16,
        &v15,
        a3,
        a4,
        a5,
        &a6,
        &v18,
        &v19);
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96______ptr64_(
              v12,
              (__int64)v16);
      v10 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
          (const char *)(unsigned int)v13);
      lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_(v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64C,
      (__int64)"internal\\sdk\\inc\\wil\\com.h",
      (const char *)(unsigned int)AgileReference);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)v10);
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v10;
}
