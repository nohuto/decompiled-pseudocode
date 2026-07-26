/*
 * XREFs of ndisMInvokeInitialize @ 0x1C00C0270
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0011C78 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // esi
  NdisStopwatch v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 3784);
  memset(&v7, 0, sizeof(v7));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xD8u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v2);
  v7.QpcStartTime = KeQueryPerformanceCounter(&v7.QpFrequency);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 136))(a1, *(_QWORD *)(v2 + 64), a2);
  v7.QpcLastStopTime = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, &v7, v5 != 0 ? 0xB : 0, v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0xD9u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v2, v5);
  return v5;
}
