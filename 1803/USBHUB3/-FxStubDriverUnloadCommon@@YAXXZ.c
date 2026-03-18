/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0039708
 * Callers:
 *     DriverEntry_0 @ 0x1C0039770 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C00398A0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C00398B0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0039A34 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C005B000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C005B000, WdfDriverGlobals);
}
