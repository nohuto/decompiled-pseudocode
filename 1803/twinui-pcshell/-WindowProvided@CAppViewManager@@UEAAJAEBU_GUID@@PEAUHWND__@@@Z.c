/*
 * XREFs of ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18000A168 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000FE20 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64_ @ 0x18009D148 (Microsoft--WRL--Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__-___ptr64_.c)
 *     ??1?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F90E8 (--1-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011DB9C (--1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x180122B84 (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180126888 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAppViewManager::WindowProvided(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  CAppViewManager *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  struct IAsyncCallback *v10; // [rsp+28h] [rbp-E0h] BYREF
  CAppViewManager *v11; // [rsp+30h] [rbp-D8h] BYREF
  CAppViewManager *v12; // [rsp+38h] [rbp-D0h] BYREF
  struct _GUID v13; // [rsp+40h] [rbp-C8h]
  HWND v14; // [rsp+50h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-B0h]
  _QWORD v16[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v15 = -2LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"WindowProvided");
  v16[0] = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  CAppViewManagerTelemetry::WindowProvided::StartActivity((CAppViewManagerTelemetry::WindowProvided *)v16, a2, a3);
  v6 = (CAppViewManager *)((char *)this - 56);
  if ( a3 )
  {
    v11 = v6;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
    v12 = v6;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
    v13 = *a2;
    v14 = a3;
    Microsoft::WRL::Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539______ptr64_(
      (__int64 *)&v10,
      (__int64)&v12);
    v8 = CAppViewManager::_AddDelayedOperation(v6, v10);
    v7 = v8;
    if ( v8 >= 0 )
    {
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16, 0);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v10);
      Microsoft::WRL::ComPtr<CAppViewManager>::~ComPtr<CAppViewManager>((__int64 *)&v12);
      Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)&v11);
      v7 = 0;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v10);
    Microsoft::WRL::ComPtr<CAppViewManager>::~ComPtr<CAppViewManager>((__int64 *)&v12);
    Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EA,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x80070057LL);
  }
  CAppViewManager::_ObliterateOperation(v6, a2);
LABEL_7:
  CAppViewManagerTelemetry::WindowProvided::~WindowProvided((CAppViewManagerTelemetry::WindowProvided *)v16);
  return v7;
}
