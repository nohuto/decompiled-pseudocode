/*
 * XREFs of MiReclaimSystemVa @ 0x1400CEC0C
 * Callers:
 *     MiObtainDynamicVa @ 0x1400499C0 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1401832A4 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_1403CB808 <= 0x8000000 )
    return KeSetEvent(&stru_1403CBB78, 0, 0);
  return result;
}
