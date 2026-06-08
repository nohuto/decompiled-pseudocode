/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000C240
 * Callers:
 *     DriverEntry_0 @ 0x1C000C2B0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C000C3E0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C000C3F0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C000C540 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0011000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0011000, WdfDriverGlobals);
}
