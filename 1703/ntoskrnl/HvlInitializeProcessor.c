/*
 * XREFs of HvlInitializeProcessor @ 0x1405A7BC0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     HvlpFreeOverlayPages @ 0x140136B90 (HvlpFreeOverlayPages.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E668C (HvlpSetupCachedHypercallPages.c)
 *     HvlpAllocateOverlayPages @ 0x1401EA418 (HvlpAllocateOverlayPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     HvlpEnableRootVirtualProcessor @ 0x1406877C4 (HvlpEnableRootVirtualProcessor.c)
 */

__int64 __fastcall HvlInitializeProcessor(_SLIST_HEADER *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  char v5; // al
  __int64 v6; // rbp
  void *v7; // rdi
  __int64 OverlayPages; // rax
  __int64 IndependentPages; // rax
  SIZE_T v10; // rdx
  MEMORY_CACHING_TYPE v11; // r8d
  PHYSICAL_ADDRESS *v12; // rsi

  if ( !HvlHypervisorConnected )
    return 0LL;
  v5 = HvlpFlags;
  v6 = 2LL;
  if ( (HvlpFlags & 2) == 0 )
  {
LABEL_7:
    v7 = 0LL;
    if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
    {
      OverlayPages = HvlpAllocateOverlayPages();
      v7 = (void *)OverlayPages;
      if ( !OverlayPages )
        return 3221225626LL;
      a1[1552].Region = OverlayPages;
    }
    IndependentPages = MmAllocateIndependentPages(0x6000uLL, *(unsigned __int16 *)(a1[12].Alignment + 146), a3);
    v12 = (PHYSICAL_ADDRESS *)IndependentPages;
    if ( IndependentPages )
    {
      a1[1552].Alignment = IndependentPages;
      do
      {
        v12[2] = MmGetPhysicalAddress(v12);
        v12 += 512;
        --v6;
      }
      while ( v6 );
      HvlpSetupCachedHypercallPages(a1);
      return 0LL;
    }
    if ( v7 )
    {
      HvlpFreeOverlayPages(v7, v10, v11);
      a1[1552].Region = 0LL;
    }
    return 3221225626LL;
  }
  result = HvlpEnableRootVirtualProcessor();
  if ( (int)result >= 0 )
  {
    v5 = HvlpFlags;
    goto LABEL_7;
  }
  return result;
}
