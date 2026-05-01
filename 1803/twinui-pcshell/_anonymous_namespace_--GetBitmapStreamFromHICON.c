/*
 * XREFs of _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1802654E0
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180265E54 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWICBitmapSource@@@?$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A234C (--$query@UIWICBitmapSource@@@-$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180193C6C (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall anonymous_namespace_::GetBitmapStreamFromHICON(__int64 *a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // eax
  struct IWICBitmapSource **v6; // rax
  int StreamOfWICBitmapSourceWithOptions; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v15; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  LPVOID ppv; // [rsp+80h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+28h] BYREF

  v14[1] = -2LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      26LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 176LL))(ppv, a2, &v12);
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v6 = (struct IWICBitmapSource **)wil::com_ptr_t<IWICBitmap,wil::err_exception_policy>::query<IWICBitmapSource>(
                                       &v12,
                                       (__int64)v14);
    v13 = 0LL;
    v15 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           *v6,
                                           (__int64)&GUID_ContainerFormatPng,
                                           &v15,
                                           0,
                                           &v13);
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        33LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
    if ( v14[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
    v18 = 0LL;
    v8 = v13;
    v9 = CreateRandomAccessStreamOverStream(v13, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v18);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        36LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = v18;
    v18 = 0LL;
    *a1 = v10;
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v18);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      30LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v5);
    *a1 = 0LL;
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
