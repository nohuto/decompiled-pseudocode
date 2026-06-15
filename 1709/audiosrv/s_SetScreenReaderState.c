/*
 * XREFs of s_SetScreenReaderState @ 0x1800A1ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_SetScreenReaderState(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ( (unsigned int)IsScreenReaderStateSupported() )
    return PbmSetScreenReaderState(a1, a2, a3);
  else
    return 0LL;
}
