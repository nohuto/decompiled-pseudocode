/*
 * XREFs of MiReclaimSystemVa @ 0x1400F74B0
 * Callers:
 *     MiObtainDynamicVa @ 0x1400F6200 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x140157140 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140388608 <= 0x8000000 )
    return KeSetEvent(&stru_140388960, 0, 0);
  return result;
}
