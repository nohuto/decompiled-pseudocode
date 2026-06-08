/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000BB10
 * Callers:
 *     DriverEntry_0 @ 0x1C000BB80 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C000BCB0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C000BCC0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C000BE10 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0011000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0011000, WdfDriverGlobals);
}
