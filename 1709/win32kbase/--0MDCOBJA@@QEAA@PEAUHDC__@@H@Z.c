/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00A970C
 * Callers:
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041464 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041540 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C00A9F70 (HmgShareLockEx.c)
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 1LL);
  return this;
}
