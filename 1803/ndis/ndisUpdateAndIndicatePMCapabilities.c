/*
 * XREFs of ndisUpdateAndIndicatePMCapabilities @ 0x1C004B788
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C004AD00 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisAoAcInitDisconnectedStandby @ 0x1C004F890 (ndisAoAcInitDisconnectedStandby.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 */

__int64 __fastcall ndisUpdateAndIndicatePMCapabilities(__int64 a1)
{
  _QWORD *PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  if ( PoolWithTag )
  {
    ndisReferenceMiniportNoCheck(a1, 0x10u);
    *PoolWithTag = a1;
    PoolWithTag[1] = ndisQueuedUpdatePMCapabilities;
    ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_(0x7Au, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    return 3221225626LL;
  }
}
