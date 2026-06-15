/*
 * XREFs of _CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch$1 @ 0x1800365AC
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180036404 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch_1(
        __int64 a1,
        wil::details::in1diag3 **a2,
        __int64 a3)
{
  wil::details::in1diag3::Log_Hr(a2[25], a2, a3, (const char *)0x8007000ELL);
  return &loc_18003656F;
}
