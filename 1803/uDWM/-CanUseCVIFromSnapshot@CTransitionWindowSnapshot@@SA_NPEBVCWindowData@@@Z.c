/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180004A18
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180001D0C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800047E0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180086C80 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  char v1; // bl
  CWindowSnapshot *v3; // r8

  v1 = 0;
  if ( (*((_BYTE *)a1 + 596) & 4) != 0 )
  {
    v3 = (CWindowSnapshot *)*((_QWORD *)a1 + 53);
    if ( v3 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(
               v3,
               (const struct tagRECT *)((char *)a1 + ((*((_DWORD *)a1 + 150) & 0x1000000) != 0 ? 0x22C : 0) + 48));
  }
  return v1;
}
