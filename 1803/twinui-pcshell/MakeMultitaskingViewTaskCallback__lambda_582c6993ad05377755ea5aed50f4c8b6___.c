/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___ @ 0x18026F66C
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1802701A0 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___::CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___ @ 0x18026F71C (CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___--CMultitaskingViewTask.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6_(__int64 *a1, __int64 a2)
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
    v6 = CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___::CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___(
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
