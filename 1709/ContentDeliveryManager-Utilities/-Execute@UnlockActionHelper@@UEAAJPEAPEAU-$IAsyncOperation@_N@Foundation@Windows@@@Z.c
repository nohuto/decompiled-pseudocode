/*
 * XREFs of ?Execute@UnlockActionHelper@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18006DB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEB_WW4TrustLevel@@@Z @ 0x180071134 (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnlockActionHelper::Execute(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  signed int v6; // ebp
  __int64 v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  _DWORD v11[4]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v12 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v13 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v11[0] = 3;
  v11[1] = 128;
  v11[2] = 0;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v5 )
  {
    *v5 = off_1800CB4E0;
    v5[1] = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5[2] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = 0LL;
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v7 = 0LL;
    v8 = operator new(0x158uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v8 )
      v7 = ((__int64 (__fastcall *)(void *, _DWORD *, const wchar_t *, __int64, __int64))Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>)(
             v8,
             v11,
             L"Windows.Foundation.IAsyncOperation`1<Boolean>",
             1LL,
             -2LL);
    v6 = v7 == 0 ? 0x8007000E : 0;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 272) = v5;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 104LL))(v7 + 8);
      v5 = 0LL;
    }
    if ( v6 >= 0 )
    {
      v9 = v7;
      v7 = 0LL;
      *a2 = (v9 + 184) & -(__int64)(v9 != 0);
    }
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 16LL))(v7 + 8);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v6;
}
