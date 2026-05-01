/*
 * XREFs of ?GetViewInFocus@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180078BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewInFocus(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IApplicationView **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 17) + 72LL))(
           *((_QWORD *)this + 17),
           a2);
}
