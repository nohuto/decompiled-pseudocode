/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0104B14
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0104A14 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C017F100 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 i; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGALLOCATION *k; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct DXGALLOCATION *j; // rsi
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v10 + 24) = 1493LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v17,
    (struct _KTHREAD **)this + 23,
    v4,
    v5);
  for ( i = *((_QWORD *)this + 7); i; i = *(_QWORD *)(i + 40) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = 435LL;
      WdLogEvent5_WdAssertion(v15);
    }
    for ( j = *(struct DXGALLOCATION **)(i + 24); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      DXGDEVICE::DisablePinnedAllocation(this, j);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v17,
    (struct _KTHREAD **)this + 20,
    v7,
    v8);
  for ( k = (struct DXGALLOCATION *)*((_QWORD *)this + 6); k; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
    DXGDEVICE::DisablePinnedAllocation(this, k);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
