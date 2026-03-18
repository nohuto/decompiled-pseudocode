/*
 * XREFs of PopKsrCallback @ 0x140243FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 )
  {
    if ( (_DWORD)Argument1 == 1 )
      PopKsrPrepared = 0;
  }
  else
  {
    PopKsrPrepared = 1;
  }
}
