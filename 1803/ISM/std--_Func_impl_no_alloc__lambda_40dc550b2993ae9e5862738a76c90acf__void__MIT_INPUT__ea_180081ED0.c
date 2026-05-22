/*
 * XREFs of std::_Func_impl_no_alloc__lambda_40dc550b2993ae9e5862738a76c90acf__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call @ 0x180081ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_40dc550b2993ae9e5862738a76c90acf__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_FOCUS_MESSAGE **a2)
{
  DWMInputRouter::OnFocusedThreadChanged(*(DWMInputRouter **)(a1 + 8), *a2);
}
