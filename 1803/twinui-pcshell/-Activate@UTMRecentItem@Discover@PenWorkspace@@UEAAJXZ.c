/*
 * XREFs of ?Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ @ 0x1801995F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180190CB0 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::Activate(PenWorkspace::Discover::UTMRecentItem *this)
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // edx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v1 = *((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 120LL))(v1, &v9);
  v5 = v2;
  if ( v2 >= 0 )
  {
    v2 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
           v9,
           v3,
           v4);
    v5 = v2;
    if ( v2 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 118LL;
  }
  else
  {
    v6 = 116LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v5;
}
