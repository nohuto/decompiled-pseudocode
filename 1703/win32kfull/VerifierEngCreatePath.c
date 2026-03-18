/*
 * XREFs of VerifierEngCreatePath @ 0x1C027D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C027D004 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
