/*
 * XREFs of HvlInitializeProcessor @ 0x1405B7BCC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     HvlpFreeOverlayPages @ 0x14000F4C0 (HvlpFreeOverlayPages.c)
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401EB48C (HvlpSetupCachedHypercallPages.c)
 *     HvlpAllocateOverlayPages @ 0x1401EF5FC (HvlpAllocateOverlayPages.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     HvlpEnableRootVirtualProcessor @ 0x1406B31E4 (HvlpEnableRootVirtualProcessor.c)
 */

__int64 __fastcall HvlInitializeProcessor(_SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  void *v6; // rsi
  void *v7; // rbp
  __int64 OverlayPages; // rax
  __int64 v9; // rax
  SIZE_T v10; // rdx
  __int64 IndependentPages; // rax
  PHYSICAL_ADDRESS *v12; // rdi

  if ( !HvlHypervisorConnected )
    return 0LL;
  v5 = 2LL;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpEnableRootVirtualProcessor(), (int)result >= 0) )
  {
    v6 = 0LL;
    v7 = 0LL;
    if ( (HvlpFlags & 1) != 0 && (HvlpFlags & 2) == 0 )
    {
      OverlayPages = HvlpAllocateOverlayPages();
      v7 = (void *)OverlayPages;
      if ( !OverlayPages )
        return 3221225626LL;
      a1[1544].Region = OverlayPages;
    }
    if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
    {
      v9 = HvlpAllocateOverlayPages();
      v6 = (void *)v9;
      if ( !v9 )
      {
LABEL_18:
        if ( v7 )
        {
          HvlpFreeOverlayPages(v7, v10, (MEMORY_CACHING_TYPE)a3);
          a1[1544].Region = 0LL;
        }
        if ( v6 )
        {
          HvlpFreeOverlayPages(v6, v10, (MEMORY_CACHING_TYPE)a3);
          a1[1563].Region = 0LL;
        }
        return 3221225626LL;
      }
      a1[1563].Region = v9;
    }
    IndependentPages = MmAllocateIndependentPages(0x6000uLL, *(unsigned __int16 *)(a1[12].Alignment + 146), a3);
    v12 = (PHYSICAL_ADDRESS *)IndependentPages;
    if ( IndependentPages )
    {
      a1[1544].Alignment = IndependentPages;
      do
      {
        v12[2] = MmGetPhysicalAddress(v12);
        v12 += 512;
        --v5;
      }
      while ( v5 );
      HvlpSetupCachedHypercallPages(a1);
      return 0LL;
    }
    goto LABEL_18;
  }
  return result;
}
