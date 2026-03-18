/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x1C0279AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C02493F4 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02799F0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this);
}
