/*
 * XREFs of ?RemoveAll@?$CMap@PEAVCManipulation@@PEAVCInteraction@@V?$CMapEqualHelper@PEAVCManipulation@@PEAVCInteraction@@@@@@QEAAXXZ @ 0x18016D644
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D548 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CMap<CManipulation *,CInteraction *,CMapEqualHelper<CManipulation *,CInteraction *>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
