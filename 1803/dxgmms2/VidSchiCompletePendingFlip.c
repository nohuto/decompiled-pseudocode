/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C0015804
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)(a1 + 132); ++i )
    VidSchiCompletePendingFlipOnPlane(a1, a2, a3, i);
  return 0LL;
}
