/*
 * XREFs of MiResidentPagesForSpan @ 0x14045696C
 * Callers:
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 */

__int64 __fastcall MiResidentPagesForSpan(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r11

  MiGetPteAddress(a1);
  MiGetPteAddress(v1);
  do
  {
    MiGetPteAddress(v2);
    MiGetPteAddress(v3);
  }
  while ( v5 != 1 );
  return v4;
}
