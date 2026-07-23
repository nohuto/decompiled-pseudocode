/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1400128B0
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1400128F8 (PfTFullEventListAdd.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140387A60.Alignment);
    if ( LOWORD(stru_140387A60.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
