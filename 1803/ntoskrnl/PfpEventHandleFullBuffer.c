/*
 * XREFs of PfpEventHandleFullBuffer @ 0x14008E910
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x14008E958 (PfTFullEventListAdd.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_1403CD360.Alignment);
    if ( LOWORD(stru_1403CD360.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
