/*
 * XREFs of ndisMInvokeInitialize @ 0x1C00AABA0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0014BF0 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeInitialize(const struct _TlgProvider_t *a1, __int64 a2)
{
  const unsigned __int16 *ProviderMetadataPtr; // rdi
  unsigned int v5; // esi
  NdisStopwatch v7; // [rsp+30h] [rbp-28h] BYREF

  ProviderMetadataPtr = a1[59].ProviderMetadataPtr;
  memset(&v7, 0, sizeof(v7));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xCBu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, ProviderMetadataPtr);
  v7.QpcStartTime = KeQueryPerformanceCounter(&v7.QpFrequency);
  v5 = (*((__int64 (__fastcall **)(const struct _TlgProvider_t *, _QWORD, __int64))ProviderMetadataPtr + 17))(
         a1,
         *((_QWORD *)ProviderMetadataPtr + 8),
         a2);
  v7.QpcLastStopTime = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, &v7, v5 != 0 ? 0xB : 0, v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0xCCu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, ProviderMetadataPtr, v5);
  return v5;
}
