/*
 * XREFs of OSInterruptVector @ 0x1C009902C
 * Callers:
 *     ACPIInterruptInitialize @ 0x1C007D708 (ACPIInterruptInitialize.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C008CBC8 (AcpiIrqLibSetupSciInterrupt.c)
 */

NTSTATUS __fastcall OSInterruptVector(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  int v2; // eax
  int v3; // edx
  int v4; // edi
  NTSTATUS result; // eax
  struct _DEVICE_OBJECT *v6; // rax
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
  if ( v2 >= 0 )
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    v6 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 736);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.PhysicalDeviceObject = v6;
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
        (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
        result);
      return v8;
    }
  }
  else
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      10,
      (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
      v2);
    return v4;
  }
  return result;
}
