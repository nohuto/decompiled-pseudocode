/*
 * XREFs of RtlLocateLegacyContext @ 0x180086770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCONTEXT __cdecl RtlLocateLegacyContext(PCONTEXT_EX ContextEx, PULONG Length)
{
  LONG Offset; // r9d
  ULONG v3; // r10d

  Offset = ContextEx->Legacy.Offset;
  if ( ContextEx->All.Offset > Offset )
    return 0LL;
  v3 = ContextEx->Legacy.Length;
  if ( (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (int)(v3 + Offset) )
    return 0LL;
  if ( Length )
  {
    *Length = v3;
    Offset = ContextEx->Legacy.Offset;
  }
  return (PCONTEXT)((char *)ContextEx + Offset);
}
