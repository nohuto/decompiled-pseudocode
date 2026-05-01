/*
 * XREFs of ?GetViews@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18007B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViews(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IObjectArray **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IObjectArray **))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           a2);
}
