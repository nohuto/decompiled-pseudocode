/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000C440
 * Callers:
 *     DriverEntry_0 @ 0x1C000C4B0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C000C5E0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C000C5F0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C000C774 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0011000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0011000, WdfDriverGlobals);
}
