/*
 * XREFs of ndisEnableWppTracingCallback @ 0x1C004F2E0
 * Callers:
 *     WppClassicProviderCallback @ 0x1C004EEF0 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C00E3420 (WppTraceCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C0022F90 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E588 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisEnableWppTracingCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  char v5; // bl
  char v6; // di
  int v7; // esi
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di

  v5 = a3;
  LOBYTE(a3) = a5;
  LOBYTE(a1) = v5;
  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(a1, a4, a3);
  if ( v5 && (v6 & 2) != 0 && a5 )
  {
    if ( byte_1C0098749 )
      WPP_SF_(0x60u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v9 = ndisMiniportList;
    v10 = v8;
    while ( v9 )
    {
      if ( (unsigned int)++v7 > 1 && byte_1C0098749 )
        WPP_SF_(0x61u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
      if ( v9->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v9) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v10);
        ndisMEmitTraceRundown(v9);
        v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v9, 0x54u);
      }
      else if ( byte_1C0098749 )
      {
        WPP_SF_qq(0x62u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v9, v9->DriverHandle);
      }
      v9 = v9->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v10);
    if ( byte_1C0098749 )
      WPP_SF_(0x63u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  }
}
