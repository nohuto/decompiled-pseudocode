/*
 * XREFs of ?GetViewInFocus@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18007B7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewInFocus(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IApplicationView **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 19) + 72LL))(
           *((_QWORD *)this + 19),
           a2);
}
