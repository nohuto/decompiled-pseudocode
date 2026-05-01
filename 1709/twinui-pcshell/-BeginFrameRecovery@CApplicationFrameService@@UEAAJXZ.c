/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004F518 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@PEA_K@Z @ 0x1800503A4 (-Add@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1800508D8 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationFrameService::BeginFrameRecovery(CApplicationFrameService *this)
{
  unsigned int v2; // edi
  char *v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  unsigned int i; // r12d
  unsigned __int16 **v9; // r8
  signed int ImmersiveAppIdFromWindow; // r15d
  int v11; // eax
  volatile signed __int32 *v12; // rcx
  HWND v13; // rax
  HWND v14; // r14
  IUnknown *v15; // rdi
  IUnknown *v16; // rax
  IUnknown *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-59h] BYREF
  __int64 v22; // [rsp+40h] [rbp-51h] BYREF
  __int64 v23; // [rsp+48h] [rbp-49h] BYREF
  __int64 v24; // [rsp+50h] [rbp-41h] BYREF
  HWND hWnd[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v26; // [rsp+68h] [rbp-29h] BYREF
  __int64 v27; // [rsp+70h] [rbp-21h] BYREF
  char *v28; // [rsp+78h] [rbp-19h] BYREF
  IUnknown *v29; // [rsp+80h] [rbp-11h]
  IUnknown *v30; // [rsp+88h] [rbp-9h]
  LPVOID pv[11]; // [rsp+90h] [rbp-1h] BYREF
  int v32; // [rsp+100h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+108h] [rbp+77h] BYREF
  unsigned int PropW; // [rsp+110h] [rbp+7Fh] BYREF

  pv[3] = (LPVOID)-2LL;
  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v24 = 0LL;
    v3 = (char *)this - 40;
    v32 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 0LL, &v24);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v32,
           L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
           (const unsigned __int16 *)0x225,
           v4) )
    {
      v23 = 0LL;
      v5 = v24;
      v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 40LL))(v24, &v23);
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&v32,
             L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
             (const unsigned __int16 *)0x235,
             v6) )
      {
        v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v33);
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&v32,
               L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
               (const unsigned __int16 *)0x239,
               v7) )
        {
          for ( i = 0; i < v33; ++i )
          {
            v21 = 0LL;
            if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v23 + 32LL))(
                   v23,
                   i,
                   &GUID_143715d9_a015_40ea_b695_d5cc267e36ee,
                   &v21) >= 0 )
            {
              if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v21 + 24LL))(v21, hWnd) < 0 )
                goto LABEL_31;
              pv[0] = 0LL;
              pv[1] = (LPVOID)-1LL;
              pv[2] = (LPVOID)-1LL;
              ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd[0], (HWND)pv, v9);
              if ( ImmersiveAppIdFromWindow >= 0 )
              {
                PropW = (unsigned int)GetPropW(hWnd[0], L"LastSetGlomIdForReconstitution");
                v22 = 0LL;
                v26 = v21;
                v27 = v5;
                v28 = v3;
                ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                             (unsigned int)&v22,
                                             (unsigned int)&v28,
                                             (unsigned int)&v27,
                                             (unsigned int)&v26,
                                             (__int64)pv,
                                             (__int64)&PropW);
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                  v11 = SHIsSameObject(
                          *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18),
                          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v22 + 104));
                  ImmersiveAppIdFromWindow = v11 == 0 ? 0x80070057 : 0;
                  if ( v11 )
                    ImmersiveAppIdFromWindow = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::Add(
                                                 (char *)this + 72,
                                                 &v22);
                  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                }
                v12 = (volatile signed __int32 *)v22;
                if ( v22 )
                {
                  v22 = 0LL;
                  if ( _InterlockedExchangeAdd(v12 + 13, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 256LL))(v12, 1LL);
                    if ( Microsoft::WRL::Details::ModuleBase::module_ )
                      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                  }
                  v5 = v24;
                }
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  v13 = (HWND)GetPropW(hWnd[0], L"ModalExperienceWindowProp");
                  if ( v13 )
                  {
                    if ( !IsWindow(v13) )
                    {
                      v14 = hWnd[0];
                      v15 = 0LL;
                      v29 = 0LL;
                      v16 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
                      v17 = v16;
                      if ( v16 )
                      {
                        v16->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
                        HIDWORD(v16[1].lpVtbl) = 1;
                        v16->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
                        if ( Microsoft::WRL::Details::ModuleBase::module_ )
                          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                        v17->lpVtbl = (struct IUnknownVtbl *)off_1801FCD88;
                        v17[2].lpVtbl = (struct IUnknownVtbl *)v14;
                        v15 = v17;
                        v29 = v17;
                      }
                      v30 = v15;
                      Windows::Internal::ComTaskPool::RunTask(3, 0, 0, 0, v15, 0LL);
                      if ( v15 )
                      {
                        v30 = 0LL;
                        ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
                      }
                      v3 = (char *)this - 40;
                    }
                  }
                }
              }
              if ( pv[0] )
                CoTaskMemFree(pv[0]);
              if ( ImmersiveAppIdFromWindow < 0 )
LABEL_31:
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v21);
            }
            v18 = v21;
            if ( v21 )
            {
              v21 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
        }
      }
      v19 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      v5 = v24;
    }
    v2 = v32;
    if ( v32 >= 0 )
      *((_BYTE *)this + 192) = 1;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}
