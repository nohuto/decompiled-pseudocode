/*
 * XREFs of ?GetViewsByAppUserModelId@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18007B690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewsByAppUserModelId(
        ApplicationViewManagerVisibilityDebouncer *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IObjectArray **))(**((_QWORD **)this + 19)
                                                                                             + 40LL))(
           *((_QWORD *)this + 19),
           a2,
           a3);
}
