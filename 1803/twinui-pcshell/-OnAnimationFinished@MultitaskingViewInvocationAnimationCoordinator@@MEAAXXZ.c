/*
 * XREFs of ?OnAnimationFinished@MultitaskingViewInvocationAnimationCoordinator@@MEAAXXZ @ 0x180297370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewInvocationAnimationCoordinator::OnAnimationFinished(
        MultitaskingViewInvocationAnimationCoordinator *this)
{
  __int64 v1; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 7);
  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 24LL))(
         v1,
         &GUID_5b292bfd_6752_499b_bff1_cd8805578b96,
         &v5);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(__int64, MultitaskingViewInvocationAnimationCoordinator *))(*(_QWORD *)v5 + 24LL))(v5, this);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      24LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
