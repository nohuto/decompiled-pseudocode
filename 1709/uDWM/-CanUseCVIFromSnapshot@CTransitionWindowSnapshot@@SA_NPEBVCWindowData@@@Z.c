/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000BA4C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000B810 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18007D594 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(CWindowSnapshot **a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*((_BYTE *)a1 + 596) & 8) != 0 && a1[53] )
    return CWindowSnapshot::HasCVIOfCompatibleSize(
             a1[53],
             (const struct tagRECT *)((char *)a1 + (((_DWORD)a1[75] & 0x1000000) != 0 ? 604LL : 48LL)));
  return v1;
}
