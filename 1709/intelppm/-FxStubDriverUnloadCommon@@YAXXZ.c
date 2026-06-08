/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0003C20
 * Callers:
 *     DriverEntry_0 @ 0x1C0003C90 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0003DC0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0003DD0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003F20 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0014000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0014000, WdfDriverGlobals);
}
