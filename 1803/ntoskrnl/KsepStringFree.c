/*
 * XREFs of KsepStringFree @ 0x1405FE3B8
 * Callers:
 *     KsepLoadShimProvider @ 0x14024CEDC (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x14024D3D0 (KsepCacheHwIdFree.c)
 *     KseAddHardwareId @ 0x1405E56F8 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x1405FB47C (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x1405FC854 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x1405FE0C4 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1405FE30C (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14061D8FC (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x14061DCD0 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x14061DE00 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x140744BB0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140745064 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140746254 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140746534 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
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
