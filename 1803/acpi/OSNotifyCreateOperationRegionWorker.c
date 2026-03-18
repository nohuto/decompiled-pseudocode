/*
 * XREFs of OSNotifyCreateOperationRegionWorker @ 0x1C002E950
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0035CFC (EnableDisableRegionSpacesForDevice.c)
 */

void __fastcall OSNotifyCreateOperationRegionWorker(_QWORD *P, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = P[4];
  if ( *(_DWORD *)(v2 + 320) == 3 )
  {
    LOBYTE(a2) = 1;
    EnableDisableRegionSpacesForDevice(P[4], a2);
  }
  ACPIInitDereferenceDeviceExtensionUnlocked(v2);
  ExFreePoolWithTag(P, 0x4D706341u);
}
