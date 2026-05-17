/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x18007F500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetThreadPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _TEB *v1; // rdx
  char result; // al

  if ( a1 > 3u )
    return -1;
  v1 = NtCurrentTeb();
  if ( !v1 )
    return -2;
  result = (char)v1->SystemReserved1[46];
  LOBYTE(v1->SystemReserved1[46]) = a1;
  return result;
}
