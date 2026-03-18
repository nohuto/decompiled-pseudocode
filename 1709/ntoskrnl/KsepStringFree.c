/*
 * XREFs of KsepStringFree @ 0x140546878
 * Callers:
 *     KsepLoadShimProvider @ 0x14020EC88 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x14020EFE0 (KsepCacheHwIdFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1404F5170 (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x1404F5490 (KsepCacheDeviceFree.c)
 *     KseShimDriverIoCallbacks @ 0x14054418C (KseShimDriverIoCallbacks.c)
 *     KsepRegistryOpenKey @ 0x1405463CC (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbFreeDriverShims @ 0x140546CFC (KsepDbFreeDriverShims.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KsepStringSplitMultiString @ 0x1405EA860 (KsepStringSplitMultiString.c)
 *     KseSetDeviceFlags @ 0x1406DAAF0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406DAE38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceInsertData @ 0x1406DB788 (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1406DB998 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 */

void __fastcall KsepStringFree(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *a1 = 0LL;
      a1[1] = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197451;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
