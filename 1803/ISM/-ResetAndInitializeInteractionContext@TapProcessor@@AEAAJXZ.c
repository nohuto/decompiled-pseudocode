/*
 * XREFs of ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800B6348
 * Callers:
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x1800B618C (-Initialize@TapProcessor@@IEAAJXZ.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B6540 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 *     ?OnPointerInfoFrame@TapProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800B6630 (-OnPointerInfoFrame@TapProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TapProcessor::ResetAndInitializeInteractionContext(TapProcessor *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  ResetInteractionContext(*((_QWORD *)this + 8));
  v2 = *((_QWORD *)this + 8);
  v9 = 2;
  v10 = 1;
  v3 = SetPropertyInteractionContext(v2, 3LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = SetPropertyInteractionContext(*((_QWORD *)this + 8), 2LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 8), 1LL, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = RegisterOutputCallbackInteractionContext(*((_QWORD *)this + 8), TapProcessor::s_InteractionOutputCallback, this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x1800B6434LL);
  }
  return 0LL;
}
