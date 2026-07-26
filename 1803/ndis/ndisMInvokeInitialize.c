/*
 * XREFs of ndisMInvokeInitialize @ 0x1C00C2F64
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C001E078 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // esi
  NdisStopwatch v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 3784);
  memset(&v7, 0, sizeof(v7));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xDBu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v2);
  v7.QpcStartTime = KeQueryPerformanceCounter(&v7.QpFrequency);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 136))(a1, *(_QWORD *)(v2 + 64), a2);
  v7.QpcLastStopTime = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, &v7, v5 != 0 ? 0xB : 0, v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0xDCu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v2, v5);
  return v5;
}
