/*
 * XREFs of imp_WdfWmiProviderGetTracingHandle @ 0x1C0071410
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfWmiProviderGetTracingHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider)
{
  FxWmiProvider *pProvider; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WmiProvider,
    0x1004u,
    (void **)&pProvider);
  return pProvider->m_TracingHandle;
}
