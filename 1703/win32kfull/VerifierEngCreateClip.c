/*
 * XREFs of VerifierEngCreateClip @ 0x1C027D310
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C027D004 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *VerifierEngCreateClip()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateClip();
}
