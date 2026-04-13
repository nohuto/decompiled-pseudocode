/*
 * XREFs of ?UnstageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180053D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@U?$AsyncCausalityOptions@$1?StageOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800557C0 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@U-$AsyncCausalityOptions@$1-Stage.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::UnstageAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v10[2] = 0;
  v10[0] = 3;
  v10[1] = 130;
  v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    *v4 = off_1800D43A8;
    v4[1] = (char *)this - 48;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = ((__int64 (__fastcall *)(_DWORD *, struct Windows::Foundation::IAsyncAction **, __int64, _QWORD *))Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>)(
         v10,
         a2,
         v5,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB5,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
