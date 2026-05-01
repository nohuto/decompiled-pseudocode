/*
 * XREFs of ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x18003EF80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x18003F41C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18004113C (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??$Start@AEAU_GUID@@AEAPEAUHWND__@@@WindowProvided@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@AEAPEAUHWND__@@@Z @ 0x180044364 (--$Start@AEAU_GUID@@AEAPEAUHWND__@@@WindowProvided@CAppViewManagerTelemetry@@SA-AV01@AEAU_GUID@@.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__&___ptr64_ @ 0x180044430 (Microsoft--WRL--Callback_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__-___ptr64_.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::WindowProvided(CAppViewManager *this, struct _GUID *a2, struct IAsyncCallback *a3)
{
  CAppViewManager *v6; // rbx
  unsigned int v7; // esi
  struct IAsyncCallback *v8; // rdi
  int v9; // eax
  struct IAsyncCallback *v11; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-D8h] BYREF
  CAppViewManager *v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-B0h]
  CAppViewManager *v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _GUID v17; // [rsp+68h] [rbp-A0h]
  struct IAsyncCallback *v18; // [rsp+78h] [rbp-90h]
  _QWORD v19[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v15 = -2LL;
  v11 = a3;
  CAppViewManagerTelemetry::WindowProvided::Start<_GUID &,HWND__ * &>(
    (CAppViewManagerTelemetry::WindowProvided *)v19,
    a2);
  v6 = (CAppViewManager *)((char *)this - 48);
  v12[0] = v6;
  v12[1] = a2;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___(v13, v12);
  if ( a3 )
  {
    v12[0] = v6;
    if ( v6 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v6 + 8LL))(v6);
    v16 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v6 + 8LL))(v6);
    v17 = *a2;
    v18 = a3;
    Microsoft::WRL::Callback_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529______ptr64_(&v11, &v16);
    v8 = v11;
    v9 = CAppViewManager::_AddDelayedOperation(v6, v11);
    v7 = v9;
    if ( v9 >= 0 )
    {
      LOBYTE(v14) = 0;
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, 0);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x433,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v6 )
    {
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x424,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x80070057LL);
  }
  if ( (_BYTE)v14 )
    CAppViewManager::_ObliterateOperation(v13[0], (const struct _GUID *)v13[1]);
  v19[0] = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return v7;
}
