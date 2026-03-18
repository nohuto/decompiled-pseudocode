/*
 * XREFs of MiBadRefCount @ 0x14017D194
 * Callers:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
}
