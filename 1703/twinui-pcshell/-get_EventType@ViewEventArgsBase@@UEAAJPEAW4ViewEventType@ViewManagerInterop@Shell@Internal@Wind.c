/*
 * XREFs of ?get_EventType@ViewEventArgsBase@@UEAAJPEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800BE1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsBase::get_EventType(
        ViewEventArgsBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return 0LL;
}
