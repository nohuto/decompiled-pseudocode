/*
 * XREFs of s_pbmPlayToStreamStateChanged @ 0x1800A2410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmPlayToStreamStateChanged(__int64 a1, unsigned int a2)
{
  if ( (unsigned int)IsPbmPlayToStreamStateChangedSupported() )
    return PbmPlayToStreamStateChanged(a1, a2);
  else
    return 0LL;
}
