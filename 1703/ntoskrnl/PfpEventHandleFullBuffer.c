/*
 * XREFs of PfpEventHandleFullBuffer @ 0x140060270
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1400602BC (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !stru_140382BD0.Header.SignalState )
  {
    result = LOWORD(stru_14036DAE0.Alignment);
    if ( LOWORD(stru_14036DAE0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&stru_140382BD0, 0, 0);
  }
  return result;
}
