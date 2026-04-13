/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18006DEF8
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18006E660 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18006D628 (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18006D718 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18006E404 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006EFCC (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006F920 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(UniqueExtendedExecutionSession *this)
{
  HRESULT v2; // eax
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  HRESULT v10; // eax
  _DWORD *v11; // rbx
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  __int64 v19; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C8h]
  _BYTE v23[24]; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-90h] BYREF
  HSTRING string; // [rsp+90h] [rbp-78h] BYREF
  HSTRING_HEADER v28; // [rsp+98h] [rbp-70h] BYREF
  HSTRING v29; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v30[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v31; // [rsp+D8h] [rbp-30h]
  int *v32; // [rsp+E0h] [rbp-28h]
  int *v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F0h] [rbp-18h] BYREF
  char v35; // [rsp+F4h] [rbp-14h]
  int v36; // [rsp+118h] [rbp+10h] BYREF
  const char *v37; // [rsp+120h] [rbp+18h]
  __int64 v38; // [rsp+128h] [rbp+20h]
  char v39; // [rsp+130h] [rbp+28h]
  __int64 v40; // [rsp+138h] [rbp+30h]
  _BYTE v41[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v42; // [rsp+1D0h] [rbp+C8h]
  __int64 v43; // [rsp+1D8h] [rbp+D0h]
  __int64 v44; // [rsp+1E0h] [rbp+D8h]
  __int64 v45; // [rsp+1E8h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v24 = -2LL;
  v30[1] = 0LL;
  v30[2] = v30;
  v30[3] = 0LL;
  v31 = 0;
  v32 = &v36;
  v33 = &v34;
  v34 = 0;
  v35 = 0;
  v39 = 0;
  v36 = 0;
  v37 = "ExtendedExecutionRequested";
  v38 = 0LL;
  v40 = 1LL;
  v42 = 0LL;
  v43 = 0LL;
  memset_0(v41, 0, sizeof(v41));
  v44 = 0LL;
  v45 = 0LL;
  v30[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v30);
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
         0x43u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v3 = (_QWORD *)((char *)this + 72);
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *v3 = 0LL;
  v5 = RoActivateInstance(string, &v20);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v3 = v20;
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v20)(
             v20,
             &GUID_af908a2d_118b_48f1_9308_0c4fc41e200f,
             (char *)this + 72);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  string = 0LL;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 126LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)v6);
    goto LABEL_39;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 56LL))(*v3, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 127LL;
LABEL_18:
    v6 = (unsigned int)v8;
    goto LABEL_19;
  }
  v9 = *v3;
  v29 = 0LL;
  v10 = WindowsCreateStringReference(L"UnlockActionHelper", 0x12u, &v28, &v29);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v9 + 72LL))(v9, v29);
  v5 = v8;
  v29 = 0LL;
  if ( v8 < 0 )
  {
    v7 = 128LL;
    goto LABEL_18;
  }
  *(_QWORD *)&v22 = UniqueExtendedExecutionSession::OnSessionRevoked;
  DWORD2(v22) = 0;
  *(_QWORD *)v23 = this;
  *(_OWORD *)&v23[8] = v22;
  v11 = 0LL;
  v25 = 0LL;
  v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v12 )
  {
    *(_QWORD *)v12 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    v12[3] = 1;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_OWORD *)v12 + 1) = *(_OWORD *)v23;
    *((_QWORD *)v12 + 4) = *(_QWORD *)&v23[16];
    *(_QWORD *)v12 = off_1800CB3F0;
    v11 = v12;
  }
  *(_QWORD *)&v22 = v11;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(*(_QWORD *)*v3 + 96LL))(*v3, v11, (char *)this + 80);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v14 = *v3;
    v21 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 112LL))(v14, &v21);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v16 = v21;
      v17 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(v21);
      if ( v17 >= 0 )
        v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, &v19);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x638,
          (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      if ( (_DWORD)v19 )
      {
        UniqueExtendedExecutionSession::CloseSession(this, 0);
        v5 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)0x8000FFFFLL);
      }
      else
      {
        wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v30);
        v5 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x86,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v15);
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v13);
  }
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_39:
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v30);
  return (unsigned int)v5;
}
