/*
 * XREFs of GetPowerTransitionsState @ 0x1C011A430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPowerTransitionsState(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)gPowerTransitionsState;
  *(_OWORD *)a1 = *(_OWORD *)gPowerTransitionsState;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&gPowerTransitionsState[4];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&gPowerTransitionsState[8];
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&gPowerTransitionsState[12];
  return result;
}
