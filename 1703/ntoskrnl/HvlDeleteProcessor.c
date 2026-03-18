/*
 * XREFs of HvlDeleteProcessor @ 0x140687628
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     HvlpFreeOverlayPages @ 0x140136B90 (HvlpFreeOverlayPages.c)
 *     HvlpGetRegister64 @ 0x1401EB6DC (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401EB784 (HvlpSetRegister64.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  void *VirtualApicAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1->VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843, &v6);
      HvlpSetRegister64(589843, v6 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    VirtualApicAssist = a1->VirtualApicAssist;
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist, a2, a3);
    a1->VirtualApicAssist = 0LL;
  }
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
