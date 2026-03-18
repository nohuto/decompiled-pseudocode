/*
 * XREFs of MiResidentPagesForSpan @ 0x140568E3C
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
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
