/*
 * XREFs of ?VerifyExpectedPayload@InputAttemptedTarget@@UEBAXPEBX_K@Z @ 0x180082000
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall InputAttemptedTarget::VerifyExpectedPayload(
        InputAttemptedTarget *this,
        const void *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputtarget.cpp",
      a4);
    JUMPOUT(0x180082024LL);
  }
}
