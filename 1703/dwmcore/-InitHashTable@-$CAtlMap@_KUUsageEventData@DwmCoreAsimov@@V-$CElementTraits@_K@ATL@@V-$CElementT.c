/*
 * XREFs of ?InitHashTable@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA_NI_N@Z @ 0x180187288
 * Callers:
 *     ?CreateNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x18018712C (-CreateNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrai.c)
 *     ?Rehash@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAXI@Z @ 0x1801877F0 (-Rehash@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?RemoveAll@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAXXZ @ 0x180187AA4 (-RemoveAll@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEAAXXZ @ 0x1800C9E18 (-UpdateRehashThresholds@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CE.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

char __fastcall ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::InitHashTable(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rdi
  void *v5; // rcx
  void *v7; // rax

  v4 = a2;
  v5 = *(void **)a1;
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *(_QWORD *)a1 = 0LL;
  }
  if ( !a3 )
    goto LABEL_6;
  v7 = operator new(saturated_mul(v4, 8uLL));
  *(_QWORD *)a1 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 8 * v4);
LABEL_6:
    *(_DWORD *)(a1 + 16) = v4;
    ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::UpdateRehashThresholds(a1);
    LOBYTE(v7) = 1;
  }
  return (char)v7;
}
