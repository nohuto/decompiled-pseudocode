/*
 * XREFs of PoFxAbandonDevice @ 0x1405C8D04
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x140283158 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopFxReleaseAcpiRefDevice @ 0x1402761C4 (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x140277128 (PopPluginAbandonDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1405C81EC (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1405C8244 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFreeUniqueId @ 0x1405C82C4 (PopFxFreeUniqueId.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdi
  __int64 v4; // rax

  v1 = *(_DWORD *)(a1 + 296);
  v2 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 80);
    PopFxUnregisterDeviceOrWait((struct _KEVENT *)a1);
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
    {
      PopPluginAbandonDevice(*(_QWORD *)(a1 + 128), a1 + 280);
      v4 = *(_QWORD *)(a1 + 128);
    }
    PopDiagTraceFxDevicePreparation(a1, v4, (unsigned __int16 *)(a1 + 280), 0);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_DWORD *)(a1 + 296) &= ~1u;
    v1 = *(_DWORD *)(a1 + 296);
  }
  if ( (v1 & 2) != 0 )
  {
    PopFxFreeUniqueId(a1);
    *(_DWORD *)(a1 + 296) &= ~2u;
    v1 = *(_DWORD *)(a1 + 296);
  }
  if ( (v1 & 0x4000) != 0 )
  {
    PopFxReleaseAcpiRefDevice(v2, (void *)0x70466F50);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
}
