/*
 * XREFs of itrp_DELTAC1 @ 0x1C02D0A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAC1(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C032CA44,
           *(unsigned __int16 *)(qword_1C032CA00 + 148),
           *(unsigned __int16 *)(qword_1C032CA00 + 150));
}
