/*
 * XREFs of ndisEnableWppTracingCallback @ 0x1C004FC24
 * Callers:
 *     WppClassicProviderCallback @ 0x1C004F840 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C00E4B90 (WppTraceCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C002463C (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004EEF0 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisEnableWppTracingCallback(__int64 a1, __int64 a2, char a3, int a4, char a5)
{
  char v6; // di
  int v7; // esi
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(a3, a4, a5);
  if ( a3 && (v6 & 2) != 0 && a5 )
  {
    if ( byte_1C0099609 )
      WPP_SF_(0x60u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v9 = ndisMiniportList;
    v10 = v8;
    while ( v9 )
    {
      if ( (unsigned int)++v7 > 1 && byte_1C0099609 )
        WPP_SF_(0x61u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
      if ( v9->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v9) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v10);
        ndisMEmitTraceRundown(v9);
        v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v9, 0x54u, v11, v12);
      }
      else if ( byte_1C0099609 )
      {
        WPP_SF_qq(0x62u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v9, v9->DriverHandle);
      }
      v9 = v9->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v10);
    if ( byte_1C0099609 )
      WPP_SF_(0x63u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  }
}
