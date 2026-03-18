/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0102820
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C010271C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0182A44 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 i; // rdi
  struct DXGALLOCATION *k; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGALLOCATION *j; // rsi
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 1495LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)this + 23);
  for ( i = *((_QWORD *)this + 7); i; i = *(_QWORD *)(i + 40) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 468LL;
      WdLogEvent5_WdAssertion(v7);
    }
    for ( j = *(struct DXGALLOCATION **)(i + 24); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      DXGDEVICE::DisablePinnedAllocation(this, j);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)this + 20);
  for ( k = (struct DXGALLOCATION *)*((_QWORD *)this + 6); k; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
    DXGDEVICE::DisablePinnedAllocation(this, k);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
