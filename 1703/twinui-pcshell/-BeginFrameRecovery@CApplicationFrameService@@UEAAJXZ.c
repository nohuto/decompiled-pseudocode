/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004CF68 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@PEA_K@Z @ 0x18004DC40 (-Add@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEBQEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18004E218 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x18004E8DC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801757E4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationFrameService::BeginFrameRecovery(CApplicationFrameService *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  bool v4; // al
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  unsigned int i; // esi
  unsigned __int16 **v9; // r8
  signed int ImmersiveAppIdFromWindow; // edi
  int v11; // eax
  __int64 v12; // rcx
  HWND PropW; // rax
  IUnknown **v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-21h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h] BYREF
  __int64 v24; // [rsp+60h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+70h] [rbp-1h] BYREF
  char *v27; // [rsp+78h] [rbp+7h] BYREF
  LPVOID pv[9]; // [rsp+80h] [rbp+Fh] BYREF
  int v29; // [rsp+E0h] [rbp+6Fh] BYREF
  unsigned int v30; // [rsp+E8h] [rbp+77h] BYREF
  HWND v31; // [rsp+F0h] [rbp+7Fh] BYREF

  pv[3] = (LPVOID)-2LL;
  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v23 = 0LL;
    v29 = CApplicationFrameService::_EnsureFrameManager((char *)this - 32, 0LL, &v23);
    v4 = CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v29,
           L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
           (const unsigned __int16 *)0x225,
           v3);
    v5 = v23;
    if ( v4 )
    {
      v21 = 0LL;
      v29 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 40LL))(v23, &v21);
      if ( CRVPrivate::VerifyCriticalResult(
             (unsigned __int64)&v29,
             L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
             (const unsigned __int16 *)0x235,
             v6) )
      {
        v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v30);
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&v29,
               L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
               (const unsigned __int16 *)0x239,
               v7) )
        {
          for ( i = 0; i < v30; ++i )
          {
            v19 = 0LL;
            if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 32LL))(
                   v21,
                   i,
                   &GUID_143715d9_a015_40ea_b695_d5cc267e36ee,
                   &v19) >= 0 )
            {
              if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v19 + 24LL))(v19, &hWnd) < 0 )
                goto LABEL_23;
              pv[0] = 0LL;
              pv[1] = (LPVOID)-1LL;
              pv[2] = (LPVOID)-1LL;
              ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, (HWND)pv, v9);
              if ( ImmersiveAppIdFromWindow >= 0 )
              {
                LODWORD(v31) = (unsigned int)GetPropW(hWnd, L"LastSetGlomIdForReconstitution");
                v20 = 0LL;
                v25 = v19;
                v26 = v5;
                v27 = (char *)this - 32;
                ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService * const,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                             (unsigned int)&v20,
                                             (unsigned int)&v27,
                                             (unsigned int)&v26,
                                             (unsigned int)&v25,
                                             (__int64)pv,
                                             (__int64)&v31);
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                  v11 = -(int)SHIsSameObject(
                                *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 16),
                                *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v20 + 88));
                  ImmersiveAppIdFromWindow = v11 == 0 ? 0x80070057 : 0;
                  if ( v11 )
                    ImmersiveAppIdFromWindow = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::Add(
                                                 (char *)this + 56,
                                                 &v20);
                  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                }
                v12 = v20;
                if ( v20 )
                {
                  v20 = 0LL;
                  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
                }
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  PropW = (HWND)GetPropW(hWnd, L"ModalExperienceWindowProp");
                  if ( PropW )
                  {
                    if ( !IsWindow(PropW) )
                    {
                      v31 = hWnd;
                      v14 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
                                           &v24,
                                           &v31);
                      Windows::Internal::ComTaskPool::RunTask(3, 0, 0, 0, *v14, 0LL);
                      v15 = v24;
                      if ( v24 )
                      {
                        v24 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                      }
                    }
                  }
                }
              }
              if ( pv[0] )
                CoTaskMemFree(pv[0]);
              if ( ImmersiveAppIdFromWindow < 0 )
LABEL_23:
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v19);
            }
            v16 = v19;
            if ( v19 )
            {
              v19 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
          }
        }
      }
      v17 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    v2 = v29;
    if ( v29 >= 0 )
      *((_BYTE *)this + 176) = 1;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}
