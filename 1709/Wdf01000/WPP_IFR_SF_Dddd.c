/*
 * XREFs of WPP_IFR_SF_dddd @ 0x1C0079E78
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverIsVersionAvailable @ 0x1C007A0B0 (imp_WdfDriverIsVersionAvailable.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C0092DEC (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099330 (-PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099580 (-PnpEventQueryStopStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dddd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        int _a1,
        int _a2,
        int _a3,
        int _a4)
{
  int v13; // eax
  unsigned __int64 v14; // rbx

  v13 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v13, (flags - 1) & 0x1F) )
  {
    v14 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v14 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v14),
        43LL,
        traceGuid,
        id,
        &_a1,
        4LL,
        &_a2,
        4LL,
        &_a3,
        4LL,
        &_a4,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 4LL, &_a2, 4LL, &_a3, 4LL, &_a4, 4LL, 0LL);
}
