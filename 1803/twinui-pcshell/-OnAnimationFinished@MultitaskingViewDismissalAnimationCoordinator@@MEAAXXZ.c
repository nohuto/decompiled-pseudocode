/*
 * XREFs of ?OnAnimationFinished@MultitaskingViewDismissalAnimationCoordinator@@MEAAXXZ @ 0x180299960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewDismissalAnimationCoordinator::OnAnimationFinished(
        MultitaskingViewDismissalAnimationCoordinator *this)
{
  __int64 v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( !*((_BYTE *)this + 192) )
  {
    v2 = *((_QWORD *)this + 7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &GUID_44165396_6e38_431d_b682_2ac4077f5b3a,
           &v5);
    if ( v3 >= 0 )
      (*(void (__fastcall **)(__int64, MultitaskingViewDismissalAnimationCoordinator *))(*(_QWORD *)v5 + 24LL))(
        v5,
        this);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        37LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
        (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
