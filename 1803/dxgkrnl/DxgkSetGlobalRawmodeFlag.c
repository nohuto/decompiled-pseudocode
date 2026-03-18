/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C01C7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C0227AD0 (-SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(__int64 a1)
{
  bool v1; // bl
  CCD_BTL *v2; // rax

  v1 = (_BYTE)a1 != 0;
  v2 = CCD_BTL::Global(a1);
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, v1);
}
