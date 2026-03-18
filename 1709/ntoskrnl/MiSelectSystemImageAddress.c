/*
 * XREFs of MiSelectSystemImageAddress @ 0x140541514
 * Callers:
 *     MiSelectImageBase @ 0x140504474 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
