/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x180081480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlQueryThreadPlaceholderCompatibilityMode()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  if ( v0 )
    return (char)v0->SystemReserved1[46];
  else
    return -2;
}
