/*
 * XREFs of itrp_DELTAC3 @ 0x1C02CA8B0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_DeltaEngine @ 0x1C02CAB5C (itrp_DeltaEngine.c)
 */

__int64 __fastcall itrp_DELTAC3(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C0327CD4,
           (unsigned __int16)(*(_WORD *)(qword_1C0327C90 + 148) + 32),
           *(unsigned __int16 *)(qword_1C0327C90 + 150));
}
