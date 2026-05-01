/*
 * XREFs of ?_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ @ 0x18004D588
 * Callers:
 *     ?SimulateFrameManagerCrash@CApplicationFrameService@@UEAAXXZ @ 0x18004C450 (-SimulateFrameManagerCrash@CApplicationFrameService@@UEAAXXZ.c)
 *     CCrashDetector::CLambdaHandler__lambda_27283753ed325f6243441eb816a28818___::operator() @ 0x18004E7A0 (CCrashDetector--CLambdaHandler__lambda_27283753ed325f6243441eb816a28818___--operator().c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??0?$CCoSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAA@$$QEAV0@@Z @ 0x18004DD74 (--0-$CCoSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleAr.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationFrameService::_HandleFrameManagerCrash(CApplicationFrameService *this)
{
  _DWORD *i; // r15
  HRESULT v3; // r12d
  IUnknown *v4; // rbx
  __int64 *v5; // rax
  bool v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  LPVOID *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 j; // r14
  __int64 v13; // rcx
  unsigned __int64 k; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 m; // r14
  __int64 v21; // rcx
  _QWORD *v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 n; // r15
  __int64 v25; // rcx
  LPVOID pv; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-40h]
  LPVOID v28; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 CompareAddress; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF

  for ( i = (_DWORD *)((char *)this + 180); ; WaitOnAddress(i, &CompareAddress, 4uLL, 0xFFFFFFFF) )
  {
    LODWORD(CompareAddress) = *i;
    if ( (_DWORD)CompareAddress != 1 )
      break;
  }
  v3 = CoInitializeEx(0LL, 4u);
  if ( v3 >= 0 )
  {
    CompareAddress = 0LL;
    v4 = (IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this, &v31);
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&CompareAddress);
    v6 = IUnknown_QueryService(
           v4,
           (const GUID *const)&SID_AppCrusher,
           &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883,
           (void **)v5) >= 0;
    v7 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)CompareAddress + 24LL))(CompareAddress);
    v8 = CompareAddress;
    if ( CompareAddress )
    {
      CompareAddress = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 136LL))(*((_QWORD *)this + 19));
  v9 = *((_QWORD *)this + 20);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)this + 20));
  v10 = (LPVOID *)((char *)this + 120);
  CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>(
    &pv,
    (char *)this + 120);
  CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>(
    &v28,
    (char *)this + 120);
  v11 = *((_QWORD *)this + 20);
  if ( v11 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_DWORD *)this + 44) = 0;
  if ( *v10 )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 16); ++j )
    {
      v13 = *((_QWORD *)*v10 + j);
      if ( v13 )
      {
        *((_QWORD *)*v10 + j) = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v13);
      }
    }
    CoTaskMemFree(*v10);
    *v10 = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    for ( k = 0LL; k < *((_QWORD *)this + 12); ++k )
    {
      v15 = *((_QWORD *)this + 11);
      v16 = *(_QWORD *)(v15 + 8 * k);
      if ( v16 )
      {
        *(_QWORD *)(v15 + 8 * k) = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v16);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *i = 0;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = *((_QWORD *)this + 20);
  if ( v17 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = pv;
  if ( pv )
  {
    v19 = 0LL;
    for ( m = v27; v19 < m; ++v19 )
    {
      v21 = v18[v19];
      if ( v21 )
      {
        v18[v19] = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v21);
      }
    }
    CoTaskMemFree(v18);
    v18 = 0LL;
  }
  v22 = v28;
  if ( v28 )
  {
    v23 = 0LL;
    for ( n = v29; v23 < n; ++v23 )
    {
      v25 = v22[v23];
      if ( v25 )
      {
        v22[v23] = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v25);
      }
    }
    CoTaskMemFree(v22);
    v22 = 0LL;
  }
  if ( v3 >= 0 )
    CoUninitialize();
  if ( v22 )
    CoTaskMemFree(v22);
  if ( v18 )
    CoTaskMemFree(v18);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
