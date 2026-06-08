/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0003C8C
 * Callers:
 *     DriverEntry_0 @ 0x1C0003CF0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0003E20 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0003E30 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003FB4 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0015000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0015000, WdfDriverGlobals);
}
