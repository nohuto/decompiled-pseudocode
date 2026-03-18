/*
 * XREFs of ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00DC588
 * Callers:
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00DBF50 (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00DC3A4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01F79D8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01F7AC8 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01F7E08 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
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
