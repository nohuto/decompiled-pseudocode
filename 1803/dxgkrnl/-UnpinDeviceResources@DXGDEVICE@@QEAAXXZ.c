/*
 * XREFs of ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C018C5E8
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C018A344 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C016ACA4 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *i; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 j; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 23);
  for ( i = this[7]; i; i = (struct _KTHREAD *)*((_QWORD *)i + 5) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this[2] + 2)) )
    {
      v4 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v4 + 24) = 470LL;
      WdLogEvent5_WdAssertion(v4);
    }
    for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 64) )
      DXGDEVICE::DisablePinnedAllocation((DXGDEVICE *)this, (struct _VIDMM_MULTI_ALLOC **)j);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
