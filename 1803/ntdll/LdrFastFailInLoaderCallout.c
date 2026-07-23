/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180082D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( stru_1801565B0.OwningThread == result->ClientId.UniqueThread || dword_18015C3B8 < 2 )
    __fastfail(0x17u);
  return result;
}
