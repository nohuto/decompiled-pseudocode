/*
 * XREFs of ACPIFixedFeatureButtonInitialize @ 0x1C0038F00
 * Callers:
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 * Callees:
 *     ACPIBuildFixedButtonExtension @ 0x1C000B3CC (ACPIBuildFixedButtonExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 */

void ACPIFixedFeatureButtonInitialize()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = 0LL;
  v1 = v0;
  if ( (int)ACPIBuildFixedButtonExtension(v2, &v3) >= 0 && v3 )
    ACPIInitReferenceDeviceExtension(v3);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
}
