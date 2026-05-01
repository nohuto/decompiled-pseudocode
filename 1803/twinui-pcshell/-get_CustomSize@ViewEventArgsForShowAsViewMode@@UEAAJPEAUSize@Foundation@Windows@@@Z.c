/*
 * XREFs of ?get_CustomSize@ViewEventArgsForShowAsViewMode@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800964E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_CustomSize(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *((_QWORD *)this + 6);
  return result;
}
