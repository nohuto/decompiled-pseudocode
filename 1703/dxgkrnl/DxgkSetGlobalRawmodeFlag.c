/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C01AB9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  CCD_BTL *v5; // rax

  v4 = (_BYTE)a1 != 0;
  v5 = CCD_BTL::Global(a1, a2, a3, a4);
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v5, v4);
}
