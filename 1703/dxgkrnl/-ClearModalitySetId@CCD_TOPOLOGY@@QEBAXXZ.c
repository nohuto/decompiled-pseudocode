/*
 * XREFs of ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00EE258
 * Callers:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00EBA90 (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE884 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01DE980 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01DECB8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::ClearModalitySetId(CCD_TOPOLOGY *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 7) = 0LL;
  CCD_SET_STRING_ID::_Cleanup(this);
}
