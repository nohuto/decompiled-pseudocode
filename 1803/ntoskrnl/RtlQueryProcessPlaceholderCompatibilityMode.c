/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x1407890B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryProcessPlaceholderCompatibilityMode(void)
{
  unsigned __int64 v0; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  if ( v0 )
    return *(_BYTE *)(v0 + 1968);
  else
    return -3;
}
