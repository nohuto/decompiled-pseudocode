/*
 * XREFs of ?RevertAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18004F650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?RevertOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18005333C (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18005333C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RevertAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _QWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  signed int v6; // edi
  __int64 v7; // rbx
  void *v8; // rax
  __int64 v9; // r8
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v11[2] = 0;
  v11[0] = 3;
  v11[1] = 130;
  v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
  if ( v4 )
  {
    *v4 = off_1800C6580;
    v4[1] = (char *)this - 56;
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
    v8 = operator new(0x150uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v8 )
      v7 = ((__int64 (__fastcall *)(void *, _DWORD *, const wchar_t *, __int64))Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>)(
             v8,
             v11,
             L"Windows.Foundation.IAsyncAction",
             1LL);
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
      *a2 = (struct Windows::Foundation::IAsyncAction *)((v9 + 184) & -(__int64)(v9 != 0));
    }
    if ( v5 )
      (**v5)(v5, 1LL);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 16LL))(v7 + 8);
  }
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x86,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
