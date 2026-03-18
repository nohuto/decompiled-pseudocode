/*
 * XREFs of OSInterruptVector @ 0x1C00AF5A8
 * Callers:
 *     ACPIInterruptInitialize @ 0x1C0090DB4 (ACPIInterruptInitialize.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C00903A8 (AcpiIrqLibSetupSciInterrupt.c)
 */

NTSTATUS __fastcall OSInterruptVector(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  int v2; // eax
  int v3; // edx
  int v4; // edi
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS result; // eax
  int v7; // edx
  NTSTATUS v8; // ebx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 96),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  v2 = AcpiIrqLibSetupSciInterrupt();
  v4 = v2;
  if ( v2 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      10,
      (__int64)&WPP_675fdfd554893f59d272207a0f01211e_Traceguids,
      v2);
    return v4;
  }
  else
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    v5 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 736);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.PhysicalDeviceObject = v5;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    result = IoConnectInterruptEx(&Parameters);
    v8 = result;
    if ( result < 0 )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        22,
        11,
        (__int64)&WPP_675fdfd554893f59d272207a0f01211e_Traceguids,
        result);
      return v8;
    }
  }
  return result;
}
