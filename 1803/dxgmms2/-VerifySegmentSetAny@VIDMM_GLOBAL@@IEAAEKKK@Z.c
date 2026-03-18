/*
 * XREFs of ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0063C88
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySegmentSetAny(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rdx
  unsigned int v5; // r10d

  v4 = *((_QWORD *)this + 5090) + 1560LL * a2;
  v5 = *(_DWORD *)(v4 + 20);
  if ( (~*(_DWORD *)(v4 + 16) & a3) != 0 || !a3 )
    return 0;
  while ( (a3 & 1) == 0 || a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v5) + 80LL)) )
  {
    ++v5;
    a3 >>= 1;
    if ( !a3 )
      return 0;
  }
  return 1;
}
