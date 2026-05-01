/*
 * XREFs of ?SetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SUPPRESSIBLE_BUTTONS@@0@Z @ 0x18005F250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetSuppressedButtons(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 76) = a2;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = a3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewoperationhelpers.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
