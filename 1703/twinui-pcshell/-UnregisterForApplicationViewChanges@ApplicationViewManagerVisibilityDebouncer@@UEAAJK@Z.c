/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x180078A50
 * Callers:
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z @ 0x18007A4B0 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges(
        ApplicationViewManagerVisibilityDebouncer *this,
        int a2)
{
  return AgileRegistrationList::Unregister((ApplicationViewManagerVisibilityDebouncer *)((char *)this + 112), a2);
}
