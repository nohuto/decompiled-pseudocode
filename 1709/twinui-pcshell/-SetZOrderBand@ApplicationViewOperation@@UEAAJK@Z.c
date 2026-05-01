/*
 * XREFs of ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z @ 0x180106E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewOperation::SetZOrderBand(ApplicationViewOperation *this, int a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *((_DWORD *)this + 38) = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\ApplicationViewOperationHelpers.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
