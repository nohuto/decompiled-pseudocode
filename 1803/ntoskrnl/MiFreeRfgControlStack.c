/*
 * XREFs of MiFreeRfgControlStack @ 0x140756F80
 * Callers:
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 * Callees:
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 */

void __fastcall MiFreeRfgControlStack(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v6; // rcx

  MiLockVad((__int64)KeGetCurrentThread(), a1);
  MiReferenceVad(a1);
  MiFreeToSubAllocatedRegion(v6, 3, a2, a3);
}
