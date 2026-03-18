/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007100
 * Callers:
 *     DriverEntry_0 @ 0x1C0007170 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C00072A0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C00072B0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007400 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C004E000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C004E000, WdfDriverGlobals);
}
