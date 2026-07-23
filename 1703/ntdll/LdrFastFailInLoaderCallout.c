/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180087E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( stru_1801555A8.OwningThread == result->ClientId.UniqueThread || dword_18015B398 < 2 )
    __fastfail(0x17u);
  return result;
}
