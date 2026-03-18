/*
 * XREFs of PoFxAbandonDevice @ 0x14055E514
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x14024D3C0 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopFxReleaseAcpiRefDevice @ 0x14023EE5C (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x14023FB3C (PopPluginAbandonDevice.c)
 *     PopFxFreeUniqueId @ 0x14055E7C0 (PopFxFreeUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x14055E818 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14055E898 (PopFxUnregisterDeviceOrWait.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 296) & 1) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 80);
    PopFxUnregisterDeviceOrWait();
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
      PopPluginAbandonDevice(v3, a1 + 280);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 128), a1 + 280, 0LL);
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
