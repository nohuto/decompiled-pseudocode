/*
 * XREFs of MiFreeRfgControlStack @ 0x1406EDAF0
 * Callers:
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 */

void __fastcall MiFreeRfgControlStack(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char *v6; // rcx

  MiLockVad((__int64)KeGetCurrentThread(), a1);
  MiReferenceVad(a1);
  MiFreeToSubAllocatedRegion(v6, 3, a2, a3);
}
