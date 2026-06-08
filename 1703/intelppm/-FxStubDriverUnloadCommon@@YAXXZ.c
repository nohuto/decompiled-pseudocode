/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0003B20
 * Callers:
 *     DriverEntry_0 @ 0x1C0003B90 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0003CC0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0003CD0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003E20 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0013000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0013000, WdfDriverGlobals);
}
