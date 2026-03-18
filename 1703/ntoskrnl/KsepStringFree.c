/*
 * XREFs of KsepStringFree @ 0x1404B4E70
 * Callers:
 *     KsepLoadShimProvider @ 0x140208258 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1402084C0 (KsepCacheHwIdFree.c)
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x1404B3890 (KseShimDriverIoCallbacks.c)
 *     KsepRegistryOpenKey @ 0x1404B49C4 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbFreeDriverShims @ 0x1404B5204 (KsepDbFreeDriverShims.c)
 *     KsepStringSplitMultiString @ 0x140598F64 (KsepStringSplitMultiString.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1405ACC3C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x1405ACEF0 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x1405DA500 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1406AF6A0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406AF8AC (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryCreateKey @ 0x1406B01EC (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
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
    KsepHistoryErrors[2 * v3] = 197454;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Eu, 0LL);
  }
}
