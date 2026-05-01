/*
 * XREFs of wil::details::functor_wrapper_void__lambda_7fa12ae4b5291e6def74b412714f670d__&___ptr64_::Run @ 0x180085470
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18001E8B0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_7fa12ae4b5291e6def74b412714f670d______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  HRESULT v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = CWRLObjectWithGITSite::SetSite(*(RTL_SRWLOCK **)v1, **(struct IUnknown ***)(v1 + 8));
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = IUnknown_SetSite(*(IUnknown **)(*(_QWORD *)v1 + 136LL), **(IUnknown ***)(v1 + 8));
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800854E3LL);
  }
  return 0LL;
}
