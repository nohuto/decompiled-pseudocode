/*
 * XREFs of MiFreeRfgControlStack @ 0x1406BFE90
 * Callers:
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 * Callees:
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 */

void __fastcall MiFreeRfgControlStack(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rcx

  MiLockVad((__int64)KeGetCurrentThread(), a1);
  MiReferenceVad(a1);
  MiFreeToSubAllocatedRegion(v6, 3, a2, a3);
}
