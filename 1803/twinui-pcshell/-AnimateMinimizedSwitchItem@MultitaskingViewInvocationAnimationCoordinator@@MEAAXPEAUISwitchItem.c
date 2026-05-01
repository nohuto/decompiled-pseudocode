/*
 * XREFs of ?AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180297120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x1802EFFC4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d0.c)
 */

void __fastcall MultitaskingViewInvocationAnimationCoordinator::AnimateMinimizedSwitchItem(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v14 = 0LL;
  DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
    v7,
    v6,
    a3,
    &v14);
  if ( !*((_QWORD *)this + 12) )
  {
    v9 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(
           a2,
           0LL,
           v8,
           0LL,
           v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        38LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        39LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
        (const char *)(unsigned int)v10);
  }
  v11 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
          a2,
          0LL,
          10LL,
          v14);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      42LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v11);
  v12 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
          a2,
          1LL,
          11LL,
          v14);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      43LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
}
