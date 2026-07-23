/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x180081480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryThreadPlaceholderCompatibilityMode(void)
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -2;
}
