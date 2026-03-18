/*
 * XREFs of ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094EC4
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C009DAA0 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportProcessStates(struct _KTHREAD **this)
{
  struct _KTHREAD **i; // rbx
  CVirtualAddressAllocator *v3; // rcx
  __int64 j; // rbx
  CVirtualAddressAllocator *v5; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v6, this + 5121);
  for ( i = (struct _KTHREAD **)this[5126]; i != this + 5126; i = (struct _KTHREAD **)*i )
  {
    v3 = i[55];
    if ( v3 )
      CVirtualAddressAllocator::ReportVaAllocatorState(v3);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 1604); j = (unsigned int)(j + 1) )
  {
    v5 = this[j + 5044];
    if ( v5 )
      CVirtualAddressAllocator::ReportVaAllocatorState(v5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
