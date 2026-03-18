/*
 * XREFs of VerifierEngCreatePath @ 0x1C0279E80
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0266410 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02799F0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
