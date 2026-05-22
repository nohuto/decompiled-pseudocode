/*
 * XREFs of _ViewHierarchy::GetAllAncestors_::_1_::catch$100 @ 0x1800E4782
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18002D598 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewHierarchy::GetAllAncestors_::_1_::catch_100(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+18h] [rbp-20h]

  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56);
  LODWORD(v3) = *(_DWORD *)(a2 + 112);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x12C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
    "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
    v3);
  return &loc_18002C7A5;
}
