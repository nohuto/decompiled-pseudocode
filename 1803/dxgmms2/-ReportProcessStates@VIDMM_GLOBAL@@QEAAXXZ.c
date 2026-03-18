/*
 * XREFs of ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3250
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3324 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00AD190 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportProcessStates(VIDMM_GLOBAL *this)
{
  _QWORD *i; // rbx
  CVirtualAddressAllocator *v3; // rcx
  __int64 j; // rbx
  CVirtualAddressAllocator *v5; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v6, (VIDMM_GLOBAL *)((char *)this + 41544));
  for ( i = (_QWORD *)*((_QWORD *)this + 5198); i != (_QWORD *)((char *)this + 41584); i = (_QWORD *)*i )
  {
    v3 = (CVirtualAddressAllocator *)i[59];
    if ( v3 )
      CVirtualAddressAllocator::ReportVaAllocatorState(v3);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 1748); j = (unsigned int)(j + 1) )
  {
    v5 = (CVirtualAddressAllocator *)*((_QWORD *)this + j + 5116);
    if ( v5 )
      CVirtualAddressAllocator::ReportVaAllocatorState(v5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
