/*
 * XREFs of ?Execute@UnlockActionHelper@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180078020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEB_WW4TrustLevel@@@Z @ 0x18007B6EC (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnlockActionHelper::Execute(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  signed int v6; // esi
  void *v7; // rax
  __int64 v8; // rbp
  _DWORD v10[4]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v11 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v12 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v10[0] = 3;
  v10[1] = 128;
  v10[2] = 0;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = off_1800DA5F8;
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
    v7 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = 0LL;
    if ( v7 )
      v8 = ((__int64 (__fastcall *)(void *, _DWORD *, const wchar_t *, __int64, __int64))Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>)(
             v7,
             v10,
             L"Windows.Foundation.IAsyncOperation`1<Boolean>",
             1LL,
             -2LL);
    v6 = v8 == 0 ? 0x8007000E : 0;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 256) = v5;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
      v5 = 0LL;
    }
    if ( v6 >= 0 )
    {
      *a2 = (v8 + 176) & -(__int64)(v8 != 0);
      v8 = 0LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
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
