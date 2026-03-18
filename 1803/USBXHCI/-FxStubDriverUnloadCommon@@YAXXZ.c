/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0001E40
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001EB4 (FxDriverEntryWorker.c)
 *     FxStubDriverMiniportUnload @ 0x1C0001FF0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0002010 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002188 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 *     WdfVersionUnbind_0 @ 0x1C0002232 (WdfVersionUnbind_0.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C004B000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C004B000, WdfDriverGlobals);
}
