/*
 * XREFs of MiSelectSystemImageAddress @ 0x1405F680C
 * Callers:
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
