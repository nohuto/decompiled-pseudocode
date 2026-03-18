/*
 * XREFs of ACPIInitShutdownNotification @ 0x1C0087050
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C009B330 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 */

void *ACPIInitShutdownNotification()
{
  void *result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x44706341u);
  AcpiShutdownNotification = result;
  if ( result )
  {
    KeInitializeGuardedMutex(&AcpiShutdownInProgressWorkerLock);
    v1 = 0;
    v2 = 4;
    result = (void *)OSReadRegValue("NotifyOsShutdownEnabled", 0LL, &v1, &v2);
    if ( !(_DWORD)result && v2 == 4 && v1 )
    {
      v1 = 0;
      AcpiNotifyOsShutdownEnabled = 1;
      result = (void *)OSReadRegValue("NotifyOsShutdownCritical", 0LL, &v1, &v2);
      if ( !(_DWORD)result && v2 == 4 )
        AcpiNotifyOsShutdownCritical = v1 != 0;
    }
    else
    {
      AcpiNotifyOsShutdownEnabled = 0;
    }
  }
  return result;
}
