/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___ @ 0x18026A714
 * Callers:
 *     ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18026AD70 (-ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___::CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___ @ 0x18026A7C4 (CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___--CMultitaskingViewTask.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a_(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___::CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___(
           v5,
           a2);
  v7 = v6 + 32;
  if ( !v6 )
    v7 = 0LL;
  v10 = v7;
  if ( v7 )
  {
    v10 = 0LL;
    *a1 = v7;
  }
  else
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"internal\\shell\\private\\inc\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v2;
}
