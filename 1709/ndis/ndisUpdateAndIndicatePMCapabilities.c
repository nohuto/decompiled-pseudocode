/*
 * XREFs of ndisUpdateAndIndicatePMCapabilities @ 0x1C004A7B0
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C00499B0 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisAoAcInitDisconnectedStandby @ 0x1C004EF40 (ndisAoAcInitDisconnectedStandby.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0022FEC (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 */

__int64 __fastcall ndisUpdateAndIndicatePMCapabilities(__int64 a1)
{
  _QWORD *PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  if ( PoolWithTag )
  {
    ndisReferenceMiniportNoCheck(a1);
    *PoolWithTag = a1;
    PoolWithTag[1] = ndisQueuedUpdatePMCapabilities;
    ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_(0x7Au, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids);
    return 3221225626LL;
  }
}
