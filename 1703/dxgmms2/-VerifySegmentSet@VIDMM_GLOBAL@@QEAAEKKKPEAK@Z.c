/*
 * XREFs of ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C005C17C
 * Callers:
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C005BF10 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C006E570 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSet(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  char v5; // r11
  unsigned int v6; // ebx
  unsigned int v7; // edx

  v5 = 0;
  v6 = *(_DWORD *)(472LL * a2 + *((_QWORD *)this + 5021) + 20);
  v7 = 0;
  if ( a5 )
    *a5 = 0;
  if ( (~*(_DWORD *)(*((_QWORD *)this + 5021) + 16LL) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6) + 80LL)) )
      v7 |= 1 << v5;
    ++v5;
    ++v6;
  }
  if ( a5 )
    *a5 = v7;
  return v7 == 0;
}
