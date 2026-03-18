/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C0279DC0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C0265F80 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02799F0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
