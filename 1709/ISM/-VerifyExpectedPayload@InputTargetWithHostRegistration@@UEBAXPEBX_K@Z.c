/*
 * XREFs of ?VerifyExpectedPayload@InputTargetWithHostRegistration@@UEBAXPEBX_K@Z @ 0x180081C10
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall InputTargetWithHostRegistration::VerifyExpectedPayload(
        InputTargetWithHostRegistration *this,
        const void *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputtarget.cpp",
      a4);
    JUMPOUT(0x180081C34LL);
  }
}
