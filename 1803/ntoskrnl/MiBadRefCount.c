/*
 * XREFs of MiBadRefCount @ 0x1401A6864
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
}
