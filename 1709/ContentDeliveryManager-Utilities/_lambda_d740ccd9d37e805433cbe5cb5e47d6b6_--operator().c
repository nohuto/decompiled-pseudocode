/*
 * XREFs of _lambda_d740ccd9d37e805433cbe5cb5e47d6b6_::operator() @ 0x18006DDD4
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d740ccd9d37e805433cbe5cb5e47d6b6____Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x18006F850 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_d740ccd9d37e805.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B9E4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x18006C0FC (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d740ccd9d37e805433cbe5cb5e47d6b6_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  int v4; // eax
  DWORD v5; // edx
  int v6; // r8d
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  try
  {
    v4 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(*a1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v4);
    v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(0LL, v5, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x630,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x50,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      v8);
    v3 = a1;
    v2 = a2;
  }
  *(_BYTE *)(v2 + 16) = 1;
  v9 = v3[1];
  v3[1] = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
