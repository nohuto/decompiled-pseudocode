/*
 * XREFs of PoFxAbandonDevice @ 0x140570AF4
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x140238310 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopFxReleaseAcpiRefDevice @ 0x14022BAD8 (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x14022C77C (PopPluginAbandonDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140570848 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1405708A0 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFreeUniqueId @ 0x140570920 (PopFxFreeUniqueId.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 296) & 1) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 80);
    PopFxUnregisterDeviceOrWait((struct _KEVENT *)a1);
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
      PopPluginAbandonDevice(v3, a1 + 280);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 128), (unsigned __int16 *)(a1 + 280), 0);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_DWORD *)(a1 + 296) &= ~1u;
  }
  if ( (*(_DWORD *)(a1 + 296) & 2) != 0 )
  {
    PopFxFreeUniqueId(a1);
    *(_DWORD *)(a1 + 296) &= ~2u;
  }
  if ( (*(_DWORD *)(a1 + 296) & 0x4000) != 0 )
  {
    PopFxReleaseAcpiRefDevice(v1, (void *)0x70466F50);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
}
